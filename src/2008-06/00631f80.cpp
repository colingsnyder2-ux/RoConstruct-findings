// from server: 100% by tester
// roc 2008-06 00631f80  unit: RBX::VBodyForce::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631f80
//
// 00631f80  6aff                 push -1
// 00631f82  68889d7d00           push 0x7d9d88
// 00631f87  64a100000000         mov eax, dword ptr fs:[0]
// 00631f8d  50                   push eax
// 00631f8e  64892500000000       mov dword ptr fs:[0], esp
// 00631f95  51                   push ecx
// 00631f96  8b442414             mov eax, dword ptr [esp + 0x14]
// 00631f9a  56                   push esi
// 00631f9b  8bf1                 mov esi, ecx
// 00631f9d  50                   push eax
// 00631f9e  89742408             mov dword ptr [esp + 8], esi
// 00631fa2  e859d9ffff           call 0x62f900
// 00631fa7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00631faf  e8ccefffff           call 0x630f80
// 00631fb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631fb8  89461c               mov dword ptr [esi + 0x1c], eax
// 00631fbb  c706ac798400         mov dword ptr [esi], 0x8479ac
// 00631fc1  c746109c798400       mov dword ptr [esi + 0x10], 0x84799c
// 00631fc8  c7461494798400       mov dword ptr [esi + 0x14], 0x847994
// 00631fcf  c746208c798400       mov dword ptr [esi + 0x20], 0x84798c
// 00631fd6  c746247c798400       mov dword ptr [esi + 0x24], 0x84797c
// 00631fdd  c746446c798400       mov dword ptr [esi + 0x44], 0x84796c
// 00631fe4  c746645c798400       mov dword ptr [esi + 0x64], 0x84795c
// 00631feb  c786840000004c798400 mov dword ptr [esi + 0x84], 0x84794c
// 00631ff5  c786a40000003c798400 mov dword ptr [esi + 0xa4], 0x84793c
// 00631fff  c786c40000002c798400 mov dword ptr [esi + 0xc4], 0x84792c
// 00632009  c7863001000010798400 mov dword ptr [esi + 0x130], 0x847910
// 00632013  c7863801000004798400 mov dword ptr [esi + 0x138], 0x847904
// 0063201d  8bc6                 mov eax, esi
// 0063201f  5e                   pop esi
// 00632020  64890d00000000       mov dword ptr fs:[0], ecx
// 00632027  83c410               add esp, 0x10
// 0063202a  c20400               ret 4

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
