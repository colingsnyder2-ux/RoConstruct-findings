// from server: 100% by king_originala
// roc 2008-06 0040cff0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cff0
//
// 0040cff0  6aff                 push -1
// 0040cff2  68c8d37b00           push 0x7bd3c8
// 0040cff7  64a100000000         mov eax, dword ptr fs:[0]
// 0040cffd  50                   push eax
// 0040cffe  64892500000000       mov dword ptr fs:[0], esp
// 0040d005  51                   push ecx
// 0040d006  56                   push esi
// 0040d007  8bf1                 mov esi, ecx
// 0040d009  89742404             mov dword ptr [esp + 4], esi
// 0040d00d  e80efcffff           call 0x40cc20
// 0040d012  33c0                 xor eax, eax
// 0040d014  8d8e34010000         lea ecx, [esi + 0x134]
// 0040d01a  89442410             mov dword ptr [esp + 0x10], eax
// 0040d01e  c70664cb8000         mov dword ptr [esi], 0x80cb64
// 0040d024  c7461058cb8000       mov dword ptr [esi + 0x10], 0x80cb58
// 0040d02b  c7461450cb8000       mov dword ptr [esi + 0x14], 0x80cb50
// 0040d032  c7462048cb8000       mov dword ptr [esi + 0x20], 0x80cb48
// 0040d039  c7462438cb8000       mov dword ptr [esi + 0x24], 0x80cb38
// 0040d040  c7464428cb8000       mov dword ptr [esi + 0x44], 0x80cb28
// 0040d047  c7466418cb8000       mov dword ptr [esi + 0x64], 0x80cb18
// 0040d04e  c7868400000008cb8000 mov dword ptr [esi + 0x84], 0x80cb08
// 0040d058  c786a4000000f8ca8000 mov dword ptr [esi + 0xa4], 0x80caf8
// 0040d062  c786c4000000e8ca8000 mov dword ptr [esi + 0xc4], 0x80cae8
// 0040d06c  c6863001000001       mov byte ptr [esi + 0x130], 1
// 0040d073  888631010000         mov byte ptr [esi + 0x131], al
// 0040d079  888632010000         mov byte ptr [esi + 0x132], al
// 0040d07f  ff1560248000         call dword ptr [0x802460]
// 0040d085  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d089  8bc6                 mov eax, esi
// 0040d08b  5e                   pop esi
// 0040d08c  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d093  83c410               add esp, 0x10
// 0040d096  c3                   ret 

struct Base {
    unsigned long slots[76];
    Base();
    ~Base();
};

struct S : Base {
    unsigned char enabled;
    unsigned char flag1;
    unsigned char flag2;
    unsigned char padding;
    char text[28];

    S();
};

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

typedef void (__thiscall *StringConstructor)(void *);
extern StringConstructor constructString;

S::S() : Base()
{
    slots[0]  = reinterpret_cast<unsigned long>(table0);
    slots[4]  = reinterpret_cast<unsigned long>(table10);
    slots[5]  = reinterpret_cast<unsigned long>(table14);
    slots[8]  = reinterpret_cast<unsigned long>(table20);
    slots[9]  = reinterpret_cast<unsigned long>(table24);
    slots[17] = reinterpret_cast<unsigned long>(table44);
    slots[25] = reinterpret_cast<unsigned long>(table64);
    slots[33] = reinterpret_cast<unsigned long>(table84);
    slots[41] = reinterpret_cast<unsigned long>(tableA4);
    slots[49] = reinterpret_cast<unsigned long>(tableC4);

    enabled = 1;
    flag1 = 0;
    flag2 = 0;

    constructString(text);
}
