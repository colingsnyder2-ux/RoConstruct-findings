// from server: 82% by colin
typedef void* HANDLE;

extern "C" HANDLE __stdcall LoadBitmapA(HANDLE, const char*);
extern "C" HANDLE __stdcall FindResourceModule(const char*, const char*);

struct Bitmap
{
    HANDLE handle;

    Bitmap() : handle(0) {}
    virtual ~Bitmap() { release(); }

    int attach(HANDLE);
    void release();
};

extern "C" int __cdecl PrepareBitmap(Bitmap*, int, int);

struct ImageManager
{
    void install(HANDLE, HANDLE, int);
};

struct ModuleState
{
    unsigned char padding[0x94];
    ImageManager** manager;
};

extern "C" ModuleState* __cdecl GetModuleState();

struct S
{
    void* vtable;
    HANDLE handle;

    int create(int, int, unsigned int, int, int);
    int f(unsigned short);
};

int S::f(unsigned short resource)
{
    if (!create(16, 16, 0x19, 0, 1))
        return 0;

    Bitmap bitmap;
    bitmap.attach(LoadBitmapA(
        FindResourceModule((const char*)(unsigned int)resource,
                           (const char*)2),
        (const char*)(unsigned int)resource));

    int value = PrepareBitmap(&bitmap, 0, 0);
    (*GetModuleState()->manager)->install(handle, bitmap.handle, value);
    return 1;
}
