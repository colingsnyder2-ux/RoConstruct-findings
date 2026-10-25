// from server: 100% by king_originala
// roc 2008-06 004974f0  unit: RBX::Network::Players  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004974f0
//
// 004974f0  6aff                 push -1
// 004974f2  6868617c00           push 0x7c6168
// 004974f7  64a100000000         mov eax, dword ptr fs:[0]
// 004974fd  50                   push eax
// 004974fe  64892500000000       mov dword ptr fs:[0], esp
// 00497505  83ec14               sub esp, 0x14
// 00497508  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049750c  6a00                 push 0
// 0049750e  6860749300           push 0x937460
// 00497513  687c909200           push 0x92907c
// 00497518  6a00                 push 0
// 0049751a  50                   push eax
// 0049751b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00497523  e89ea22000           call 0x6a17c6
// 00497528  83c414               add esp, 0x14
// 0049752b  85c0                 test eax, eax
// 0049752d  7457                 je 0x497586
// 0049752f  0fbf88c8010000       movsx ecx, word ptr [eax + 0x1c8]
// 00497536  0fbf90ca010000       movsx edx, word ptr [eax + 0x1ca]
// 0049753d  890c24               mov dword ptr [esp], ecx
// 00497540  0fbf88cc010000       movsx ecx, word ptr [eax + 0x1cc]
// 00497547  db0424               fild dword ptr [esp]
// 0049754a  891424               mov dword ptr [esp], edx
// 0049754d  0fbf90ce010000       movsx edx, word ptr [eax + 0x1ce]
// 00497554  db0424               fild dword ptr [esp]
// 00497557  890c24               mov dword ptr [esp], ecx
// 0049755a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049755e  8d442404             lea eax, [esp + 4]
// 00497562  db0424               fild dword ptr [esp]
// 00497565  891424               mov dword ptr [esp], edx
// 00497568  50                   push eax
// 00497569  db442404             fild dword ptr [esp + 4]
// 0049756d  d9cb                 fxch st(3)
// 0049756f  d95c2408             fstp dword ptr [esp + 8]
// 00497573  d9c9                 fxch st(1)
// 00497575  d95c240c             fstp dword ptr [esp + 0xc]
// 00497579  d95c2410             fstp dword ptr [esp + 0x10]
// 0049757d  d95c2414             fstp dword ptr [esp + 0x14]
// 00497581  e8ca38ffff           call 0x48ae50
// 00497586  56                   push esi
// 00497587  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0049758b  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00497593  85f6                 test esi, esi
// 00497595  742a                 je 0x4975c1
// 00497597  8d4e04               lea ecx, [esi + 4]
// 0049759a  83caff               or edx, 0xffffffff
// 0049759d  f00fc111             lock xadd dword ptr [ecx], edx
// 004975a1  751e                 jne 0x4975c1
// 004975a3  8b06                 mov eax, dword ptr [esi]
// 004975a5  8b5004               mov edx, dword ptr [eax + 4]
// 004975a8  8bce                 mov ecx, esi
// 004975aa  ffd2                 call edx
// 004975ac  8d4608               lea eax, [esi + 8]
// 004975af  83c9ff               or ecx, 0xffffffff
// 004975b2  f00fc108             lock xadd dword ptr [eax], ecx
// 004975b6  7509                 jne 0x4975c1
// 004975b8  8b16                 mov edx, dword ptr [esi]
// 004975ba  8b4208               mov eax, dword ptr [edx + 8]
// 004975bd  8bce                 mov ecx, esi
// 004975bf  ffd0                 call eax
// 004975c1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004975c5  5e                   pop esi
// 004975c6  64890d00000000       mov dword ptr fs:[0], ecx
// 004975cd  83c420               add esp, 0x20
// 004975d0  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern char instanceType;
extern char playerType;
extern "C" void* __cdecl castObject(void*, long, void*, void*, int);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Player
{
    char padding[0x1c8];
    short x;
    short y;
    short z;
    short w;
};

struct Vector
{
    float x;
    float y;
    float z;
    float w;
    Vector(double, double, double, double);
};

inline Vector::Vector(double a, double b, double c, double d)
    : x(static_cast<float>(a)),
      y(static_cast<float>(b)),
      z(static_cast<float>(c)),
      w(static_cast<float>(d))
{
}

struct Output
{
    void set(const Vector&);
};

void __stdcall func_004974f0(Shared value, Output* output)
{
    Player* player = static_cast<Player*>(
        castObject(value.object, 0, &instanceType, &playerType, 0));

    if (player)
    {
        Vector vector(player->x, player->y, player->z, player->w);
        output->set(vector);
    }
}
