// from server: 100% by king_originala
// roc 2008-06 006388b0  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006388b0
//
// 006388b0  6aff                 push -1
// 006388b2  68f1a37d00           push 0x7da3f1
// 006388b7  64a100000000         mov eax, dword ptr fs:[0]
// 006388bd  50                   push eax
// 006388be  64892500000000       mov dword ptr fs:[0], esp
// 006388c5  83ec20               sub esp, 0x20
// 006388c8  56                   push esi
// 006388c9  8bf1                 mov esi, ecx
// 006388cb  89742404             mov dword ptr [esp + 4], esi
// 006388cf  e80cf7ffff           call 0x637fe0
// 006388d4  c7068c978400         mov dword ptr [esi], 0x84978c
// 006388da  c7461080978400       mov dword ptr [esi + 0x10], 0x849780
// 006388e1  c7461478978400       mov dword ptr [esi + 0x14], 0x849778
// 006388e8  c7462070978400       mov dword ptr [esi + 0x20], 0x849770
// 006388ef  c7462460978400       mov dword ptr [esi + 0x24], 0x849760
// 006388f6  c7464450978400       mov dword ptr [esi + 0x44], 0x849750
// 006388fd  c7466440978400       mov dword ptr [esi + 0x64], 0x849740
// 00638904  c7868400000030978400 mov dword ptr [esi + 0x84], 0x849730
// 0063890e  c786a400000020978400 mov dword ptr [esi + 0xa4], 0x849720
// 00638918  c786c400000010978400 mov dword ptr [esi + 0xc4], 0x849710
// 00638922  d90520d39700         fld dword ptr [0x97d320]
// 00638928  d99e30010000         fstp dword ptr [esi + 0x130]
// 0063892e  6878848100           push 0x818478
// 00638933  d90524d39700         fld dword ptr [0x97d324]
// 00638939  8d4c240c             lea ecx, [esp + 0xc]
// 0063893d  d99e34010000         fstp dword ptr [esi + 0x134]
// 00638943  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0063894b  d90528d39700         fld dword ptr [0x97d328]
// 00638951  d99e38010000         fstp dword ptr [esi + 0x138]
// 00638957  ff1558248000         call dword ptr [0x802458]
// 0063895d  8d442408             lea eax, [esp + 8]
// 00638961  50                   push eax
// 00638962  8bce                 mov ecx, esi
// 00638964  c644243001           mov byte ptr [esp + 0x30], 1
// 00638969  e82226f2ff           call 0x55af90
// 0063896e  8d4c2408             lea ecx, [esp + 8]
// 00638972  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00638977  ff1568248000         call dword ptr [0x802468]
// 0063897d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638981  8bc6                 mov eax, esi
// 00638983  5e                   pop esi
// 00638984  64890d00000000       mov dword ptr fs:[0], ecx
// 0063898b  83c42c               add esp, 0x2c
// 0063898e  c3                   ret 

struct String;
typedef void (__thiscall *StringConstructor)(String *, const char *);
typedef void (__thiscall *StringDestructor)(String *);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String
{
    unsigned char storage[28];

    String(const char *text);
    ~String();
};

__forceinline String::String(const char *text)
{
    stringConstructor(this, text);
}

__forceinline String::~String()
{
    stringDestructor(this);
}

struct Base
{
    unsigned char storage[0x130];

    Base();
    ~Base();
    void setName(const String &name);
};

struct S : Base
{
    float x;
    float y;
    float z;

    S();
};

S::S()
{
    unsigned int *p = reinterpret_cast<unsigned int *>(this);
    p[0x00 / 4] = 0x84978c;
    p[0x10 / 4] = 0x849780;
    p[0x14 / 4] = 0x849778;
    p[0x20 / 4] = 0x849770;
    p[0x24 / 4] = 0x849760;
    p[0x44 / 4] = 0x849750;
    p[0x64 / 4] = 0x849740;
    p[0x84 / 4] = 0x849730;
    p[0xa4 / 4] = 0x849720;
    p[0xc4 / 4] = 0x849710;

    x = *reinterpret_cast<const float *>(0x97d320);
    y = *reinterpret_cast<const float *>(0x97d324);
    z = *reinterpret_cast<const float *>(0x97d328);

    String name(reinterpret_cast<const char *>(0x818478));
    setName(name);
}
