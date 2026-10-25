// from server: 100% by tester
// roc 2008-06 00631bd0  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631bd0
//
// 00631bd0  6aff                 push -1
// 00631bd2  68489d7d00           push 0x7d9d48
// 00631bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00631bdd  50                   push eax
// 00631bde  64892500000000       mov dword ptr fs:[0], esp
// 00631be5  51                   push ecx
// 00631be6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00631bea  56                   push esi
// 00631beb  8bf1                 mov esi, ecx
// 00631bed  50                   push eax
// 00631bee  89742408             mov dword ptr [esp + 8], esi
// 00631bf2  e809dcffff           call 0x62f800
// 00631bf7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00631bff  e8ecf3ffff           call 0x630ff0
// 00631c04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631c08  89461c               mov dword ptr [esi + 0x1c], eax
// 00631c0b  c706cc778400         mov dword ptr [esi], 0x8477cc
// 00631c11  c74610bc778400       mov dword ptr [esi + 0x10], 0x8477bc
// 00631c18  c74614b4778400       mov dword ptr [esi + 0x14], 0x8477b4
// 00631c1f  c74620ac778400       mov dword ptr [esi + 0x20], 0x8477ac
// 00631c26  c746249c778400       mov dword ptr [esi + 0x24], 0x84779c
// 00631c2d  c746448c778400       mov dword ptr [esi + 0x44], 0x84778c
// 00631c34  c746647c778400       mov dword ptr [esi + 0x64], 0x84777c
// 00631c3b  c786840000006c778400 mov dword ptr [esi + 0x84], 0x84776c
// 00631c45  c786a40000005c778400 mov dword ptr [esi + 0xa4], 0x84775c
// 00631c4f  c786c40000004c778400 mov dword ptr [esi + 0xc4], 0x84774c
// 00631c59  c7863001000030778400 mov dword ptr [esi + 0x130], 0x847730
// 00631c63  c7863801000024778400 mov dword ptr [esi + 0x138], 0x847724
// 00631c6d  8bc6                 mov eax, esi
// 00631c6f  5e                   pop esi
// 00631c70  64890d00000000       mov dword ptr fs:[0], ecx
// 00631c77  83c410               add esp, 0x10
// 00631c7a  c20400               ret 4

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
