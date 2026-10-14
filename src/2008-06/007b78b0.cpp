// from server: 94% by colin
// roc 2008-06 007b78b0  unit: RBX::RenderNew::Material::Level  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b78b0
//
// 007b78b0  6aff                 push -1
// 007b78b2  6836e47e00           push 0x7ee436
// 007b78b7  64a100000000         mov eax, dword ptr fs:[0]
// 007b78bd  50                   push eax
// 007b78be  64892500000000       mov dword ptr fs:[0], esp
// 007b78c5  51                   push ecx
// 007b78c6  55                   push ebp
// 007b78c7  56                   push esi
// 007b78c8  8bf1                 mov esi, ecx
// 007b78ca  89742408             mov dword ptr [esp + 8], esi
// 007b78ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007b78d6  8d6e08               lea ebp, [esi + 8]
// 007b78d9  c706e85b8700         mov dword ptr [esi], 0x875be8
// 007b78df  c6460400             mov byte ptr [esi + 4], 0
// 007b78e3  c7450000000000       mov dword ptr [ebp], 0
// 007b78ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b78ee  8d4e0c               lea ecx, [esi + 0xc]
// 007b78f1  50                   push eax
// 007b78f2  c644241802           mov byte ptr [esp + 0x18], 2
// 007b78f7  c70100000000         mov dword ptr [ecx], 0
// 007b78fd  e89e16deff           call 0x598fa0
// 007b7902  d9442420             fld dword ptr [esp + 0x20]
// 007b7906  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b790a  d95e10               fstp dword ptr [esi + 0x10]
// 007b790d  d9442424             fld dword ptr [esp + 0x24]
// 007b7911  c644241403           mov byte ptr [esp + 0x14], 3
// 007b7916  d95e14               fstp dword ptr [esi + 0x14]
// 007b7919  d9442428             fld dword ptr [esp + 0x28]
// 007b791d  d95e18               fstp dword ptr [esi + 0x18]
// 007b7920  d944242c             fld dword ptr [esp + 0x2c]
// 007b7924  d95e1c               fstp dword ptr [esi + 0x1c]
// 007b7927  d9442430             fld dword ptr [esp + 0x30]
// 007b792b  d95e20               fstp dword ptr [esi + 0x20]
// 007b792e  d9442434             fld dword ptr [esp + 0x34]
// 007b7932  d95e24               fstp dword ptr [esi + 0x24]
// 007b7935  d9442438             fld dword ptr [esp + 0x38]
// 007b7939  d95e28               fstp dword ptr [esi + 0x28]
// 007b793c  85c9                 test ecx, ecx
// 007b793e  0f84b6000000         je 0x7b79fa
// 007b7944  57                   push edi
// 007b7945  8d542430             lea edx, [esp + 0x30]
// 007b7949  52                   push edx
// 007b794a  6a00                 push 0
// 007b794c  68c82e9400           push 0x942ec8
// 007b7951  68f02e9400           push 0x942ef0
// 007b7956  6a00                 push 0
// 007b7958  51                   push ecx
// 007b7959  e8689eeeff           call 0x6a17c6
// 007b795e  83c414               add esp, 0x14
// 007b7961  8bc8                 mov ecx, eax
// 007b7963  e848150000           call 0x7b8eb0
// 007b7968  8b00                 mov eax, dword ptr [eax]
// 007b796a  33ff                 xor edi, edi
// 007b796c  897c2434             mov dword ptr [esp + 0x34], edi
// 007b7970  85c0                 test eax, eax
// 007b7972  7410                 je 0x7b7984
// 007b7974  8bf8                 mov edi, eax
// 007b7976  83c004               add eax, 4
// 007b7979  50                   push eax
// 007b797a  897c2438             mov dword ptr [esp + 0x38], edi
// 007b797e  ff15b0218000         call dword ptr [0x8021b0]
// 007b7984  57                   push edi
// 007b7985  8bcd                 mov ecx, ebp
// 007b7987  c644241c05           mov byte ptr [esp + 0x1c], 5
// 007b798c  e80f16deff           call 0x598fa0
// 007b7991  c644241804           mov byte ptr [esp + 0x18], 4
// 007b7996  85ff                 test edi, edi
// 007b7998  741f                 je 0x7b79b9
// 007b799a  8d4704               lea eax, [edi + 4]
// 007b799d  50                   push eax
// 007b799e  ff15ac218000         call dword ptr [0x8021ac]
// 007b79a4  85c0                 test eax, eax
// 007b79a6  7511                 jne 0x7b79b9
// 007b79a8  8bcf                 mov ecx, edi
// 007b79aa  e8e133caff           call 0x45ad90
// 007b79af  8b07                 mov eax, dword ptr [edi]
// 007b79b1  8b10                 mov edx, dword ptr [eax]
// 007b79b3  6a01                 push 1
// 007b79b5  8bcf                 mov ecx, edi
// 007b79b7  ffd2                 call edx
// 007b79b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b79bd  c644241803           mov byte ptr [esp + 0x18], 3
// 007b79c2  5f                   pop edi
// 007b79c3  85c0                 test eax, eax
// 007b79c5  742f                 je 0x7b79f6
// 007b79c7  83c004               add eax, 4
// 007b79ca  50                   push eax
// 007b79cb  ff15ac218000         call dword ptr [0x8021ac]
// 007b79d1  85c0                 test eax, eax
// 007b79d3  7519                 jne 0x7b79ee
// 007b79d5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b79d9  e8b233caff           call 0x45ad90
// 007b79de  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b79e2  85c9                 test ecx, ecx
// 007b79e4  7408                 je 0x7b79ee
// 007b79e6  8b01                 mov eax, dword ptr [ecx]
// 007b79e8  8b10                 mov edx, dword ptr [eax]
// 007b79ea  6a01                 push 1
// 007b79ec  ffd2                 call edx
// 007b79ee  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007b79f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b79fa  d9ee                 fldz 
// 007b79fc  d85628               fcom dword ptr [esi + 0x28]
// 007b79ff  dfe0                 fnstsw ax
// 007b7a01  f6c405               test ah, 5
// 007b7a04  7a05                 jp 0x7b7a0b
// 007b7a06  d95e24               fstp dword ptr [esi + 0x24]
// 007b7a09  eb02                 jmp 0x7b7a0d
// 007b7a0b  ddd8                 fstp st(0)
// 007b7a0d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007b7a15  85c9                 test ecx, ecx
// 007b7a17  7427                 je 0x7b7a40
// 007b7a19  8d4104               lea eax, [ecx + 4]
// 007b7a1c  50                   push eax
// 007b7a1d  ff15ac218000         call dword ptr [0x8021ac]
// 007b7a23  85c0                 test eax, eax
// 007b7a25  7519                 jne 0x7b7a40
// 007b7a27  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b7a2b  e86033caff           call 0x45ad90
// 007b7a30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b7a34  85c9                 test ecx, ecx
// 007b7a36  7408                 je 0x7b7a40
// 007b7a38  8b01                 mov eax, dword ptr [ecx]
// 007b7a3a  8b10                 mov edx, dword ptr [eax]
// 007b7a3c  6a01                 push 1
// 007b7a3e  ffd2                 call edx
// 007b7a40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7a44  8bc6                 mov eax, esi
// 007b7a46  5e                   pop esi
// 007b7a47  5d                   pop ebp
// 007b7a48  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7a4f  83c410               add esp, 0x10
// 007b7a52  c22000               ret 0x20

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long *);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

