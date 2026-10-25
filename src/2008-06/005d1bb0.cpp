// from server: 100% by king_originala
// roc 2008-06 005d1bb0  unit: RBX::VBackpack::?$FactoryProduct  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1bb0
//
// 005d1bb0  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1bb6  c7013cbb8300         mov dword ptr [ecx], 0x83bb3c
// 005d1bbc  c741102cbb8300       mov dword ptr [ecx + 0x10], 0x83bb2c
// 005d1bc3  c7411424bb8300       mov dword ptr [ecx + 0x14], 0x83bb24
// 005d1bca  c741201cbb8300       mov dword ptr [ecx + 0x20], 0x83bb1c
// 005d1bd1  c741240cbb8300       mov dword ptr [ecx + 0x24], 0x83bb0c
// 005d1bd8  c74144fcba8300       mov dword ptr [ecx + 0x44], 0x83bafc
// 005d1bdf  c74164ecba8300       mov dword ptr [ecx + 0x64], 0x83baec
// 005d1be6  c78184000000dcba8300 mov dword ptr [ecx + 0x84], 0x83badc
// 005d1bf0  c781a4000000ccba8300 mov dword ptr [ecx + 0xa4], 0x83bacc
// 005d1bfa  c781c4000000bcba8300 mov dword ptr [ecx + 0xc4], 0x83babc
// 005d1c04  c78130010000b0ba8300 mov dword ptr [ecx + 0x130], 0x83bab0
// 005d1c0e  c781a0010000a0ba8300 mov dword ptr [ecx + 0x1a0], 0x83baa0
// 005d1c18  c781c001000094ba8300 mov dword ptr [ecx + 0x1c0], 0x83ba94
// 005d1c22  c781cc0100007cba8300 mov dword ptr [ecx + 0x1cc], 0x83ba7c
// 005d1c2c  8b5004               mov edx, dword ptr [eax + 4]
// 005d1c2f  c7840a3401000070ba8300 mov dword ptr [edx + ecx + 0x134], 0x83ba70
// 005d1c3a  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1c40  8b5008               mov edx, dword ptr [eax + 8]
// 005d1c43  c7840a3401000068ba8300 mov dword ptr [edx + ecx + 0x134], 0x83ba68
// 005d1c4e  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1c54  8b500c               mov edx, dword ptr [eax + 0xc]
// 005d1c57  c7840a340100004cba8300 mov dword ptr [edx + ecx + 0x134], 0x83ba4c
// 005d1c62  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1c68  8b4004               mov eax, dword ptr [eax + 4]
// 005d1c6b  8d9048fdffff         lea edx, [eax - 0x2b8]
// 005d1c71  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 005d1c78  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1c7e  8b4008               mov eax, dword ptr [eax + 8]
// 005d1c81  8d9040fdffff         lea edx, [eax - 0x2c0]
// 005d1c87  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 005d1c8e  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005d1c94  8b400c               mov eax, dword ptr [eax + 0xc]
// 005d1c97  8d9038fdffff         lea edx, [eax - 0x2c8]
// 005d1c9d  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 005d1ca4  e9c79cfcff           jmp 0x59b970

struct S {
    void f();
    void cleanup();
};

void S::f() {
    char *p = (char *)this;
    int *table = *(int **)(p + 0x134);

    *(int *)(p + 0x000) = 0x83bb3c;
    *(int *)(p + 0x010) = 0x83bb2c;
    *(int *)(p + 0x014) = 0x83bb24;
    *(int *)(p + 0x020) = 0x83bb1c;
    *(int *)(p + 0x024) = 0x83bb0c;
    *(int *)(p + 0x044) = 0x83bafc;
    *(int *)(p + 0x064) = 0x83baec;
    *(int *)(p + 0x084) = 0x83badc;
    *(int *)(p + 0x0a4) = 0x83bacc;
    *(int *)(p + 0x0c4) = 0x83babc;
    *(int *)(p + 0x130) = 0x83bab0;
    *(int *)(p + 0x1a0) = 0x83baa0;
    *(int *)(p + 0x1c0) = 0x83ba94;
    *(int *)(p + 0x1cc) = 0x83ba7c;

    *(int *)(p + table[1] + 0x134) = 0x83ba70;
    table = *(int **)(p + 0x134);
    *(int *)(p + table[2] + 0x134) = 0x83ba68;
    table = *(int **)(p + 0x134);
    *(int *)(p + table[3] + 0x134) = 0x83ba4c;

    table = *(int **)(p + 0x134);
    int offset = table[1];
    *(int *)(p + offset + 0x130) = offset - 0x2b8;
    table = *(int **)(p + 0x134);
    offset = table[2];
    *(int *)(p + offset + 0x130) = offset - 0x2c0;
    table = *(int **)(p + 0x134);
    offset = table[3];
    *(int *)(p + offset + 0x130) = offset - 0x2c8;

    cleanup();
}
