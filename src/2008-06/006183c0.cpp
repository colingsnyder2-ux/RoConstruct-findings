// from server: 100% by king_originala
// roc 2008-06 006183c0  unit: RBX::Flag  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006183c0
//
// 006183c0  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 006183c6  c7014c3d8400         mov dword ptr [ecx], 0x843d4c
// 006183cc  c741103c3d8400       mov dword ptr [ecx + 0x10], 0x843d3c
// 006183d3  c74114343d8400       mov dword ptr [ecx + 0x14], 0x843d34
// 006183da  c741202c3d8400       mov dword ptr [ecx + 0x20], 0x843d2c
// 006183e1  c741241c3d8400       mov dword ptr [ecx + 0x24], 0x843d1c
// 006183e8  c741440c3d8400       mov dword ptr [ecx + 0x44], 0x843d0c
// 006183ef  c74164fc3c8400       mov dword ptr [ecx + 0x64], 0x843cfc
// 006183f6  c78184000000ec3c8400 mov dword ptr [ecx + 0x84], 0x843cec
// 00618400  c781a4000000dc3c8400 mov dword ptr [ecx + 0xa4], 0x843cdc
// 0061840a  c781c4000000cc3c8400 mov dword ptr [ecx + 0xc4], 0x843ccc
// 00618414  c78130010000c43c8400 mov dword ptr [ecx + 0x130], 0x843cc4
// 0061841e  c781a0010000bc3c8400 mov dword ptr [ecx + 0x1a0], 0x843cbc
// 00618428  c781b0010000a43c8400 mov dword ptr [ecx + 0x1b0], 0x843ca4
// 00618432  8b5004               mov edx, dword ptr [eax + 4]
// 00618435  c7840ac00100009c3c8400 mov dword ptr [edx + ecx + 0x1c0], 0x843c9c
// 00618440  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 00618446  8b4004               mov eax, dword ptr [eax + 4]
// 00618449  8d9054ffffff         lea edx, [eax - 0xac]
// 0061844f  899408bc010000       mov dword ptr [eax + ecx + 0x1bc], edx
// 00618456  e95560feff           jmp 0x5fe4b0

struct S {
    unsigned int data[112];
    int* table;
    void f();
    void finish();
};

void S::f()
{
    int* t = table;
    data[0x00 / 4] = 0x843d4c;
    data[0x10 / 4] = 0x843d3c;
    data[0x14 / 4] = 0x843d34;
    data[0x20 / 4] = 0x843d2c;
    data[0x24 / 4] = 0x843d1c;
    data[0x44 / 4] = 0x843d0c;
    data[0x64 / 4] = 0x843cfc;
    data[0x84 / 4] = 0x843cec;
    data[0xa4 / 4] = 0x843cdc;
    data[0xc4 / 4] = 0x843ccc;
    data[0x130 / 4] = 0x843cc4;
    data[0x1a0 / 4] = 0x843cbc;
    data[0x1b0 / 4] = 0x843ca4;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x1c0 + t[1]) = 0x843c9c;
    int offset = table[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x1bc + offset) = offset - 0xac;
    finish();
}