struct Ref {
    virtual ~Ref();
    volatile long count;
    void *owner;
    void cleanup();
};

struct OtherPtr {
    Ref *p;
    ~OtherPtr()
    {
        if (p) {
            if (InterlockedDecrement(&p->count) == 0) {
                p->cleanup();
                delete p;
            }
            p = 0;
        }
    }
};

struct Ptr {
    Ref *p;

    Ptr() : p(0) {}
    Ptr(const Ptr &v) : p(0) { assign(v.p); }
    Ptr(const OtherPtr &v) : p(0)
    {
        if (v.p) {
            p = v.p;
            InterlockedIncrement(&p->count);
        }
    }
    ~Ptr()
    {
        if (p) {
            if (InterlockedDecrement(&p->count) == 0) {
                p->cleanup();
                delete p;
            }
            p = 0;
        }
    }
    Ptr &assign(Ref *);
};

struct TextureProxyBase : Ref {
};

struct TextureProxy : TextureProxyBase {
    OtherPtr get();
};

struct LevelBase {
    virtual ~LevelBase();
};

struct Level : LevelBase {
    bool enabled;
    Ptr texture;
    Ptr proxy;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;

    Level(Ptr, float, float, float, float, float, float, float);
    virtual ~Level();
};

Level::Level(Ptr value, float aa, float bb, float cc, float dd,
             float ee, float ff, float gg)
    : enabled(false), texture(), proxy(value),
      a(aa), b(bb), c(cc), d(dd), e(ee), f(ff), g(gg)
{
    if (value.p) {
        texture.assign(
            Ptr(dynamic_cast<TextureProxy *>(
                static_cast<TextureProxyBase *>(value.p))->get()).p);
    }
    if (g > 0.0f)
        f = 0.0f;
}
