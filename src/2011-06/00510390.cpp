// from server: 100% by atomic.potato
// roc 2011-06 00510390  unit: RBX::Network::ClientReplicator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00510390
//
// 00510390  e8cb96feff           call 0x4f9a60
// 00510395  b001                 mov al, 1
// 00510397  c3                   ret 

struct S {
    void helper();
    bool func();
};

bool S::func() {
    helper();
    return true;
}
