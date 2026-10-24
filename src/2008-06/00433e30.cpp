// from server: 78% by king_originala
// from server: 82% by colin
typedef void* HANDLE;

extern "C" __declspec(dllimport) HANDLE __stdcall LoadBitmapA(HANDLE, const char*);
extern "C" HANDLE __stdcall FindResourceModule(const char*, const char*);

struct GdiObject
{
    HANDLE handle;

    GdiObject() : handle(0) {}
    virtual ~GdiObject() { release(); }

    int attach(HANDLE);
    void release();
};

struct Bitmap : GdiObject {};

struct Point { int x, y; Point(int a, int b) : x(a), y(b) {} };
extern "C" int __cdecl PrepareBitmap(Bitmap*, Point);

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
    operator HANDLE() const { HANDLE result=(HANDLE)this; if(result) result=handle; return result; }
};

static __declspec(noinline) int createBitmap(S* self, unsigned short resource)
{
    if (!self->create(16, 16, 0x19, 0, 1))
        return 0;

    Bitmap bitmap;
    bitmap.attach(LoadBitmapA(
        FindResourceModule((const char*)(unsigned int)resource,
                           (const char*)2),
        (const char*)(unsigned int)resource));

    int value = PrepareBitmap(&bitmap, Point(0, 0));
    HANDLE imageList = self->handle;
    (*GetModuleState()->manager)->install(imageList, bitmap.handle, value);
    return 1;
}


extern "C" __declspec(dllimport) long __stdcall SendMessageA(HANDLE,unsigned,unsigned,long);
extern "C" void* __stdcall fromHandle(HANDLE);
struct Control {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void initialize();
};
struct MemberTree {
    char prefix[0x20];
    HANDLE window;
    char gap[0x60-0x24];
    Control control;
    char controlTail[0x3c];
    S images;
    int baseOnCreate(void*);
    int onCreate(void*);
};
int MemberTree::onCreate(void* cs) {
    if(baseOnCreate(cs)==-1) return -1;
    control.initialize();
    if(!createBitmap(&images,196)) return -1;
    HANDLE handle=images;
    fromHandle((HANDLE)SendMessageA(window,0x1109,0,(long)handle));
    return 0;
}
