// from server: 82% by EspClaude
// roc 2008-06 00433e30  unit: CMemberTreeView  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433e30
//
// 00433e30  8b442404             mov eax, dword ptr [esp + 4]
// 00433e34  57                   push edi
// 00433e35  50                   push eax
// 00433e36  8bf9                 mov edi, ecx
// 00433e38  e8a5d22600           call 0x6a10e2
// 00433e3d  83f8ff               cmp eax, -1
// 00433e40  742b                 je 0x433e6d
// 00433e42  8b5760               mov edx, dword ptr [edi + 0x60]
// 00433e45  8b4248               mov eax, dword ptr [edx + 0x48]
// 00433e48  8d4f60               lea ecx, [edi + 0x60]
// 00433e4b  ffd0                 call eax
// 00433e4d  56                   push esi
// 00433e4e  8db7a0000000         lea esi, [edi + 0xa0]
// 00433e54  68c4000000           push 0xc4
// 00433e59  e852fcffff           call 0x433ab0
// 00433e5e  83c404               add esp, 4
// 00433e61  85c0                 test eax, eax
// 00433e63  750f                 jne 0x433e74
// 00433e65  5e                   pop esi
// 00433e66  83c8ff               or eax, 0xffffffff
// 00433e69  5f                   pop edi
// 00433e6a  c20400               ret 4
// 00433e6d  83c8ff               or eax, 0xffffffff
// 00433e70  5f                   pop edi
// 00433e71  c20400               ret 4
// 00433e74  85f6                 test esi, esi
// 00433e76  7403                 je 0x433e7b
// 00433e78  8b7604               mov esi, dword ptr [esi + 4]
// 00433e7b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00433e7e  56                   push esi
// 00433e7f  6a00                 push 0
// 00433e81  6809110000           push 0x1109
// 00433e86  51                   push ecx
// 00433e87  ff15142e8000         call dword ptr [0x802e14]
// 00433e8d  50                   push eax
// 00433e8e  e827d02600           call 0x6a0eba
// 00433e93  5e                   pop esi
// 00433e94  33c0                 xor eax, eax
// 00433e96  5f                   pop edi
// 00433e97  c20400               ret 4

// from server: 79% by king_originala_sol_medium
// roc 2008-06 00433e30  unit: CMemberTreeView  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433e30
//
// 00433e30  8b442404             mov eax, dword ptr [esp + 4]
// 00433e34  57                   push edi
// 00433e35  50                   push eax
// 00433e36  8bf9                 mov edi, ecx
// 00433e38  e8a5d22600           call 0x6a10e2
// 00433e3d  83f8ff               cmp eax, -1
// 00433e40  742b                 je 0x433e6d
// 00433e42  8b5760               mov edx, dword ptr [edi + 0x60]
// 00433e45  8b4248               mov eax, dword ptr [edx + 0x48]
// 00433e48  8d4f60               lea ecx, [edi + 0x60]
// 00433e4b  ffd0                 call eax
// 00433e4d  56                   push esi
// 00433e4e  8db7a0000000         lea esi, [edi + 0xa0]
// 00433e54  68c4000000           push 0xc4
// 00433e59  e852fcffff           call 0x433ab0
// 00433e5e  83c404               add esp, 4
// 00433e61  85c0                 test eax, eax
// 00433e63  750f                 jne 0x433e74
// 00433e65  5e                   pop esi
// 00433e66  83c8ff               or eax, 0xffffffff
// 00433e69  5f                   pop edi
// 00433e6a  c20400               ret 4
// 00433e6d  83c8ff               or eax, 0xffffffff
// 00433e70  5f                   pop edi
// 00433e71  c20400               ret 4
// 00433e74  85f6                 test esi, esi
// 00433e76  7403                 je 0x433e7b
// 00433e78  8b7604               mov esi, dword ptr [esi + 4]
// 00433e7b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00433e7e  56                   push esi
// 00433e7f  6a00                 push 0
// 00433e81  6809110000           push 0x1109
// 00433e86  51                   push ecx
// 00433e87  ff15142e8000         call dword ptr [0x802e14]
// 00433e8d  50                   push eax
// 00433e8e  e827d02600           call 0x6a0eba
// 00433e93  5e                   pop esi
// 00433e94  33c0                 xor eax, eax
// 00433e96  5f                   pop edi
// 00433e97  c20400               ret 4

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
    HANDLE GetSafeHandle() const { return this == 0 ? 0 : handle; }
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
    fromHandle((HANDLE)SendMessageA(window,0x1109,0,(long)images.GetSafeHandle()));
    return 0;
}
