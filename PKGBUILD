pkgname=pipewire-stub
pkgver=0.1
pkgrel=2
pkgdesc='pipewire stub'
arch=('i686' 'x86_64')
provides=('libpipewire' 'pipewire' 'libpipewire-0.3.so=0-64')
conflicts=(${provides[@]})
source=('stub.c')
sha256sums=('ea5038a418ecc18a876215b621eb78ed67e91c2d7d4d768e9e63b422f9cb5ddd')

build() {
  cc stub.c -o libpipewire-0.3.so -shared
}

package() {
  mkdir -p ${pkgdir}/usr/lib/
  cp libpipewire-0.3.so ${pkgdir}/usr/lib/
  ln -s libpipewire-0.3.so ${pkgdir}/usr/lib/libpipewire-0.3.so.0
}
