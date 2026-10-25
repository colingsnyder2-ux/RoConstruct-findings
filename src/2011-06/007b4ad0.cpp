// from server: 100% by atomic.potato
// roc 2011-06 007b4ad0  unit: RBX::TreeStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b4ad0
//
// 007b4ad0  51                   push ecx
// 007b4ad1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b4ad5  e826d2feff           call 0x7a1d00
// 007b4ada  c20400               ret 4

struct IStage {};
struct IPipelined {
    void removeFromStage(IStage*);
};
struct S : IStage {
    void f(IPipelined* p);
};

void S::f(IPipelined* p) {
    p->removeFromStage(this);
}
