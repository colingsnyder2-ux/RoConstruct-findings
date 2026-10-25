// from server: 100% by king_originala
// roc 2008-06 0049edb0  unit: Exposer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049edb0
//
// 0049edb0  c701442e8200         mov dword ptr [ecx], 0x822e44
// 0049edb6  c74110382e8200       mov dword ptr [ecx + 0x10], 0x822e38
// 0049edbd  c74114302e8200       mov dword ptr [ecx + 0x14], 0x822e30
// 0049edc4  c74120282e8200       mov dword ptr [ecx + 0x20], 0x822e28
// 0049edcb  c74124182e8200       mov dword ptr [ecx + 0x24], 0x822e18
// 0049edd2  c74144082e8200       mov dword ptr [ecx + 0x44], 0x822e08
// 0049edd9  c74164f82d8200       mov dword ptr [ecx + 0x64], 0x822df8
// 0049ede0  c78184000000e82d8200 mov dword ptr [ecx + 0x84], 0x822de8
// 0049edea  c781a4000000d82d8200 mov dword ptr [ecx + 0xa4], 0x822dd8
// 0049edf4  c781c4000000c82d8200 mov dword ptr [ecx + 0xc4], 0x822dc8
// 0049edfe  c78130010000982d8200 mov dword ptr [ecx + 0x130], 0x822d98
// 0049ee08  c781340100008c2d8200 mov dword ptr [ecx + 0x134], 0x822d8c
// 0049ee12  e919da0000           jmp 0x4ac830

struct Exposer
{
    unsigned long data[78];
    void reset();
    void finish();
};

void Exposer::reset()
{
    data[0]  = 0x00822e44;
    data[4]  = 0x00822e38;
    data[5]  = 0x00822e30;
    data[8]  = 0x00822e28;
    data[9]  = 0x00822e18;
    data[17] = 0x00822e08;
    data[25] = 0x00822df8;
    data[33] = 0x00822de8;
    data[41] = 0x00822dd8;
    data[49] = 0x00822dc8;
    data[76] = 0x00822d98;
    data[77] = 0x00822d8c;
    finish();
}
