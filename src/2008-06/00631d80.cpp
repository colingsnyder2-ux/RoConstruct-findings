// from server: 100% by tester
// roc 2008-06 00631d80  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631d80
//
// 00631d80  6aff                 push -1
// 00631d82  68689d7d00           push 0x7d9d68
// 00631d87  64a100000000         mov eax, dword ptr fs:[0]
// 00631d8d  50                   push eax
// 00631d8e  64892500000000       mov dword ptr fs:[0], esp
// 00631d95  51                   push ecx
// 00631d96  8b442414             mov eax, dword ptr [esp + 0x14]
// 00631d9a  56                   push esi
// 00631d9b  8bf1                 mov esi, ecx
// 00631d9d  50                   push eax
// 00631d9e  89742408             mov dword ptr [esp + 8], esi
// 00631da2  e8d9daffff           call 0x62f880
// 00631da7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00631daf  e85cf1ffff           call 0x630f10
// 00631db4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631db8  89461c               mov dword ptr [esi + 0x1c], eax
// 00631dbb  c706bc788400         mov dword ptr [esi], 0x8478bc
// 00631dc1  c74610ac788400       mov dword ptr [esi + 0x10], 0x8478ac
// 00631dc8  c74614a4788400       mov dword ptr [esi + 0x14], 0x8478a4
// 00631dcf  c746209c788400       mov dword ptr [esi + 0x20], 0x84789c
// 00631dd6  c746248c788400       mov dword ptr [esi + 0x24], 0x84788c
// 00631ddd  c746447c788400       mov dword ptr [esi + 0x44], 0x84787c
// 00631de4  c746646c788400       mov dword ptr [esi + 0x64], 0x84786c
// 00631deb  c786840000005c788400 mov dword ptr [esi + 0x84], 0x84785c
// 00631df5  c786a40000004c788400 mov dword ptr [esi + 0xa4], 0x84784c
// 00631dff  c786c40000003c788400 mov dword ptr [esi + 0xc4], 0x84783c
// 00631e09  c7863001000020788400 mov dword ptr [esi + 0x130], 0x847820
// 00631e13  c7863801000014788400 mov dword ptr [esi + 0x138], 0x847814
// 00631e1d  8bc6                 mov eax, esi
// 00631e1f  5e                   pop esi
// 00631e20  64890d00000000       mov dword ptr fs:[0], ecx
// 00631e27  83c410               add esp, 0x10
// 00631e2a  c20400               ret 4

unsigned int __cdecl getName();

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
    unsigned int data[79];
    Base(void*);
    ~Base();
};

struct S : Base {
    S(void*);
};

S::S(void* argument) : Base(argument)
{
    data[7] = getName();
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
}
