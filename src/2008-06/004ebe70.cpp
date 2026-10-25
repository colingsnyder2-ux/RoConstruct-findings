// from server: 88% by colin
// roc 2008-06 004ebe70  unit: RBX::ViewNew::Decal  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ebe70
//
// 004ebe70  55                   push ebp
// 004ebe71  8bec                 mov ebp, esp
// 004ebe73  6aff                 push -1
// 004ebe75  6881aa7c00           push 0x7caa81
// 004ebe7a  64a100000000         mov eax, dword ptr fs:[0]
// 004ebe80  50                   push eax
// 004ebe81  64892500000000       mov dword ptr fs:[0], esp
// 004ebe88  83ec4c               sub esp, 0x4c
// 004ebe8b  53                   push ebx
// 004ebe8c  33c0                 xor eax, eax
// 004ebe8e  56                   push esi
// 004ebe8f  8bf1                 mov esi, ecx
// 004ebe91  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ebe94  57                   push edi
// 004ebe95  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ebe98  8975e8               mov dword ptr [ebp - 0x18], esi
// 004ebe9b  8945fc               mov dword ptr [ebp - 4], eax
// 004ebe9e  3886c8000000         cmp byte ptr [esi + 0xc8], al
// 004ebea4  0f8474010000         je 0x4ec01e
// 004ebeaa  3986bc000000         cmp dword ptr [esi + 0xbc], eax
// 004ebeb0  0f8468010000         je 0x4ec01e
// 004ebeb6  8d4dc8               lea ecx, [ebp - 0x38]
// 004ebeb9  ff1560248000         call dword ptr [0x802460]
// 004ebebf  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004ebec5  8d45a8               lea eax, [ebp - 0x58]
// 004ebec8  bb01000000           mov ebx, 1
// 004ebecd  50                   push eax
// 004ebece  885dfc               mov byte ptr [ebp - 4], bl
// 004ebed1  e8da9cffff           call 0x4e5bb0
// 004ebed6  8bf8                 mov edi, eax
// 004ebed8  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004ebede  50                   push eax
// 004ebedf  c645fc02             mov byte ptr [ebp - 4], 2
// 004ebee3  e82893f7ff           call 0x465210
// 004ebee8  83c404               add esp, 4
// 004ebeeb  8d4dc8               lea ecx, [ebp - 0x38]
// 004ebeee  51                   push ecx
// 004ebeef  8d55ec               lea edx, [ebp - 0x14]
// 004ebef2  52                   push edx
// 004ebef3  57                   push edi
// 004ebef4  8bc8                 mov ecx, eax
// 004ebef6  e875670700           call 0x562670
// 004ebefb  8d4da8               lea ecx, [ebp - 0x58]
// 004ebefe  885dfc               mov byte ptr [ebp - 4], bl
// 004ebf01  ff1568248000         call dword ptr [0x802468]
// 004ebf07  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004ebf0a  3bc3                 cmp eax, ebx
// 004ebf0c  0f85b5000000         jne 0x4ebfc7
// 004ebf12  e819580600           call 0x551730
// 004ebf17  8d9ec4000000         lea ebx, [esi + 0xc4]
// 004ebf1d  50                   push eax
// 004ebf1e  8bcb                 mov ecx, ebx
// 004ebf20  e87bd00a00           call 0x598fa0
// 004ebf25  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004ebf2b  8b400c               mov eax, dword ptr [eax + 0xc]
// 004ebf2e  6a00                 push 0
// 004ebf30  8d4dc8               lea ecx, [ebp - 0x38]
// 004ebf33  51                   push ecx
// 004ebf34  50                   push eax
// 004ebf35  e8e6590600           call 0x551920
// 004ebf3a  8b1b                 mov ebx, dword ptr [ebx]
// 004ebf3c  8bf8                 mov edi, eax
// 004ebf3e  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004ebf44  d98028030000         fld dword ptr [eax + 0x328]
// 004ebf4a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004ebf50  d9e8                 fld1 
// 004ebf52  83c40c               add esp, 0xc
// 004ebf55  dee1                 fsubrp st(1)
// 004ebf57  83ec1c               sub esp, 0x1c
// 004ebf5a  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004ebf5d  d95c2418             fstp dword ptr [esp + 0x18]
// 004ebf61  d9ee                 fldz 
// 004ebf63  d95c2414             fstp dword ptr [esp + 0x14]
// 004ebf67  d98068010000         fld dword ptr [eax + 0x168]
// 004ebf6d  d95c2410             fstp dword ptr [esp + 0x10]
// 004ebf71  d98064010000         fld dword ptr [eax + 0x164]
// 004ebf77  d95c240c             fstp dword ptr [esp + 0xc]
// 004ebf7b  8bc4                 mov eax, esp
// 004ebf7d  d90504299400         fld dword ptr [0x942904]
// 004ebf83  51                   push ecx
// 004ebf84  d918                 fstp dword ptr [eax]
// 004ebf86  8bcc                 mov ecx, esp
// 004ebf88  d90508299400         fld dword ptr [0x942908]
// 004ebf8e  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004ebf91  d95804               fstp dword ptr [eax + 4]
// 004ebf94  57                   push edi
// 004ebf95  d9050c299400         fld dword ptr [0x94290c]
// 004ebf9b  d95808               fstp dword ptr [eax + 8]
// 004ebf9e  c70100000000         mov dword ptr [ecx], 0
// 004ebfa4  e8f7cf0a00           call 0x598fa0
// 004ebfa9  8b13                 mov edx, dword ptr [ebx]
// 004ebfab  8b420c               mov eax, dword ptr [edx + 0xc]
// 004ebfae  8bcb                 mov ecx, ebx
// 004ebfb0  ffd0                 call eax
// 004ebfb2  d905f8269300         fld dword ptr [0x9326f8]
// 004ebfb8  8b17                 mov edx, dword ptr [edi]
// 004ebfba  8b420c               mov eax, dword ptr [edx + 0xc]
// 004ebfbd  51                   push ecx
// 004ebfbe  8bcf                 mov ecx, edi
// 004ebfc0  d91c24               fstp dword ptr [esp]
// 004ebfc3  ffd0                 call eax
// 004ebfc5  eb43                 jmp 0x4ec00a
// 004ebfc7  83f802               cmp eax, 2
// 004ebfca  7545                 jne 0x4ec011
// 004ebfcc  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 004ebfd2  85c0                 test eax, eax
// 004ebfd4  7434                 je 0x4ec00a
// 004ebfd6  83c004               add eax, 4
// 004ebfd9  50                   push eax
// 004ebfda  ff15ac218000         call dword ptr [0x8021ac]
// 004ebfe0  85c0                 test eax, eax
// 004ebfe2  751c                 jne 0x4ec000
// 004ebfe4  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004ebfea  e8a1edf6ff           call 0x45ad90
// 004ebfef  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004ebff5  85c9                 test ecx, ecx
// 004ebff7  7407                 je 0x4ec000
// 004ebff9  8b11                 mov edx, dword ptr [ecx]
// 004ebffb  8b02                 mov eax, dword ptr [edx]
// 004ebffd  53                   push ebx
// 004ebffe  ffd0                 call eax
// 004ec000  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 004ec00a  c686c800000000       mov byte ptr [esi + 0xc8], 0
// 004ec011  8d4dc8               lea ecx, [ebp - 0x38]
// 004ec014  c645fc00             mov byte ptr [ebp - 4], 0
// 004ec018  ff1568248000         call dword ptr [0x802468]
// 004ec01e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ec025  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ec028  c70700000000         mov dword ptr [edi], 0
// 004ec02e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004ec034  51                   push ecx
// 004ec035  8bcf                 mov ecx, edi
// 004ec037  e864cf0a00           call 0x598fa0
// 004ec03c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ec03f  8bc7                 mov eax, edi
// 004ec041  5f                   pop edi
// 004ec042  5e                   pop esi
// 004ec043  64890d00000000       mov dword ptr fs:[0], ecx
// 004ec04a  5b                   pop ebx
// 004ec04b  8be5                 mov esp, ebp
// 004ec04d  5d                   pop ebp
// 004ec04e  c20400               ret 4
// 004ec051  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ec058  b85ec04e00           mov eax, 0x4ec05e
// 004ec05d  c3                   ret 
// 004ec05e  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004ec061  ebc2                 jmp 0x4ec025

