#include <G3D/platform.h>
#include <GLG3D/Texture.h>
#include <GLG3D/RenderDevice.h>
#define private public
#include <GLG3D/Sky.h>
#undef private
#include <stddef.h>
typedef char check_star[(offsetof(G3D::Sky,star)==0x38)?1:-1];
typedef char check_intensity[(offsetof(G3D::Sky,starIntensity)==0x44)?1:-1];
