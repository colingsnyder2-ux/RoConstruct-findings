// roc 2007-03 0041dbb0  unit: seg_00410000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041dbb0
//
// 0041dbb0  56                   push esi
// 0041dbb1  8bf1                 mov esi, ecx
// 0041dbb3  e8386c1400           call 0x5647f0
// 0041dbb8  84c0                 test al, al
// 0041dbba  7412                 je 0x41dbce
// 0041dbbc  8bce                 mov ecx, esi
// 0041dbbe  e8ddfcffff           call 0x41d8a0
// 0041dbc3  85c0                 test eax, eax
// 0041dbc5  7407                 je 0x41dbce
// 0041dbc7  b801000000           mov eax, 1
// 0041dbcc  5e                   pop esi
// 0041dbcd  c3                   ret 
// 0041dbce  33c0                 xor eax, eax
// 0041dbd0  5e                   pop esi
// 0041dbd1  c3                   ret 
// copied from an identical function in another client (function ?check@InsertDecal@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
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
