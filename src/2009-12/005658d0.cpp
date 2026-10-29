// roc 2009-12 005658d0  unit: RakPeer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005658d0
//
// 005658d0  8a4104               mov al, byte ptr [ecx + 4]
// 005658d3  84c0                 test al, al
// 005658d5  7407                 je 0x5658de
// 005658d7  c681150b000000       mov byte ptr [ecx + 0xb15], 0
// 005658de  c3                   ret 
// copied from an identical function in another client (function ?f@RakPeer@ns_ROCX000000@@QAEDXZ)

namespace ns_ROCX000000 {
// from server: 100% by why2
struct RakPeer {
    char pad[4];
    char flag;
    char pad2[0xb15 - 5];
    char field_b15;
    char f();
};

char RakPeer::f() {
    char al = flag;
    if (al != 0) {
        field_b15 = 0;
    }
    return al;
}
}
