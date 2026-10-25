// from server: 100% by king_originala
// roc 2008-06 006324f0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006324f0
//
// 006324f0  56                   push esi
// 006324f1  6828c79500           push 0x95c728
// 006324f6  8bf1                 mov esi, ecx
// 006324f8  e883f8ffff           call 0x631d80
// 006324fd  b801000000           mov eax, 1
// 00632502  c7066c7e8400         mov dword ptr [esi], 0x847e6c
// 00632508  c746105c7e8400       mov dword ptr [esi + 0x10], 0x847e5c
// 0063250f  c74614547e8400       mov dword ptr [esi + 0x14], 0x847e54
// 00632516  c746204c7e8400       mov dword ptr [esi + 0x20], 0x847e4c
// 0063251d  c746243c7e8400       mov dword ptr [esi + 0x24], 0x847e3c
// 00632524  c746442c7e8400       mov dword ptr [esi + 0x44], 0x847e2c
// 0063252b  c746641c7e8400       mov dword ptr [esi + 0x64], 0x847e1c
// 00632532  c786840000000c7e8400 mov dword ptr [esi + 0x84], 0x847e0c
// 0063253c  c786a4000000fc7d8400 mov dword ptr [esi + 0xa4], 0x847dfc
// 00632546  c786c4000000ec7d8400 mov dword ptr [esi + 0xc4], 0x847dec
// 00632550  c78630010000d07d8400 mov dword ptr [esi + 0x130], 0x847dd0
// 0063255a  c78638010000c47d8400 mov dword ptr [esi + 0x138], 0x847dc4
// 00632564  8405a4289700         test byte ptr [0x9728a4], al
// 0063256a  751c                 jne 0x632588
// 0063256c  d9ee                 fldz 
// 0063256e  0905a4289700         or dword ptr [0x9728a4], eax
// 00632574  d91598289700         fst dword ptr [0x972898]
// 0063257a  d9e8                 fld1 
// 0063257c  d91d9c289700         fstp dword ptr [0x97289c]
// 00632582  d91da0289700         fstp dword ptr [0x9728a0]
// 00632588  d90598289700         fld dword ptr [0x972898]
// 0063258e  8bc6                 mov eax, esi
// 00632590  d99e48010000         fstp dword ptr [esi + 0x148]
// 00632596  d9059c289700         fld dword ptr [0x97289c]
// 0063259c  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 006325a2  d905a0289700         fld dword ptr [0x9728a0]
// 006325a8  d99e50010000         fstp dword ptr [esi + 0x150]
// 006325ae  5e                   pop esi
// 006325af  c3                   ret 

extern unsigned char name[];
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

struct Base {
    unsigned int data[82];
    Base(void*);
};

struct Vector {
    float x, y, z;
    __forceinline Vector(float, float, float);
};

__forceinline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct S : Base {
    float x, y, z;
    S();
};

S::S() : Base(name)
{
    data[0] = reinterpret_cast<unsigned int>(table0);
    data[4] = reinterpret_cast<unsigned int>(table10);
    data[5] = reinterpret_cast<unsigned int>(table14);
    data[8] = reinterpret_cast<unsigned int>(table20);
    data[9] = reinterpret_cast<unsigned int>(table24);
    data[17] = reinterpret_cast<unsigned int>(table44);
    data[25] = reinterpret_cast<unsigned int>(table64);
    data[33] = reinterpret_cast<unsigned int>(table84);
    data[41] = reinterpret_cast<unsigned int>(tableA4);
    data[49] = reinterpret_cast<unsigned int>(tableC4);
    data[76] = reinterpret_cast<unsigned int>(table130);
    data[78] = reinterpret_cast<unsigned int>(table138);

    static Vector axis(0.0f, 1.0f, 0.0f);
    x = axis.x;
    y = axis.y;
    z = axis.z;
}
