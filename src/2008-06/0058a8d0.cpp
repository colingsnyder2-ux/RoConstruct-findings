// from server: 100% by king_originala
// roc 2008-06 0058a8d0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058a8d0
//
// 0058a8d0  6aff                 push -1
// 0058a8d2  6828167d00           push 0x7d1628
// 0058a8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0058a8dd  50                   push eax
// 0058a8de  64892500000000       mov dword ptr fs:[0], esp
// 0058a8e5  51                   push ecx
// 0058a8e6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058a8ea  56                   push esi
// 0058a8eb  8bf1                 mov esi, ecx
// 0058a8ed  50                   push eax
// 0058a8ee  89742408             mov dword ptr [esp + 8], esi
// 0058a8f2  e8d9c8ffff           call 0x5871d0
// 0058a8f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058a8ff  e89cf9ffff           call 0x58a2a0
// 0058a904  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058a908  89461c               mov dword ptr [esi + 0x1c], eax
// 0058a90b  c706fc178300         mov dword ptr [esi], 0x8317fc
// 0058a911  c74610ec178300       mov dword ptr [esi + 0x10], 0x8317ec
// 0058a918  c74614e4178300       mov dword ptr [esi + 0x14], 0x8317e4
// 0058a91f  c74620dc178300       mov dword ptr [esi + 0x20], 0x8317dc
// 0058a926  c74624cc178300       mov dword ptr [esi + 0x24], 0x8317cc
// 0058a92d  c74644bc178300       mov dword ptr [esi + 0x44], 0x8317bc
// 0058a934  c74664ac178300       mov dword ptr [esi + 0x64], 0x8317ac
// 0058a93b  c786840000009c178300 mov dword ptr [esi + 0x84], 0x83179c
// 0058a945  c786a40000008c178300 mov dword ptr [esi + 0xa4], 0x83178c
// 0058a94f  c786c40000007c178300 mov dword ptr [esi + 0xc4], 0x83177c
// 0058a959  8bc6                 mov eax, esi
// 0058a95b  5e                   pop esi
// 0058a95c  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a963  83c410               add esp, 0x10
// 0058a966  c20400               ret 4

extern void* __cdecl getDescriptor();

struct Base {
    unsigned int words[7];

    Base(int argument);
    ~Base();
};

struct S : Base {
    void* descriptor;
    unsigned int slots[42];

    S(int argument);
};

S::S(int argument)
    : Base(argument), descriptor(getDescriptor())
{
    words[0] = 0x008317fc;
    words[4] = 0x008317ec;
    words[5] = 0x008317e4;
    slots[0] = 0x008317dc;
    slots[1] = 0x008317cc;
    slots[9] = 0x008317bc;
    slots[17] = 0x008317ac;
    slots[25] = 0x0083179c;
    slots[33] = 0x0083178c;
    slots[41] = 0x0083177c;
}
