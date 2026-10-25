// from server: 100% by king_originala
// roc 2008-06 00638660  unit: std::D::DU?$char_traits::V?$basic_string::?$Value  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638660
//
// 00638660  6aff                 push -1
// 00638662  68b1a37d00           push 0x7da3b1
// 00638667  64a100000000         mov eax, dword ptr fs:[0]
// 0063866d  50                   push eax
// 0063866e  64892500000000       mov dword ptr fs:[0], esp
// 00638675  83ec20               sub esp, 0x20
// 00638678  56                   push esi
// 00638679  8bf1                 mov esi, ecx
// 0063867b  89742404             mov dword ptr [esp + 4], esi
// 0063867f  e8ccf7ffff           call 0x637e50
// 00638684  c7060c968400         mov dword ptr [esi], 0x84960c
// 0063868a  c7461000968400       mov dword ptr [esi + 0x10], 0x849600
// 00638691  c74614f8958400       mov dword ptr [esi + 0x14], 0x8495f8
// 00638698  c74620f0958400       mov dword ptr [esi + 0x20], 0x8495f0
// 0063869f  c74624e0958400       mov dword ptr [esi + 0x24], 0x8495e0
// 006386a6  c74644d0958400       mov dword ptr [esi + 0x44], 0x8495d0
// 006386ad  c74664c0958400       mov dword ptr [esi + 0x64], 0x8495c0
// 006386b4  c78684000000b0958400 mov dword ptr [esi + 0x84], 0x8495b0
// 006386be  c786a4000000a0958400 mov dword ptr [esi + 0xa4], 0x8495a0
// 006386c8  c786c400000090958400 mov dword ptr [esi + 0xc4], 0x849590
// 006386d2  d905c0119600         fld dword ptr [0x9611c0]
// 006386d8  d99e30010000         fstp dword ptr [esi + 0x130]
// 006386de  6878848100           push 0x818478
// 006386e3  d905c4119600         fld dword ptr [0x9611c4]
// 006386e9  8d4c240c             lea ecx, [esp + 0xc]
// 006386ed  d99e34010000         fstp dword ptr [esi + 0x134]
// 006386f3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006386fb  d905c8119600         fld dword ptr [0x9611c8]
// 00638701  d99e38010000         fstp dword ptr [esi + 0x138]
// 00638707  ff1558248000         call dword ptr [0x802458]
// 0063870d  8d442408             lea eax, [esp + 8]
// 00638711  50                   push eax
// 00638712  8bce                 mov ecx, esi
// 00638714  c644243001           mov byte ptr [esp + 0x30], 1
// 00638719  e87228f2ff           call 0x55af90
// 0063871e  8d4c2408             lea ecx, [esp + 8]
// 00638722  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00638727  ff1568248000         call dword ptr [0x802468]
// 0063872d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638731  8bc6                 mov eax, esi
// 00638733  5e                   pop esi
// 00638734  64890d00000000       mov dword ptr fs:[0], ecx
// 0063873b  83c42c               add esp, 0x2c
// 0063873e  c3                   ret 

struct String
{
    char storage[28];

    __forceinline String(const char*);
    __forceinline ~String();
};

typedef void (__thiscall *StringConstruct)(String*, const char*);
typedef void (__thiscall *StringDestroy)(String*);

extern StringConstruct stringConstruct;
extern StringDestroy stringDestroy;

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base
{
    unsigned long storage[76];

    Base();
    ~Base();
    void setName(const String&);
};

struct S : Base
{
    float x;
    float y;
    float z;

    S();
};

S::S() : Base()
{
    storage[0] = 0x84960c;
    storage[4] = 0x849600;
    storage[5] = 0x8495f8;
    storage[8] = 0x8495f0;
    storage[9] = 0x8495e0;
    storage[17] = 0x8495d0;
    storage[25] = 0x8495c0;
    storage[33] = 0x8495b0;
    storage[41] = 0x8495a0;
    storage[49] = 0x849590;

    x = *reinterpret_cast<const float*>(0x9611c0);
    y = *reinterpret_cast<const float*>(0x9611c4);
    z = *reinterpret_cast<const float*>(0x9611c8);

    String name(reinterpret_cast<const char*>(0x818478));
    setName(name);
}
