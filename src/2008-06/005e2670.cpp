// from server: 92% by king_originala
// roc 2008-06 005e2670  unit: RBX::Lighting  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2670
//
// 005e2670  56                   push esi
// 005e2671  8bf1                 mov esi, ecx
// 005e2673  d98624020000         fld dword ptr [esi + 0x224]
// 005e2679  d9442408             fld dword ptr [esp + 8]
// 005e267d  dde1                 fucom st(1)
// 005e267f  dfe0                 fnstsw ax
// 005e2681  ddd9                 fstp st(1)
// 005e2683  f6c444               test ah, 0x44
// 005e2686  7b49                 jnp 0x5e26d1
// 005e2688  68f8a99700           push 0x97a9f8
// 005e268d  d99e24020000         fstp dword ptr [esi + 0x224]
// 005e2693  e868b4e2ff           call 0x40db00
// 005e2698  8d4614               lea eax, [esi + 0x14]
// 005e269b  50                   push eax
// 005e269c  b98ca89700           mov ecx, 0x97a88c
// 005e26a1  e87a8ff8ff           call 0x56b620
// 005e26a6  85c0                 test eax, eax
// 005e26a8  740f                 je 0x5e26b9
// 005e26aa  6a00                 push 0
// 005e26ac  8d4c240c             lea ecx, [esp + 0xc]
// 005e26b0  51                   push ecx
// 005e26b1  8d4810               lea ecx, [eax + 0x10]
// 005e26b4  e847f8ffff           call 0x5e1f00
// 005e26b9  56                   push esi
// 005e26ba  e8012be8ff           call 0x4651c0
// 005e26bf  83c404               add esp, 4
// 005e26c2  85c0                 test eax, eax
// 005e26c4  740d                 je 0x5e26d3
// 005e26c6  8bc8                 mov ecx, eax
// 005e26c8  e8832cf7ff           call 0x555350
// 005e26cd  5e                   pop esi
// 005e26ce  c20400               ret 4
// 005e26d1  ddd8                 fstp st(0)
// 005e26d3  5e                   pop esi
// 005e26d4  c20400               ret 4

struct Signal {
    void fire(float*, int);
};

struct Connection {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Connection* find(void*);
};

extern Registry registry;
extern char property;

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void update();
    };
}

RBX::ServiceProvider* __cdecl func_004651c0(RBX::Instance*);

struct Lighting {
    char prefix[0x14];
    char identity[0x210];
    float value;

    void notify(const void*);
    void setValue(float);
};

void Lighting::setValue(float v)
{
    if (v != value) {
        value = v;
        notify(&property);
        Connection* connection = registry.find(identity);
        if (connection)
            connection->signal.fire(&v, 0);
        RBX::ServiceProvider* provider =
            func_004651c0(reinterpret_cast<RBX::Instance*>(this));
        if (provider)
            provider->update();
    }
}
