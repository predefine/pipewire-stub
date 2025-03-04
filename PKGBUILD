pkgname=pipewire-stub
pkgver=0.1
pkgrel=1
pkgdesc='pipewire stub'
arch=('i686' 'x86_64')
provides=('libpipewire' 'pipewire' 'libpipewire-0.3.so=0-64')
conflicts=(${provides[@]})
source=('stub.c')
sha256sums=('9ad3faef2c632c2d4d9698d6dd438bbd9ebd1fb4defe1e39ca0c27c75772b9c9')

build() {
  cc stub.c -o libpipewire-0.3.so -shared
}

package() {
  mkdir -p ${pkgdir}/usr/lib/
  cp libpipewire-0.3.so ${pkgdir}/usr/lib/
  ln -s libpipewire-0.3.so ${pkgdir}/usr/lib/libpipewire-0.3.so.0
}
