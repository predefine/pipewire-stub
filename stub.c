#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/time.h>

// pipewire
void pw_init(int* argc, char** argv[]) { }
void pw_deinit(void) { }
const char* pw_get_library_version(void) { return "0.0.0"; }

// thread-loop
void* pw_thread_loop_new(const char* name, const void* props)
{
  return NULL + 1;
}
int pw_thread_loop_start(void* loop) { return -1; }
void* pw_thread_loop_get_loop(void* loop) { return NULL; }
void pw_thread_loop_signal(void* loop, bool wait_for_accept) { }
void pw_thread_loop_wait(void* loop) { }
void pw_thread_loop_destroy(void* loop) { }
void pw_thread_loop_lock(void* loop) { }
void pw_thread_loop_unlock(void* loop) { }
void pw_thread_loop_stop(void* loop) { }
bool pw_thread_loop_in_thread(void* loop) { return false; }
int pw_thread_loop_timed_wait(void* loop, int wait_max_sec) { return -1; }
int pw_thread_loop_timed_wait_full(void* loop, const struct timespec* abstime)
{
  return -1;
}
int pw_thread_loop_get_time(void* loop, struct timespec* abstime,
    int64_t timeout)
{
  return -1;
}

// stream
void* pw_stream_new(void* core, const char* name, void* props) { return NULL; }

void pw_stream_destroy(void* stream) { }

void pw_stream_add_listener(void* stream, void* listener, const void* events,
    void* data) { }

int pw_stream_update_params(void* stream, const void** params,
    uint32_t n_params)
{
  return -1;
}

int pw_stream_set_active(void* stream, bool active) { return -1; }

int pw_stream_set_control(void* stream, uint32_t id, uint32_t n_values,
    float* values, ...)
{
  return -1;
}

int pw_stream_update_properties(void* stream, const void* dict) { return -1; }

void* pw_stream_dequeue_buffer(void* stream) { return NULL; }
int pw_stream_queue_buffer(void* stream, void* buffer) { return -1; }

int pw_stream_flush(void* stream, bool drain) { return -1; }

const char* pw_stream_state_as_string(int state) { return "error"; }

uint64_t pw_stream_get_nsec(void* stream) { return 0; }
int pw_stream_get_time_n(void* stream, void* time, size_t size) { return -1; }

int pw_stream_connect(void* stream, int direction, uint32_t target_id,
    int flags, const void** params, uint32_t n_params)
{
  return -1;
}
int pw_stream_disconnect(void* stream) { return -1; }

// loop
void* pw_loop_new(const void* props) { return NULL; }
void pw_loop_destroy(void* loop) { }

// properties
void* pw_properties_new(const char* key, ...) { return NULL; }
void* pw_properties_new_string(const char* object) { return NULL; }
void* pw_properties_new_dict(const void* dict) { return NULL; }
int pw_properties_setf(void* properties, const char* key, char* format, ...)
{
  return -1;
}
void pw_properties_free(void* properties) { }

// context
void* pw_context_new(void* main_loop, void* properties, size_t user_data_size)
{
  return NULL;
}
void pw_context_destroy(void* context) { }
void* pw_context_connect(void* context, void* properties,
    size_t user_data_size)
{
  return NULL;
}

void* pw_context_connect_fd(void* context, int fd, void* properties,
    size_t user_data_size)
{
  return NULL;
}

// core
void* pw_core_get_context(void* core) { return NULL; }
int pw_core_disconnect(void* core) { return 0; }

// proxy
void* pw_proxy_get_user_data(void* proxy) { return NULL; }

int pw_proxy_sync(void* proxy, int seq) { return -1; }

void pw_proxy_add_listener(void* proxy, void* listener, const void* events,
    void* data) { }

void pw_proxy_add_object_listener(void* proxy, void* listener,
    const void* funcs, void* data) { }

void pw_proxy_destroy(void* proxy) { }

// port
void* pw_port_info_update(void* info, const void* update) { return NULL; }
void pw_port_info_free(void* info) { }

// link
void* pw_link_info_update(void* info, const void* update) { return NULL; }
void pw_link_info_free(void* info) { }

// node
void* pw_node_info_update(void* info, const void* update) { return NULL; }
void pw_node_info_free(void* info) { }
