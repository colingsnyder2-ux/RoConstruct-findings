// from server: 100% by king_originala
// roc 2008-06 00631760  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631760
//
// 00631760  6aff                 push -1
// 00631762  68e89c7d00           push 0x7d9ce8
// 00631767  64a100000000         mov eax, dword ptr fs:[0]
// 0063176d  50                   push eax
// 0063176e  64892500000000       mov dword ptr fs:[0], esp
// 00631775  51                   push ecx
// 00631776  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063177a  56                   push esi
// 0063177b  8bf1                 mov esi, ecx
// 0063177d  50                   push eax
// 0063177e  89742408             mov dword ptr [esp + 8], esi
// 00631782  e8f9deffff           call 0x62f680
// 00631787  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063178f  e80cf7ffff           call 0x630ea0
// 00631794  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631798  89461c               mov dword ptr [esi + 0x1c], eax
// 0063179b  c706fc748400         mov dword ptr [esi], 0x8474fc
// 006317a1  c74610ec748400       mov dword ptr [esi + 0x10], 0x8474ec
// 006317a8  c74614e4748400       mov dword ptr [esi + 0x14], 0x8474e4
// 006317af  c74620dc748400       mov dword ptr [esi + 0x20], 0x8474dc
// 006317b6  c74624cc748400       mov dword ptr [esi + 0x24], 0x8474cc
// 006317bd  c74644bc748400       mov dword ptr [esi + 0x44], 0x8474bc
// 006317c4  c74664ac748400       mov dword ptr [esi + 0x64], 0x8474ac
// 006317cb  c786840000009c748400 mov dword ptr [esi + 0x84], 0x84749c
// 006317d5  c786a40000008c748400 mov dword ptr [esi + 0xa4], 0x84748c
// 006317df  c786c40000007c748400 mov dword ptr [esi + 0xc4], 0x84747c
// 006317e9  c7863001000060748400 mov dword ptr [esi + 0x130], 0x847460
// 006317f3  c7863801000054748400 mov dword ptr [esi + 0x138], 0x847454
// 006317fd  8bc6                 mov eax, esi
// 006317ff  5e                   pop esi
// 00631800  64890d00000000       mov dword ptr fs:[0], ecx
// 00631807  83c410               add esp, 0x10
// 0063180a  c20400               ret 4

unsigned long __cdecl getDescriptor();

extern const unsigned long table_8474FC[];
extern const unsigned long table_8474EC[];
extern const unsigned long table_8474E4[];
extern const unsigned long table_8474DC[];
extern const unsigned long table_8474CC[];
extern const unsigned long table_8474BC[];
extern const unsigned long table_8474AC[];
extern const unsigned long table_84749C[];
extern const unsigned long table_84748C[];
extern const unsigned long table_84747C[];
extern const unsigned long table_847460[];
extern const unsigned long table_847454[];

struct Base {
    unsigned long data[0x13C / 4];
    Base(void*);
    ~Base();
};

struct S : Base {
    S(void*);
};

S::S(void* p) : Base(p)
{
    data[0x1C / 4] = getDescriptor();
    data[0x00 / 4] = reinterpret_cast<unsigned long>(table_8474FC);
    data[0x10 / 4] = reinterpret_cast<unsigned long>(table_8474EC);
    data[0x14 / 4] = reinterpret_cast<unsigned long>(table_8474E4);
    data[0x20 / 4] = reinterpret_cast<unsigned long>(table_8474DC);
    data[0x24 / 4] = reinterpret_cast<unsigned long>(table_8474CC);
    data[0x44 / 4] = reinterpret_cast<unsigned long>(table_8474BC);
    data[0x64 / 4] = reinterpret_cast<unsigned long>(table_8474AC);
    data[0x84 / 4] = reinterpret_cast<unsigned long>(table_84749C);
    data[0xA4 / 4] = reinterpret_cast<unsigned long>(table_84748C);
    data[0xC4 / 4] = reinterpret_cast<unsigned long>(table_84747C);
    data[0x130 / 4] = reinterpret_cast<unsigned long>(table_847460);
    data[0x138 / 4] = reinterpret_cast<unsigned long>(table_847454);
}
