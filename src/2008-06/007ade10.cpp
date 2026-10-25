// from server: 100% by colin
// roc 2008-06 007ade10  unit: RBX::RenderNew::TextureProxy  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ade10
//
// 007ade10  6aff                 push -1
// 007ade12  687dd97e00           push 0x7ed97d
// 007ade17  64a100000000         mov eax, dword ptr fs:[0]
// 007ade1d  50                   push eax
// 007ade1e  64892500000000       mov dword ptr fs:[0], esp
// 007ade25  51                   push ecx
// 007ade26  53                   push ebx
// 007ade27  56                   push esi
// 007ade28  8bf1                 mov esi, ecx
// 007ade2a  89742408             mov dword ptr [esp + 8], esi
// 007ade2e  33db                 xor ebx, ebx
// 007ade30  895c2414             mov dword ptr [esp + 0x14], ebx
// 007ade34  e8b73ddaff           call 0x551bf0
// 007ade39  c7068cd18200         mov dword ptr [esi], 0x82d18c
// 007ade3f  895e30               mov dword ptr [esi + 0x30], ebx
// 007ade42  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ade46  8d4e40               lea ecx, [esi + 0x40]
// 007ade49  885e34               mov byte ptr [esi + 0x34], bl
// 007ade4c  895e38               mov dword ptr [esi + 0x38], ebx
// 007ade4f  50                   push eax
// 007ade50  c644241802           mov byte ptr [esp + 0x18], 2
// 007ade55  8919                 mov dword ptr [ecx], ebx
// 007ade57  e844b1deff           call 0x598fa0
// 007ade5c  895e44               mov dword ptr [esi + 0x44], ebx
// 007ade5f  8d4e54               lea ecx, [esi + 0x54]
// 007ade62  c644241404           mov byte ptr [esp + 0x14], 4
// 007ade67  ff15884c8000         call dword ptr [0x804c88]
// 007ade6d  6816b78000           push 0x80b716
// 007ade72  8d4e0c               lea ecx, [esi + 0xc]
// 007ade75  c644241805           mov byte ptr [esp + 0x18], 5
// 007ade7a  ff154c248000         call dword ptr [0x80244c]
// 007ade80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ade84  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007ade8c  3bc3                 cmp eax, ebx
// 007ade8e  7427                 je 0x7adeb7
// 007ade90  83c004               add eax, 4
// 007ade93  50                   push eax
// 007ade94  ff15ac218000         call dword ptr [0x8021ac]
// 007ade9a  85c0                 test eax, eax
// 007ade9c  7519                 jne 0x7adeb7
// 007ade9e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007adea2  e8e9cecaff           call 0x45ad90
// 007adea7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007adeab  3bcb                 cmp ecx, ebx
// 007adead  7408                 je 0x7adeb7
// 007adeaf  8b11                 mov edx, dword ptr [ecx]
// 007adeb1  8b02                 mov eax, dword ptr [edx]
// 007adeb3  6a01                 push 1
// 007adeb5  ffd0                 call eax
// 007adeb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007adebb  8bc6                 mov eax, esi
// 007adebd  5e                   pop esi
// 007adebe  5b                   pop ebx
// 007adebf  64890d00000000       mov dword ptr fs:[0], ecx
// 007adec6  83c410               add esp, 0x10
// 007adec9  c20400               ret 4

// from server: 96% by king_originala
extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Object {
    virtual ~Object();
    volatile long references;
    void release();
};

struct Pointer {
    Object *value;
    Pointer(const Pointer &);
    ~Pointer();
    void assign(Object *);
};

inline Pointer::Pointer(const Pointer &p) : value(0) {
    assign(p.value);
}

inline Pointer::~Pointer() {
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->release();
        if (value)
            delete value;
    }
}

struct String {
    char storage[28];
};

extern String &(__thiscall *assignString)(String *, const char *);

struct Base {
    virtual ~Base();
    char prefix[8];
    String name;
    char suffix[8];
    Base();
};

struct Holder8 {
    void *value;
    char storage[4];
    Holder8();
    ~Holder8();
};

inline Holder8::Holder8() {}

struct Holder16 {
    void *value;
    char storage[12];
    Holder16();
    ~Holder16();
};

inline Holder16::Holder16() : value(0) {}

struct TexturePtr;
extern void (__thiscall *constructTexturePtr)(TexturePtr *);

struct TexturePtr {
    void *value;
    void *count;
    TexturePtr();
    ~TexturePtr();
};

inline TexturePtr::TexturePtr() {
    constructTexturePtr(this);
}

struct TextureProxy : Base {
    int field30;
    bool field34;
    Holder8 field38;
    Pointer field40;
    Holder16 field44;
    TexturePtr field54;

    TextureProxy(Pointer);
    virtual ~TextureProxy();
};

TextureProxy::TextureProxy(Pointer p)
    : field30(0), field40((field34 = false, field38.value = 0, p)) {
    assignString(&name, "");
}