// from server: 87% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
typedef void (__thiscall *StringInit)(void *);
typedef void (__thiscall *StringFini)(void *);
typedef long (__stdcall *Decrement)(volatile long *);

extern StringInit stringInit;
extern StringFini stringFini;
extern Decrement decrement;

struct String {
    char data[28];
    String() { stringInit(this); }
    ~String() { stringFini(this); }
};

struct Value {
    char stringData[28];
    unsigned int extra;
    ~Value() { stringFini(this); }
};

struct Texture {
    virtual void destroy(unsigned int);
    virtual void unused1();
    virtual void unused2();
    virtual void adjust(float);
    volatile long references;
    void *data;
    void cleanup();
};

struct Ref {
    Texture *pointer;
    void set(Texture *);
    Ref(Texture *p) : pointer(0) { set(p); }
    Ref(const Ref &);
};

extern float colorRed;
extern float colorGreen;
extern float colorBlue;
extern float adjustment;

struct DrawParameters {
    float red;
    float green;
    float blue;
    float width;
    float height;
    float zero;
    float opacity;

    __forceinline DrawParameters(const float &, const float &, const float &);
    DrawParameters(const DrawParameters &);
};

__forceinline DrawParameters::DrawParameters(
    const float &w, const float &h, const float &transparency)
{
    opacity = 1.0f - transparency;
    height = h;
    width = w;
    zero = 0.0f;
    red = colorRed;
    green = colorGreen;
    blue = colorBlue;
}

