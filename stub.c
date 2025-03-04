#include <pipewire/core.h>
#include <pipewire/thread-loop.h>
#include <pipewire/core.h>

#define NULL_ {return NULL;}

// pipewire
void pw_init(int *argc, char **argv[]) {}
void pw_deinit(void) {}
const char* pw_get_library_version(void) {
  return "0.0.0";
}

// thread-loop
struct pw_thread_loop * pw_thread_loop_new(const char *name,const struct spa_dict *props) NULL_
int pw_thread_loop_start(struct pw_thread_loop* loop) {
  return -1;
}
struct pw_loop * pw_thread_loop_get_loop(struct pw_thread_loop *loop) NULL_
void pw_thread_loop_signal(struct pw_thread_loop *loop, bool wait_for_accept) {}
void pw_thread_loop_wait(struct pw_thread_loop *loop) {}
void pw_thread_loop_destroy(struct pw_thread_loop *loop) {}
void pw_thread_loop_lock(struct pw_thread_loop *loop) {}
void pw_thread_loop_unlock(struct pw_thread_loop *loop) {}
void pw_thread_loop_stop(struct pw_thread_loop *loop) {}
int pw_thread_loop_timed_wait(struct pw_thread_loop *loop, int wait_max_sec) {
  return -1;
}

// stream
struct pw_stream *pw_stream_new(
  struct pw_core *core,
  const char *name,
  struct pw_properties *props) NULL_

void pw_stream_destroy(struct pw_stream *stream) {}

void pw_stream_add_listener(struct pw_stream *stream,
	struct spa_hook *listener,
	const void *events,
	void *data) {}

int pw_stream_update_params(struct pw_stream *stream,
	const struct spa_pod **params,
	uint32_t n_params)
{
  return -1;
}

int pw_stream_set_active(struct pw_stream *stream, bool active) {
  return -1;
}

struct pw_buffer * pw_stream_dequeue_buffer(struct pw_stream *stream) NULL_
int pw_stream_queue_buffer(struct pw_stream *stream, struct pw_buffer *buffer)
{
  return -1;
}

const char *pw_stream_state_as_string(int state) {
  return "error";
}

int pw_stream_connect(struct pw_stream *stream,
  int direction,
  uint32_t target_id,
  int flags,
  const struct spa_pod **params,
  uint32_t n_params)
{
  return -1;
}
int pw_stream_disconnect(struct pw_stream *stream) {
  return -1;
}

// loop
struct pw_loop * pw_loop_new(const struct spa_dict *props) NULL_
void pw_loop_destroy(struct pw_loop *loop) {}

// properties
struct pw_properties *pw_properties_new_string(const char *object) NULL_
struct pw_properties * pw_properties_new_dict(const struct spa_dict *dict) NULL_
void pw_properties_free(struct pw_properties *properties) {}

// context
struct pw_context *pw_context_new(
  struct pw_loop *main_loop,
  struct pw_properties *properties,
  size_t user_data_size) NULL_
void pw_context_destroy(struct pw_context *context) {}
struct pw_core *pw_context_connect(
  struct pw_context *context,
  struct pw_properties *properties,
  size_t user_data_size) NULL_

struct pw_core * pw_context_connect_fd(struct pw_context *context,
	int fd,
	struct pw_properties *properties,
	size_t user_data_size) NULL_

// core
int pw_core_disconnect(struct pw_core *core) { return 0; }

// proxy
void pw_proxy_destroy(struct pw_proxy *proxy) {}
