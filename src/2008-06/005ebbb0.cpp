// from server: 82% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_native_sky_factory_e39f5c5835ae6416.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("GLG3D/Sky.h", "roc_native_sky_stars_affbed361cd74edc.cpp")
#pragma include_alias(<GLG3D/Sky.h>, <roc_native_sky_stars_affbed361cd74edc.cpp>)
#pragma include_alias("G3D/GImage.h", "roc_native_gimage_error_c1995d81e1168339.cpp")
#pragma include_alias(<G3D/GImage.h>, <roc_native_gimage_error_c1995d81e1168339.cpp>)
#include <winsock2.h>
#include <string>
#include <vector>
#include <stdexcept>
#include "util/ContentProvider.h"
#include "util/StandardOut.h"
#include "G3D/GImage.h"
#include "GLG3D/Sky.h"

typedef char proven_content_id_size[sizeof(RBX::ContentId)==32?1:-1];
typedef char proven_image_error_size[sizeof(G3D::GImage::Error)==96?1:-1];

// Native Sky.cpp helper; retain its definition so the compiler can select
// the same internal calling convention as the target.
static std::string testImage(const std::string& file, G3D::GImage& master)
{
    G3D::GImage image;
    image.load(file);
    if (image.width != master.width)
        throw std::runtime_error("skybox images have different widths");
    if (image.height != master.height)
        throw std::runtime_error("skybox images have different heights");
    if (image.channels != master.channels)
        throw std::runtime_error("skybox images have different numbers of channels");
    return file;
}

namespace RBX {
// Only the static entry point is declared. No historical Sky layout is assumed.
class Sky { public: static G3D::SkyRef getG3DSky(Sky* sky); };
ContentProvider* skyContentProvider(Sky* sky); // 00465210, cdecl receiver pointer
std::string skyAssetFolder(); // 0055c4c0, cdecl string return

G3D::SkyRef Sky::getG3DSky(Sky* sky)
{
    if (sky) {
        try {
            std::vector<std::string> storage(6);
            std::string* filenames = &storage[0];
            {
                // Each offset is an observed 32-byte ContentId copy in 005ebbb0.
                filenames[0] = skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x1b0));
                G3D::GImage image;
                image.load(filenames[0]);
                filenames[1] = testImage(skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x190)), image);
                filenames[2] = testImage(skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x130)), image);
                filenames[3] = testImage(skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x1d0)), image);
                filenames[4] = testImage(skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x170)), image);
                filenames[5] = testImage(skyContentProvider(sky)->getFile(*reinterpret_cast<const ContentId*>(reinterpret_cast<const char*>(sky)+0x150)), image);
            }
            std::string directory = skyAssetFolder() + "Sky\\";
            G3D::SkyRef result = G3D::Sky::fromFile(NULL, directory, filenames, *reinterpret_cast<const bool*>(reinterpret_cast<const char*>(sky)+0x1f0), 1.0);
            if (result.notNull())
                result->setNumStars(*reinterpret_cast<const int*>(reinterpret_cast<const char*>(sky)+0x1f4));
            return result;
        } catch (G3D::GImage::Error& e) {
            StandardOut::singleton()->print(MESSAGE_WARNING, e.reason.c_str());
        } catch (std::exception& e) {
            StandardOut::singleton()->print(MESSAGE_WARNING, e);
        }
    }
    return G3D::Sky::fromFile(NULL, skyAssetFolder()+"Sky\\", "null_plainsky512_*.jpg");
}
}
