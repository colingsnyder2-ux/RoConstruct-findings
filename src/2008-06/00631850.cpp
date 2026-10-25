// from server: 100% by tester
// roc 2008-06 00631850  unit: RBX::VBodyGyro::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631850
//
// 00631850  6aff                 push -1
// 00631852  68089d7d00           push 0x7d9d08
// 00631857  64a100000000         mov eax, dword ptr fs:[0]
// 0063185d  50                   push eax
// 0063185e  64892500000000       mov dword ptr fs:[0], esp
// 00631865  51                   push ecx
// 00631866  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063186a  56                   push esi
// 0063186b  8bf1                 mov esi, ecx
// 0063186d  50                   push eax
// 0063186e  89742408             mov dword ptr [esp + 8], esi
// 00631872  e889deffff           call 0x62f700
// 00631877  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063187f  e8fcf1ffff           call 0x630a80
// 00631884  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631888  89461c               mov dword ptr [esi + 0x1c], eax
// 0063188b  c706ec758400         mov dword ptr [esi], 0x8475ec
// 00631891  c74610dc758400       mov dword ptr [esi + 0x10], 0x8475dc
// 00631898  c74614d4758400       mov dword ptr [esi + 0x14], 0x8475d4
// 0063189f  c74620cc758400       mov dword ptr [esi + 0x20], 0x8475cc
// 006318a6  c74624bc758400       mov dword ptr [esi + 0x24], 0x8475bc
// 006318ad  c74644ac758400       mov dword ptr [esi + 0x44], 0x8475ac
// 006318b4  c746649c758400       mov dword ptr [esi + 0x64], 0x84759c
// 006318bb  c786840000008c758400 mov dword ptr [esi + 0x84], 0x84758c
// 006318c5  c786a40000007c758400 mov dword ptr [esi + 0xa4], 0x84757c
// 006318cf  c786c40000006c758400 mov dword ptr [esi + 0xc4], 0x84756c
// 006318d9  c7863001000050758400 mov dword ptr [esi + 0x130], 0x847550
// 006318e3  c7863801000044758400 mov dword ptr [esi + 0x138], 0x847544
// 006318ed  8bc6                 mov eax, esi
// 006318ef  5e                   pop esi
// 006318f0  64890d00000000       mov dword ptr fs:[0], ecx
// 006318f7  83c410               add esp, 0x10
// 006318fa  c20400               ret 4

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
