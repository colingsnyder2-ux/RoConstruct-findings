// from server: 100% by colin
// roc 2007-08 0041ce70  unit: InsertDecal  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ce70
//
// 0041ce70  56                   push esi
// 0041ce71  8bf1                 mov esi, ecx
// 0041ce73  e8e86d1400           call 0x563c60
// 0041ce78  84c0                 test al, al
// 0041ce7a  7412                 je 0x41ce8e
// 0041ce7c  8bce                 mov ecx, esi
// 0041ce7e  e8ddfcffff           call 0x41cb60
// 0041ce83  85c0                 test eax, eax
// 0041ce85  7407                 je 0x41ce8e
// 0041ce87  b801000000           mov eax, 1
// 0041ce8c  5e                   pop esi
// 0041ce8d  c3                   ret 
// 0041ce8e  33c0                 xor eax, eax
// 0041ce90  5e                   pop esi
// 0041ce91  c3                   ret 

struct InsertDecal {
    bool sub_563C60();
    int sub_41CB60();
    int check();
};

int InsertDecal::check() {
    if (sub_563C60()) {
        if (sub_41CB60() != 0) {
            return 1;
        }
    }
    return 0;
}
