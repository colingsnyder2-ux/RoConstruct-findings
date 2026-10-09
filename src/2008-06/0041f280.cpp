// roc 2008-06 0041f280  unit: InsertDecal  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f280
//
// 0041f280  56                   push esi
// 0041f281  8bf1                 mov esi, ecx
// 0041f283  e8a8351600           call 0x582830
// 0041f288  84c0                 test al, al
// 0041f28a  7412                 je 0x41f29e
// 0041f28c  8bce                 mov ecx, esi
// 0041f28e  e8fdfcffff           call 0x41ef90
// 0041f293  85c0                 test eax, eax
// 0041f295  7407                 je 0x41f29e
// 0041f297  b801000000           mov eax, 1
// 0041f29c  5e                   pop esi
// 0041f29d  c3                   ret 
// 0041f29e  33c0                 xor eax, eax
// 0041f2a0  5e                   pop esi
// 0041f2a1  c3                   ret 
// copied from an identical function in another client (function ?check@InsertDecal@ns_ROCX000025@@QAEHXZ)

namespace ns_ROCX000025 {
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
}
