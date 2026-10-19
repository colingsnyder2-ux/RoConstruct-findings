// from server: 85% by colin
// from server: 81% by colin
// roc 2008-06 0062d200  unit: RBX::VForceField::?$FactoryProduct  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d200
//
// 0062d200  6aff                 push -1
// 0062d202  6868617c00           push 0x7c6168
// 0062d207  64a100000000         mov eax, dword ptr fs:[0]
// 0062d20d  50                   push eax
// 0062d20e  64892500000000       mov dword ptr fs:[0], esp
// 0062d215  83ec14               sub esp, 0x14
// 0062d218  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062d21c  6a00                 push 0
// 0062d21e  6850dd9200           push 0x92dd50
// 0062d223  687c909200           push 0x92907c
// 0062d228  6a00                 push 0
// 0062d22a  50                   push eax
// 0062d22b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0062d233  e88e450700           call 0x6a17c6
// 0062d238  8bc8                 mov ecx, eax
// 0062d23a  83c414               add esp, 0x14
// 0062d23d  85c9                 test ecx, ecx
// 0062d23f  746e                 je 0x62d2af
// 0062d241  d98128030000         fld dword ptr [ecx + 0x328]
// 0062d247  d9ee                 fldz 
// 0062d249  d9c0                 fld st(0)
// 0062d24b  ddea                 fucomp st(2)
// 0062d24d  dfe0                 fnstsw ax
// 0062d24f  ddd9                 fstp st(1)
// 0062d251  f6c444               test ah, 0x44
// 0062d254  7b57                 jnp 0x62d2ad
// 0062d256  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062d25a  83f80f               cmp eax, 0xf
// 0062d25d  7d05                 jge 0x62d264
// 0062d25f  890424               mov dword ptr [esp], eax
// 0062d262  eb0a                 jmp 0x62d26e
// 0062d264  ba1e000000           mov edx, 0x1e
// 0062d269  2bd0                 sub edx, eax
// 0062d26b  891424               mov dword ptr [esp], edx
// 0062d26e  db0424               fild dword ptr [esp]
// 0062d271  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062d275  8d442404             lea eax, [esp + 4]
// 0062d279  50                   push eax
// 0062d27a  d80d34598400         fmul dword ptr [0x845934]
// 0062d280  52                   push edx
// 0062d281  d954240c             fst dword ptr [esp + 0xc]
// 0062d285  d9c9                 fxch st(1)
// 0062d287  d95c2410             fstp dword ptr [esp + 0x10]
// 0062d28b  d9e8                 fld1 
// 0062d28d  dee1                 fsubrp st(1)
// 0062d28f  d95c2414             fstp dword ptr [esp + 0x14]
// 0062d293  d905ac9b8100         fld dword ptr [0x819bac]
// 0062d299  d95c2418             fstp dword ptr [esp + 0x18]
// 0062d29d  e8eed7f6ff           call 0x59aa90
// 0062d2a2  50                   push eax
// 0062d2a3  e8589b0400           call 0x676e00
// 0062d2a8  83c40c               add esp, 0xc
// 0062d2ab  eb02                 jmp 0x62d2af
// 0062d2ad  ddd8                 fstp st(0)
// 0062d2af  56                   push esi
// 0062d2b0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0062d2b4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0062d2bc  85f6                 test esi, esi
// 0062d2be  742a                 je 0x62d2ea
// 0062d2c0  8d4604               lea eax, [esi + 4]
// 0062d2c3  83c9ff               or ecx, 0xffffffff
// 0062d2c6  f00fc108             lock xadd dword ptr [eax], ecx
// 0062d2ca  751e                 jne 0x62d2ea
// 0062d2cc  8b16                 mov edx, dword ptr [esi]
// 0062d2ce  8b4204               mov eax, dword ptr [edx + 4]
// 0062d2d1  8bce                 mov ecx, esi
// 0062d2d3  ffd0                 call eax
// 0062d2d5  8d4e08               lea ecx, [esi + 8]
// 0062d2d8  83caff               or edx, 0xffffffff
// 0062d2db  f00fc111             lock xadd dword ptr [ecx], edx
// 0062d2df  7509                 jne 0x62d2ea
// 0062d2e1  8b06                 mov eax, dword ptr [esi]
// 0062d2e3  8b5008               mov edx, dword ptr [eax + 8]
// 0062d2e6  8bce                 mov ecx, esi
// 0062d2e8  ffd2                 call edx
// 0062d2ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062d2ee  5e                   pop esi
// 0062d2ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d2f6  83c420               add esp, 0x20
// 0062d2f9  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Instance {
    virtual void anchor();
};

struct PartInstance : Instance {
    unsigned char padding[804];
    volatile float value;
};

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Instance* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Color {
    float r;
    float g;
    float b;
    float a;
};

extern const float scale;
extern const float alpha;
extern void* __cdecl build(void*, const Color&);
extern void __cdecl submit(void*);

void __cdecl render(Shared object, void* context, int phase)
{
    PartInstance* part = dynamic_cast<PartInstance*>(object.object);
    if (part && part->value != 0.0f) {
        float t = (phase < 15 ? phase : 30 - phase) * scale;
        Color color = { t, part->value, 1.0f - part->value, alpha };
        submit(build(context, color));
    }
}
