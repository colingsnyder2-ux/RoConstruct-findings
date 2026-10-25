// from server: 100% by king_originala
// roc 2008-06 006196b0  unit: RBX::Flag  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006196b0
//
// 006196b0  6aff                 push -1
// 006196b2  68b8917d00           push 0x7d91b8
// 006196b7  64a100000000         mov eax, dword ptr fs:[0]
// 006196bd  50                   push eax
// 006196be  64892500000000       mov dword ptr fs:[0], esp
// 006196c5  51                   push ecx
// 006196c6  837c241400           cmp dword ptr [esp + 0x14], 0
// 006196cb  56                   push esi
// 006196cc  8bf1                 mov esi, ecx
// 006196ce  89742404             mov dword ptr [esp + 4], esi
// 006196d2  740a                 je 0x6196de
// 006196d4  c786c0010000e03d8400 mov dword ptr [esi + 0x1c0], 0x843de0
// 006196de  6a00                 push 0
// 006196e0  e87bedffff           call 0x618460
// 006196e5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006196ed  e88ea1faff           call 0x5c3880
// 006196f2  89461c               mov dword ptr [esi + 0x1c], eax
// 006196f5  8b86c0010000         mov eax, dword ptr [esi + 0x1c0]
// 006196fb  c7063c408400         mov dword ptr [esi], 0x84403c
// 00619701  c7461030408400       mov dword ptr [esi + 0x10], 0x844030
// 00619708  c7461428408400       mov dword ptr [esi + 0x14], 0x844028
// 0061970f  c7462020408400       mov dword ptr [esi + 0x20], 0x844020
// 00619716  c7462410408400       mov dword ptr [esi + 0x24], 0x844010
// 0061971d  c7464400408400       mov dword ptr [esi + 0x44], 0x844000
// 00619724  c74664f03f8400       mov dword ptr [esi + 0x64], 0x843ff0
// 0061972b  c78684000000e03f8400 mov dword ptr [esi + 0x84], 0x843fe0
// 00619735  c786a4000000d03f8400 mov dword ptr [esi + 0xa4], 0x843fd0
// 0061973f  c786c4000000c03f8400 mov dword ptr [esi + 0xc4], 0x843fc0
// 00619749  c78630010000b83f8400 mov dword ptr [esi + 0x130], 0x843fb8
// 00619753  c786a0010000b03f8400 mov dword ptr [esi + 0x1a0], 0x843fb0
// 0061975d  c786b0010000983f8400 mov dword ptr [esi + 0x1b0], 0x843f98
// 00619767  8b4804               mov ecx, dword ptr [eax + 4]
// 0061976a  c78431c0010000903f8400 mov dword ptr [ecx + esi + 0x1c0], 0x843f90
// 00619775  8b96c0010000         mov edx, dword ptr [esi + 0x1c0]
// 0061977b  8b4204               mov eax, dword ptr [edx + 4]
// 0061977e  8d8854ffffff         lea ecx, [eax - 0xac]
// 00619784  898c30bc010000       mov dword ptr [eax + esi + 0x1bc], ecx
// 0061978b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061978f  8bc6                 mov eax, esi
// 00619791  5e                   pop esi
// 00619792  64890d00000000       mov dword ptr fs:[0], ecx
// 00619799  83c410               add esp, 0x10
// 0061979c  c20400               ret 4

void* __cdecl getCreator();

struct Flag {
    unsigned long slots[0x71];
    Flag(int);
    ~Flag();
};

struct S : Flag {
    S(int complete);
};

S::S(int complete)
    : Flag(complete ? (slots[0x70] = 0x843de0, 0) : 0)
{
    slots[7] = reinterpret_cast<unsigned long>(getCreator());

    const int* table = reinterpret_cast<const int*>(slots[0x70]);
    slots[0] = 0x84403c;
    slots[4] = 0x844030;
    slots[5] = 0x844028;
    slots[8] = 0x844020;
    slots[9] = 0x844010;
    slots[0x11] = 0x844000;
    slots[0x19] = 0x843ff0;
    slots[0x21] = 0x843fe0;
    slots[0x29] = 0x843fd0;
    slots[0x31] = 0x843fc0;
    slots[0x4c] = 0x843fb8;
    slots[0x68] = 0x843fb0;
    slots[0x6c] = 0x843f98;

    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x1c0 + table[1]) = 0x843f90;

    int offset = reinterpret_cast<const int*>(slots[0x70])[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x1bc + offset) = offset - 0xac;
}
