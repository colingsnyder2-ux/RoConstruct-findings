// from server: 91% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_bitmapbasecleanup17bcd0fb8127747a.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
typedef std::string String;
#include <stdexcept>
extern "C" void* __cdecl LoadImages(unsigned int, int*);

struct GdiObject {
    void* handle;
    GdiObject();
    virtual ~GdiObject();
};

inline GdiObject::GdiObject() : handle(0) {}


struct Bitmap : GdiObject {
    Bitmap();
    virtual ~Bitmap();
    int Attach(void*);
    int DeleteObject();
};

inline Bitmap::Bitmap() {}
inline Bitmap::~Bitmap() {}

struct ImageManager {
    int AddAlpha();
    int AddMasked();
};

struct ManagerHolder {
    ImageManager* manager;
};

struct ImageListData {
    unsigned char padding[148];
    ManagerHolder* holder;
};

extern "C" ImageListData* __stdcall AddImage(void*, void*, unsigned long);

struct ImageList {
    void* handle;
    ImageList();
    virtual ~ImageList();
    int Create(int, int, unsigned int, int, int);
};

struct S : ImageList {
    S();
    virtual ~S();
};

S::S()
{
    int alpha = 0;
    void* image = LoadImages(133, &alpha);
    Bitmap bitmap;
    bitmap.Attach(image);

    if (alpha) {
        if (!Create(16, 16, 32, 0, 0)) {
            throw std::runtime_error("Unable to create CClassImages");
        }

        if (AddImage(handle, bitmap.handle,
                     (unsigned long)bitmap.handle)->holder->manager->AddAlpha() == -1) {
            throw std::runtime_error("Unable to add IDB_CLASSIMAGES");
        }
    } else {
        if (!Create(16, 16, 255, 0, 0)) {
            throw std::runtime_error("Unable to create CClassImages");
        }

        if (AddImage(handle, bitmap.handle, 0x00ff00ff)->holder->manager->AddMasked() == -1) {
            throw std::runtime_error("Unable to add IDB_CLASSIMAGES");
        }
    }
}
