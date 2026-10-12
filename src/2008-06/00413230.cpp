// from server: 60% by king_originala
struct String {
    unsigned char data[28];
    String(const char*);
    ~String();
};

struct Exception {
    unsigned char data[40];
    Exception(const String&);
};

extern "C" __declspec(noreturn) void __stdcall ThrowException(void*, void*);
extern "C" void* __cdecl LoadImages(unsigned int, int*);

struct GdiObject {
    void* handle;
    GdiObject();
    virtual ~GdiObject();
};

inline GdiObject::GdiObject() : handle(0) {}
inline GdiObject::~GdiObject() {}

struct Bitmap : GdiObject {
    Bitmap();
    virtual ~Bitmap();
    int Attach(void*);
    int DeleteObject();
};

inline Bitmap::Bitmap() {}
inline Bitmap::~Bitmap() { DeleteObject(); }

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
            String message("Unable to create CClassImages");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }

        if (AddImage(handle, bitmap.handle,
                     (unsigned long)bitmap.handle)->holder->manager->AddAlpha() == -1) {
            String message("Unable to add IDB_CLASSIMAGES");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }
    } else {
        if (!Create(16, 16, 255, 0, 0)) {
            String message("Unable to create CClassImages");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }

        if (AddImage(handle, bitmap.handle, 0x00ff00ff)->holder->manager->AddMasked() == -1) {
            String message("Unable to add IDB_CLASSIMAGES");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }
    }
}
