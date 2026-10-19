// from server: 73% by colin
// from server: 72% by colin
// roc 2008-06 0066eb90  unit: RBX::HUMAN::GettingUp  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066eb90
//
// 0066eb90  83ec20               sub esp, 0x20
// 0066eb93  53                   push ebx
// 0066eb94  56                   push esi
// 0066eb95  8bd9                 mov ebx, ecx
// 0066eb97  e8b4511200           call 0x793d50
// 0066eb9c  8bc8                 mov ecx, eax
// 0066eb9e  e8dda5f6ff           call 0x5d9180
// 0066eba3  8bf0                 mov esi, eax
// 0066eba5  85f6                 test esi, esi
// 0066eba7  0f84de000000         je 0x66ec8b
// 0066ebad  57                   push edi
// 0066ebae  8bcb                 mov ecx, ebx
// 0066ebb0  e87b51fdff           call 0x643d30
// 0066ebb5  8bf8                 mov edi, eax
// 0066ebb7  85ff                 test edi, edi
// 0066ebb9  0f84cb000000         je 0x66ec8a
// 0066ebbf  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0066ebc2  85c9                 test ecx, ecx
// 0066ebc4  7407                 je 0x66ebcd
// 0066ebc6  e84513ffff           call 0x65ff10
// 0066ebcb  eb06                 jmp 0x66ebd3
// 0066ebcd  d9868c000000         fld dword ptr [esi + 0x8c]
// 0066ebd3  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 0066ebd9  d95c240c             fstp dword ptr [esp + 0xc]
// 0066ebdd  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0066ebe0  85c9                 test ecx, ecx
// 0066ebe2  7407                 je 0x66ebeb
// 0066ebe4  e82713ffff           call 0x65ff10
// 0066ebe9  eb06                 jmp 0x66ebf1
// 0066ebeb  d9808c000000         fld dword ptr [eax + 0x8c]
// 0066ebf1  d9542410             fst dword ptr [esp + 0x10]
// 0066ebf5  d85c240c             fcomp dword ptr [esp + 0xc]
// 0066ebf9  dfe0                 fnstsw ax
// 0066ebfb  f6c405               test ah, 5
// 0066ebfe  8d442410             lea eax, [esp + 0x10]
// 0066ec02  7b04                 jnp 0x66ec08
// 0066ec04  8d44240c             lea eax, [esp + 0xc]
// 0066ec08  d900                 fld dword ptr [eax]
// 0066ec0a  b801000000           mov eax, 1
// 0066ec0f  d95c2410             fstp dword ptr [esp + 0x10]
// 0066ec13  d9ee                 fldz 
// 0066ec15  8405d4be9700         test byte ptr [0x97bed4], al
// 0066ec1b  751e                 jne 0x66ec3b
// 0066ec1d  0905d4be9700         or dword ptr [0x97bed4], eax
// 0066ec23  d915c8be9700         fst dword ptr [0x97bec8]
// 0066ec29  d905c0388400         fld dword ptr [0x8438c0]
// 0066ec2f  d91dccbe9700         fstp dword ptr [0x97becc]
// 0066ec35  d915d0be9700         fst dword ptr [0x97bed0]
// 0066ec3b  8d442420             lea eax, [esp + 0x20]
// 0066ec3f  d95c2414             fstp dword ptr [esp + 0x14]
// 0066ec43  68c8be9700           push 0x97bec8
// 0066ec48  50                   push eax
// 0066ec49  e83215ffff           call 0x660180
// 0066ec4e  d94004               fld dword ptr [eax + 4]
// 0066ec51  d84c2418             fmul dword ptr [esp + 0x18]
// 0066ec55  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 0066ec5b  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0066ec5e  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0066ec61  d84c2438             fmul dword ptr [esp + 0x38]
// 0066ec65  83c408               add esp, 8
// 0066ec68  d80dac9b8100         fmul dword ptr [0x819bac]
// 0066ec6e  d95c2418             fstp dword ptr [esp + 0x18]
// 0066ec72  d9ee                 fldz 
// 0066ec74  d95c241c             fstp dword ptr [esp + 0x1c]
// 0066ec78  85c9                 test ecx, ecx
// 0066ec7a  740e                 je 0x66ec8a
// 0066ec7c  83c32c               add ebx, 0x2c
// 0066ec7f  53                   push ebx
// 0066ec80  8d442418             lea eax, [esp + 0x18]
// 0066ec84  50                   push eax
// 0066ec85  e826affbff           call 0x629bb0
// 0066ec8a  5f                   pop edi
// 0066ec8b  5e                   pop esi
// 0066ec8c  5b                   pop ebx
// 0066ec8d  83c420               add esp, 0x20
// 0066ec90  c20400               ret 4

struct HumanoidState
{
    int getValue();
    int padding24[9];
    int field24;
};

struct Cofm
{
    float getMass();
};

struct Vector3
{
    float x;
    float y;
    float z;
};

struct Body
{
    char pad[0x2c];
};

struct Primitive
{
    char pad[0x10];
    Body* body;
};

struct Humanoid
{
    char pad[0xa0];
    Primitive* primitive;
};

struct Balancing
{
    char pad[0x2c];
};

struct GettingUp : Balancing
{
    void update(float);
};

extern "C" int __cdecl sub_793D50();
extern "C" int __cdecl sub_5D9180(int);
extern "C" int __cdecl sub_660180(int, int);
extern "C" void __cdecl sub_629BB0(int, int);

extern float g_819bac;
extern float g_8438c0;
extern float g_97bec8;
extern float g_97becc;
extern float g_97bed0;
extern int g_97bed4;

void GettingUp::update(float dt)
{
    int a = sub_793D50();
    int b = sub_5D9180(a);
    if (!b)
        return;

    int c = reinterpret_cast<HumanoidState*>(this)->getValue();
    if (!c)
        return;

    float f1;
    int ecx = *reinterpret_cast<int*>(b + 0x28);
    if (ecx)
        f1 = reinterpret_cast<Cofm*>(ecx)->getMass();
    else
        f1 = *reinterpret_cast<float*>(b + 0x8c);

    int eax = *reinterpret_cast<int*>(c + 0xa0);
    float f2;
    int ecx2 = *reinterpret_cast<int*>(eax + 0x28);
    if (ecx2)
        f2 = reinterpret_cast<Cofm*>(ecx2)->getMass();
    else
        f2 = *reinterpret_cast<float*>(eax + 0x8c);

    float f3;
    if (f1 >= f2)
        f3 = f1;
    else
        f3 = f2;

    if (!(g_97bed4 & 1))
    {
        g_97bed4 |= 1;
        g_97bec8 = 0.0f;
        g_97becc = g_8438c0;
        g_97bed0 = 0.0f;
    }

    float f4 = 0.0f;
    int v = sub_660180(reinterpret_cast<int>(&f4), reinterpret_cast<int>(&g_97bec8));
    float f5 = *reinterpret_cast<float*>(v + 4) * f3 * dt * g_819bac;

    int p = *reinterpret_cast<int*>(c + 0xa0);
    int q = *reinterpret_cast<int*>(p + 0x10);
    int r = *reinterpret_cast<int*>(q + 0x2c);
    if (!r)
        return;

    float vec[3];
    vec[0] = f5;
    vec[1] = 0.0f;
    vec[2] = 0.0f;
    sub_629BB0(reinterpret_cast<int>(vec), reinterpret_cast<int>(this) + 0x2c);
}
