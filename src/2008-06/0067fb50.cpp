// from server: 100% by king_originala
// roc 2008-06 0067fb50  unit: Ogre::RbxEntity  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067fb50
//
// 0067fb50  6aff                 push -1
// 0067fb52  6834d97d00           push 0x7dd934
// 0067fb57  64a100000000         mov eax, dword ptr fs:[0]
// 0067fb5d  50                   push eax
// 0067fb5e  64892500000000       mov dword ptr fs:[0], esp
// 0067fb65  51                   push ecx
// 0067fb66  53                   push ebx
// 0067fb67  56                   push esi
// 0067fb68  8bf1                 mov esi, ecx
// 0067fb6a  89742408             mov dword ptr [esp + 8], esi
// 0067fb6e  c7066ce58400         mov dword ptr [esi], 0x84e56c
// 0067fb74  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0067fb7a  33db                 xor ebx, ebx
// 0067fb7c  c744241406000000     mov dword ptr [esp + 0x14], 6
// 0067fb84  3bc3                 cmp eax, ebx
// 0067fb86  7409                 je 0x67fb91
// 0067fb88  50                   push eax
// 0067fb89  e8ec0a0200           call 0x6a067a
// 0067fb8e  83c404               add esp, 4
// 0067fb91  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0067fb97  50                   push eax
// 0067fb98  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0067fb9e  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0067fba4  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0067fbaa  e8cb0a0200           call 0x6a067a
// 0067fbaf  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0067fbb5  83c404               add esp, 4
// 0067fbb8  3bc3                 cmp eax, ebx
// 0067fbba  7409                 je 0x67fbc5
// 0067fbbc  50                   push eax
// 0067fbbd  e8b80a0200           call 0x6a067a
// 0067fbc2  83c404               add esp, 4
// 0067fbc5  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0067fbcb  50                   push eax
// 0067fbcc  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0067fbd2  899e98000000         mov dword ptr [esi + 0x98], ebx
// 0067fbd8  899e9c000000         mov dword ptr [esi + 0x9c], ebx
// 0067fbde  e8970a0200           call 0x6a067a
// 0067fbe3  83c404               add esp, 4
// 0067fbe6  8d4e78               lea ecx, [esi + 0x78]
// 0067fbe9  ff15704e8000         call dword ptr [0x804e70]
// 0067fbef  8d4e6c               lea ecx, [esi + 0x6c]
// 0067fbf2  c644241405           mov byte ptr [esp + 0x14], 5
// 0067fbf7  ff15704e8000         call dword ptr [0x804e70]
// 0067fbfd  8d4e60               lea ecx, [esi + 0x60]
// 0067fc00  c644241404           mov byte ptr [esp + 0x14], 4
// 0067fc05  ff15704e8000         call dword ptr [0x804e70]
// 0067fc0b  8d4e54               lea ecx, [esi + 0x54]
// 0067fc0e  c644241403           mov byte ptr [esp + 0x14], 3
// 0067fc13  ff15704e8000         call dword ptr [0x804e70]
// 0067fc19  8d4e28               lea ecx, [esi + 0x28]
// 0067fc1c  c644241402           mov byte ptr [esp + 0x14], 2
// 0067fc21  ff158c4c8000         call dword ptr [0x804c8c]
// 0067fc27  8d4e1c               lea ecx, [esi + 0x1c]
// 0067fc2a  c644241401           mov byte ptr [esp + 0x14], 1
// 0067fc2f  ff158c4c8000         call dword ptr [0x804c8c]
// 0067fc35  8d4e10               lea ecx, [esi + 0x10]
// 0067fc38  885c2414             mov byte ptr [esp + 0x14], bl
// 0067fc3c  ff158c4c8000         call dword ptr [0x804c8c]
// 0067fc42  8d4e04               lea ecx, [esi + 4]
// 0067fc45  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0067fc4d  ff158c4c8000         call dword ptr [0x804c8c]
// 0067fc53  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067fc57  5e                   pop esi
// 0067fc58  5b                   pop ebx
// 0067fc59  64890d00000000       mov dword ptr fs:[0], ecx
// 0067fc60  83c410               add esp, 0x10
// 0067fc63  c3                   ret 

extern "C" void __cdecl release(void *);

struct MaterialPtr;
struct TexturePtr;

typedef void (__thiscall *MaterialDestructor)(MaterialPtr *);
typedef void (__thiscall *TextureDestructor)(TexturePtr *);

extern MaterialDestructor destroyMaterial;
extern TextureDestructor destroyTexture;

struct MaterialPtr {
    unsigned char storage[12];
    ~MaterialPtr();
};

struct TexturePtr {
    unsigned char storage[12];
    ~TexturePtr();
};

inline MaterialPtr::~MaterialPtr()
{
    destroyMaterial(this);
}

inline TexturePtr::~TexturePtr()
{
    destroyTexture(this);
}

struct Storage {
    void *allocation;
    unsigned char padding[8];
    void *begin;
    void *end;
    void *capacity;
};

struct S {
    MaterialPtr material0;
    MaterialPtr material1;
    MaterialPtr material2;
    MaterialPtr material3;
    unsigned char padding0[32];
    TexturePtr texture0;
    TexturePtr texture1;
    TexturePtr texture2;
    TexturePtr texture3;
    unsigned char padding1[4];
    Storage storage0;
    Storage storage1;

    virtual ~S();
};

S::~S()
{
    if (storage1.begin)
        release(storage1.begin);

    storage1.begin = 0;
    storage1.end = 0;
    storage1.capacity = 0;
    release(storage1.allocation);

    if (storage0.begin)
        release(storage0.begin);

    void *allocation = storage0.allocation;
    storage0.begin = 0;
    storage0.end = 0;
    storage0.capacity = 0;
    release(allocation);
}
