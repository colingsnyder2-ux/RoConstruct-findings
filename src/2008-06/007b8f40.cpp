// from server: 100% by king_originala
// roc 2008-06 007b8f40  unit: RBX::Render::TextureProxy  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b8f40
//
// 007b8f40  51                   push ecx
// 007b8f41  8b01                 mov eax, dword ptr [ecx]
// 007b8f43  8b4020               mov eax, dword ptr [eax + 0x20]
// 007b8f46  56                   push esi
// 007b8f47  8d542404             lea edx, [esp + 4]
// 007b8f4b  52                   push edx
// 007b8f4c  ffd0                 call eax
// 007b8f4e  d9ee                 fldz 
// 007b8f50  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b8f54  d916                 fst dword ptr [esi]
// 007b8f56  8b442404             mov eax, dword ptr [esp + 4]
// 007b8f5a  d95604               fst dword ptr [esi + 4]
// 007b8f5d  85c0                 test eax, eax
// 007b8f5f  743b                 je 0x7b8f9c
// 007b8f61  ddd8                 fstp st(0)
// 007b8f63  83c004               add eax, 4
// 007b8f66  db4060               fild dword ptr [eax + 0x60]
// 007b8f69  50                   push eax
// 007b8f6a  d91e                 fstp dword ptr [esi]
// 007b8f6c  db4064               fild dword ptr [eax + 0x64]
// 007b8f6f  d95e04               fstp dword ptr [esi + 4]
// 007b8f72  ff15ac218000         call dword ptr [0x8021ac]
// 007b8f78  85c0                 test eax, eax
// 007b8f7a  7519                 jne 0x7b8f95
// 007b8f7c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b8f80  e80b1ecaff           call 0x45ad90
// 007b8f85  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b8f89  85c9                 test ecx, ecx
// 007b8f8b  7408                 je 0x7b8f95
// 007b8f8d  8b11                 mov edx, dword ptr [ecx]
// 007b8f8f  8b02                 mov eax, dword ptr [edx]
// 007b8f91  6a01                 push 1
// 007b8f93  ffd0                 call eax
// 007b8f95  8bc6                 mov eax, esi
// 007b8f97  5e                   pop esi
// 007b8f98  59                   pop ecx
// 007b8f99  c20400               ret 4
// 007b8f9c  d95604               fst dword ptr [esi + 4]
// 007b8f9f  8bc6                 mov eax, esi
// 007b8fa1  d91e                 fstp dword ptr [esi]
// 007b8fa3  5e                   pop esi
// 007b8fa4  59                   pop ecx
// 007b8fa5  c20400               ret 4

extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);

struct Image {
    virtual void destroy(int);
    volatile long references;
    char padding[0x5C];
    int width;
    int height;

    void release();
};

struct ImagePtr {
    Image* value;
    ~ImagePtr();
};

inline ImagePtr::~ImagePtr() {
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->release();
        if (value)
            value->destroy(1);
    }
}

struct Vector2 {
    float x;
    float y;

    Vector2(float a, float b);
};

inline Vector2::Vector2(float a, float b) : x(a), y(b) {}

struct TextureProxy {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual ImagePtr getImage();

    Vector2 dimensions();
};

Vector2 TextureProxy::dimensions() {
    ImagePtr image = getImage();
    Vector2 result(0.0f, 0.0f);
    if (image.value) {
        result.x = static_cast<float>(image.value->width);
        result.y = static_cast<float>(image.value->height);
    } else {
        result.y = 0.0f;
        result.x = 0.0f;
    }
    return result;
}