struct Renderer {
    virtual void destroy(unsigned int);
    virtual void unused1();
    virtual void unused2();
    virtual void draw(Ref, DrawParameters);
};

struct Block {
    char padding[0x144];
    Value value;
    float width;
    float height;
    Value copy();
};

struct Instance {
    char padding[0x328];
    float transparency;
};

struct Service {
    void query(const Value &, int *, String *);
};

struct Context {
    char padding[12];
    void *object;
};

extern Service *__cdecl findService(Instance *);
extern Texture *__cdecl defaultTexture();
extern Texture *__cdecl createTexture(void *, const String *, int);

struct Decal {
    char padding[0xbc];
    Instance *instance;
    unsigned int unknown;
    Ref texture;
    unsigned char dirty;
    char padding2[7];
    Context *context;
    unsigned int unknown2;
    Block *block;
    Ref get();
};

Ref Decal::get()
{
    int status = 0;
    try {
        if (dirty && instance) {
            String name;
            findService(instance)->query(block->copy(), &status, &name);
            if (status == 1) {
                texture.set(defaultTexture());
                Texture *created = createTexture(context->object, &name, 0);
                Renderer *renderer = reinterpret_cast<Renderer *>(texture.pointer);
                renderer->draw(
                    Ref(created),
                    DrawParameters(block->width, block->height,
                                   instance->transparency));
                created->adjust(adjustment);
                dirty = 0;
            } else if (status == 2) {
                if (texture.pointer) {
                    if (!decrement(&texture.pointer->references)) {
                        texture.pointer->cleanup();
                        if (texture.pointer)
                            texture.pointer->destroy(1);
                    }
                    texture.pointer = 0;
                }
                dirty = 0;
            }
        }
    } catch (...) {
    }
    return Ref(texture.pointer);
}
