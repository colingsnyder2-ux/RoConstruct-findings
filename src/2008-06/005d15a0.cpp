// from server: 100% by king_originala
// roc 2008-06 005d15a0  unit: RBX::VHopperBin::?$FactoryProduct  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d15a0
//
// 005d15a0  6aff                 push -1
// 005d15a2  68c1577d00           push 0x7d57c1
// 005d15a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d15ad  50                   push eax
// 005d15ae  64892500000000       mov dword ptr fs:[0], esp
// 005d15b5  83ec20               sub esp, 0x20
// 005d15b8  53                   push ebx
// 005d15b9  56                   push esi
// 005d15ba  8bf1                 mov esi, ecx
// 005d15bc  89742408             mov dword ptr [esp + 8], esi
// 005d15c0  e80bffffff           call 0x5d14d0
// 005d15c5  33db                 xor ebx, ebx
// 005d15c7  68f8b68300           push 0x83b6f8
// 005d15cc  8d4c2410             lea ecx, [esp + 0x10]
// 005d15d0  895c2434             mov dword ptr [esp + 0x34], ebx
// 005d15d4  c7066cb68300         mov dword ptr [esi], 0x83b66c
// 005d15da  c746105cb68300       mov dword ptr [esi + 0x10], 0x83b65c
// 005d15e1  c7461454b68300       mov dword ptr [esi + 0x14], 0x83b654
// 005d15e8  c746204cb68300       mov dword ptr [esi + 0x20], 0x83b64c
// 005d15ef  c746243cb68300       mov dword ptr [esi + 0x24], 0x83b63c
// 005d15f6  c746442cb68300       mov dword ptr [esi + 0x44], 0x83b62c
// 005d15fd  c746641cb68300       mov dword ptr [esi + 0x64], 0x83b61c
// 005d1604  c786840000000cb68300 mov dword ptr [esi + 0x84], 0x83b60c
// 005d160e  c786a4000000fcb58300 mov dword ptr [esi + 0xa4], 0x83b5fc
// 005d1618  c786c4000000ecb58300 mov dword ptr [esi + 0xc4], 0x83b5ec
// 005d1622  c78630010000e4b58300 mov dword ptr [esi + 0x130], 0x83b5e4
// 005d162c  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 005d1632  889ea4010000         mov byte ptr [esi + 0x1a4], bl
// 005d1638  ff1558248000         call dword ptr [0x802458]
// 005d163e  8d44240c             lea eax, [esp + 0xc]
// 005d1642  50                   push eax
// 005d1643  8bce                 mov ecx, esi
// 005d1645  c644243401           mov byte ptr [esp + 0x34], 1
// 005d164a  e84199f8ff           call 0x55af90
// 005d164f  8d4c240c             lea ecx, [esp + 0xc]
// 005d1653  885c2430             mov byte ptr [esp + 0x30], bl
// 005d1657  ff1568248000         call dword ptr [0x802468]
// 005d165d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d1661  8bc6                 mov eax, esi
// 005d1663  5e                   pop esi
// 005d1664  5b                   pop ebx
// 005d1665  64890d00000000       mov dword ptr fs:[0], ecx
// 005d166c  83c42c               add esp, 0x2c
// 005d166f  c3                   ret 

typedef void (__thiscall *StringConstruct)(void *, const char *);
typedef void (__thiscall *StringDestroy)(void *);

extern StringConstruct constructString;
extern StringDestroy destroyString;

extern unsigned long table0[];
extern unsigned long table10[];
extern unsigned long table14[];
extern unsigned long table20[];
extern unsigned long table24[];
extern unsigned long table44[];
extern unsigned long table64[];
extern unsigned long table84[];
extern unsigned long tableA4[];
extern unsigned long tableC4[];
extern unsigned long table130[];

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

__forceinline String::String(const char *text)
{
    constructString(this, text);
}

__forceinline String::~String()
{
    destroyString(this);
}

struct Base {
    unsigned long slots[104];
    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base {
    unsigned long value;
    unsigned char enabled;
    S();
};

S::S() : Base()
{
    slots[0] = (unsigned long)table0;
    slots[4] = (unsigned long)table10;
    slots[5] = (unsigned long)table14;
    slots[8] = (unsigned long)table20;
    slots[9] = (unsigned long)table24;
    slots[17] = (unsigned long)table44;
    slots[25] = (unsigned long)table64;
    slots[33] = (unsigned long)table84;
    slots[41] = (unsigned long)tableA4;
    slots[49] = (unsigned long)tableC4;
    slots[76] = (unsigned long)table130;
    value = 0;
    enabled = 0;
    setName(String("HopperBin"));
}
