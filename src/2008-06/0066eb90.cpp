// from server: 72% by colin
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
    if (f2 <= f1)
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
