// from server: 100% by king_originala
// roc 2008-06 006325e0  unit: RBX::VBodyForce::?$FactoryProduct  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006325e0
//
// 006325e0  56                   push esi
// 006325e1  6834c79500           push 0x95c734
// 006325e6  8bf1                 mov esi, ecx
// 006325e8  e893f9ffff           call 0x631f80
// 006325ed  d9ee                 fldz 
// 006325ef  b801000000           mov eax, 1
// 006325f4  c7065c7f8400         mov dword ptr [esi], 0x847f5c
// 006325fa  c746104c7f8400       mov dword ptr [esi + 0x10], 0x847f4c
// 00632601  c74614447f8400       mov dword ptr [esi + 0x14], 0x847f44
// 00632608  c746203c7f8400       mov dword ptr [esi + 0x20], 0x847f3c
// 0063260f  c746242c7f8400       mov dword ptr [esi + 0x24], 0x847f2c
// 00632616  c746441c7f8400       mov dword ptr [esi + 0x44], 0x847f1c
// 0063261d  c746640c7f8400       mov dword ptr [esi + 0x64], 0x847f0c
// 00632624  c78684000000fc7e8400 mov dword ptr [esi + 0x84], 0x847efc
// 0063262e  c786a4000000ec7e8400 mov dword ptr [esi + 0xa4], 0x847eec
// 00632638  c786c4000000dc7e8400 mov dword ptr [esi + 0xc4], 0x847edc
// 00632642  c78630010000c07e8400 mov dword ptr [esi + 0x130], 0x847ec0
// 0063264c  c78638010000b47e8400 mov dword ptr [esi + 0x138], 0x847eb4
// 00632656  8405a4289700         test byte ptr [0x9728a4], al
// 0063265c  751a                 jne 0x632678
// 0063265e  0905a4289700         or dword ptr [0x9728a4], eax
// 00632664  d91598289700         fst dword ptr [0x972898]
// 0063266a  d9e8                 fld1 
// 0063266c  d91d9c289700         fstp dword ptr [0x97289c]
// 00632672  d915a0289700         fst dword ptr [0x9728a0]
// 00632678  d90598289700         fld dword ptr [0x972898]
// 0063267e  d99e48010000         fstp dword ptr [esi + 0x148]
// 00632684  d9059c289700         fld dword ptr [0x97289c]
// 0063268a  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 00632690  d905a0289700         fld dword ptr [0x9728a0]
// 00632696  d99e50010000         fstp dword ptr [esi + 0x150]
// 0063269c  840550f09600         test byte ptr [0x96f050], al
// 006326a2  751a                 jne 0x6326be
// 006326a4  090550f09600         or dword ptr [0x96f050], eax
// 006326aa  d91544f09600         fst dword ptr [0x96f044]
// 006326b0  d91548f09600         fst dword ptr [0x96f048]
// 006326b6  d91d4cf09600         fstp dword ptr [0x96f04c]
// 006326bc  eb02                 jmp 0x6326c0
// 006326be  ddd8                 fstp st(0)
// 006326c0  d90544f09600         fld dword ptr [0x96f044]
// 006326c6  8bc6                 mov eax, esi
// 006326c8  d99e54010000         fstp dword ptr [esi + 0x154]
// 006326ce  d90548f09600         fld dword ptr [0x96f048]
// 006326d4  d99e58010000         fstp dword ptr [esi + 0x158]
// 006326da  d9054cf09600         fld dword ptr [0x96f04c]
// 006326e0  d99e5c010000         fstp dword ptr [esi + 0x15c]
// 006326e6  5e                   pop esi
// 006326e7  c3                   ret 

unsigned int __cdecl getName();

extern unsigned char bodyThrustName[];
extern unsigned char table0[];
extern unsigned char table10[];
extern unsigned char table14[];
extern unsigned char table20[];
extern unsigned char table24[];
extern unsigned char table44[];
extern unsigned char table64[];
extern unsigned char table84[];
extern unsigned char tableA4[];
extern unsigned char tableC4[];
extern unsigned char table130[];
extern unsigned char table138[];

struct Vector {
    float x, y, z;
    Vector(float a, float b, float c);
    static const Vector& direction();
    static const Vector& origin();
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline const Vector& Vector::direction()
{
    static Vector value(0.0f, 1.0f, 0.0f);
    return value;
}

inline const Vector& Vector::origin()
{
    static Vector value(0.0f, 0.0f, 0.0f);
    return value;
}

struct S {
    unsigned char storage[0x148];
    float forceX, forceY, forceZ;
    float positionX, positionY, positionZ;

    S* initialize();
};

S* S::initialize()
{
    typedef unsigned int (__thiscall *InitializeBase)(S*, const char*);
    reinterpret_cast<InitializeBase>(&getName)(
        this, reinterpret_cast<const char*>(bodyThrustName));

    *reinterpret_cast<unsigned char**>(storage + 0x00) = table0;
    *reinterpret_cast<unsigned char**>(storage + 0x10) = table10;
    *reinterpret_cast<unsigned char**>(storage + 0x14) = table14;
    *reinterpret_cast<unsigned char**>(storage + 0x20) = table20;
    *reinterpret_cast<unsigned char**>(storage + 0x24) = table24;
    *reinterpret_cast<unsigned char**>(storage + 0x44) = table44;
    *reinterpret_cast<unsigned char**>(storage + 0x64) = table64;
    *reinterpret_cast<unsigned char**>(storage + 0x84) = table84;
    *reinterpret_cast<unsigned char**>(storage + 0xA4) = tableA4;
    *reinterpret_cast<unsigned char**>(storage + 0xC4) = tableC4;
    *reinterpret_cast<unsigned char**>(storage + 0x130) = table130;
    *reinterpret_cast<unsigned char**>(storage + 0x138) = table138;

    const Vector& direction = Vector::direction();
    forceX = direction.x;
    forceY = direction.y;
    forceZ = direction.z;

    const Vector& origin = Vector::origin();
    positionX = origin.x;
    positionY = origin.y;
    positionZ = origin.z;

    return this;
}
