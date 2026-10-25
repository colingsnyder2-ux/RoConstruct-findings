// from server: 100% by king_originala
// roc 2008-06 00631950  unit: RBX::VBodyPosition::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631950
//
// 00631950  6aff                 push -1
// 00631952  68289d7d00           push 0x7d9d28
// 00631957  64a100000000         mov eax, dword ptr fs:[0]
// 0063195d  50                   push eax
// 0063195e  64892500000000       mov dword ptr fs:[0], esp
// 00631965  51                   push ecx
// 00631966  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063196a  56                   push esi
// 0063196b  8bf1                 mov esi, ecx
// 0063196d  50                   push eax
// 0063196e  89742408             mov dword ptr [esp + 8], esi
// 00631972  e809deffff           call 0x62f780
// 00631977  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063197f  e86cf1ffff           call 0x630af0
// 00631984  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631988  89461c               mov dword ptr [esi + 0x1c], eax
// 0063198b  c706dc768400         mov dword ptr [esi], 0x8476dc
// 00631991  c74610cc768400       mov dword ptr [esi + 0x10], 0x8476cc
// 00631998  c74614c4768400       mov dword ptr [esi + 0x14], 0x8476c4
// 0063199f  c74620bc768400       mov dword ptr [esi + 0x20], 0x8476bc
// 006319a6  c74624ac768400       mov dword ptr [esi + 0x24], 0x8476ac
// 006319ad  c746449c768400       mov dword ptr [esi + 0x44], 0x84769c
// 006319b4  c746648c768400       mov dword ptr [esi + 0x64], 0x84768c
// 006319bb  c786840000007c768400 mov dword ptr [esi + 0x84], 0x84767c
// 006319c5  c786a40000006c768400 mov dword ptr [esi + 0xa4], 0x84766c
// 006319cf  c786c40000005c768400 mov dword ptr [esi + 0xc4], 0x84765c
// 006319d9  c7863001000040768400 mov dword ptr [esi + 0x130], 0x847640
// 006319e3  c7863801000034768400 mov dword ptr [esi + 0x138], 0x847634
// 006319ed  8bc6                 mov eax, esi
// 006319ef  5e                   pop esi
// 006319f0  64890d00000000       mov dword ptr fs:[0], ecx
// 006319f7  83c410               add esp, 0x10
// 006319fa  c20400               ret 4

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
