// from server: 100% by king_originala
// roc 2008-06 005835b0  unit: RBX::ModelInstance  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005835b0
//
// 005835b0  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005835b6  c7012c0c8300         mov dword ptr [ecx], 0x830c2c
// 005835bc  c741101c0c8300       mov dword ptr [ecx + 0x10], 0x830c1c
// 005835c3  c74114140c8300       mov dword ptr [ecx + 0x14], 0x830c14
// 005835ca  c741200c0c8300       mov dword ptr [ecx + 0x20], 0x830c0c
// 005835d1  c74124fc0b8300       mov dword ptr [ecx + 0x24], 0x830bfc
// 005835d8  c74144ec0b8300       mov dword ptr [ecx + 0x44], 0x830bec
// 005835df  c74164dc0b8300       mov dword ptr [ecx + 0x64], 0x830bdc
// 005835e6  c78184000000cc0b8300 mov dword ptr [ecx + 0x84], 0x830bcc
// 005835f0  c781a4000000bc0b8300 mov dword ptr [ecx + 0xa4], 0x830bbc
// 005835fa  c781c4000000ac0b8300 mov dword ptr [ecx + 0xc4], 0x830bac
// 00583604  c78130010000a00b8300 mov dword ptr [ecx + 0x130], 0x830ba0
// 0058360e  8b5004               mov edx, dword ptr [eax + 4]
// 00583611  c7840a34010000940b8300 mov dword ptr [edx + ecx + 0x134], 0x830b94
// 0058361c  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 00583622  8b5008               mov edx, dword ptr [eax + 8]
// 00583625  c7840a340100008c0b8300 mov dword ptr [edx + ecx + 0x134], 0x830b8c
// 00583630  e9eb590800           jmp 0x609020

struct S {
    unsigned long words[77];
    int* table;

    void f();
    void cleanup();
};

void S::f()
{
    int* p = table;
    words[0] = 0x830c2c;
    words[4] = 0x830c1c;
    words[5] = 0x830c14;
    words[8] = 0x830c0c;
    words[9] = 0x830bfc;
    words[17] = 0x830bec;
    words[25] = 0x830bdc;
    words[33] = 0x830bcc;
    words[41] = 0x830bbc;
    words[49] = 0x830bac;
    words[76] = 0x830ba0;
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + p[1] + 0x134) = 0x830b94;
    p = table;
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + p[2] + 0x134) = 0x830b8c;
    cleanup();
}
