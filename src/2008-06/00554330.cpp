// from server: 100% by king_originala
// roc 2008-06 00554330  unit: RBX::RenderBase::AggregateChunk  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554330
//
// 00554330  c6814802000001       mov byte ptr [ecx + 0x248], 1
// 00554337  81c164020000         add ecx, 0x264
// 0055433d  e9eed90900           jmp 0x5f1d30

struct Tail {
    void invoke();
};

struct S {
    char padding[0x248];
    unsigned char dirty;
    char gap[0x1B];
    Tail tail;
    void f();
};

void S::f()
{
    dirty = 1;
    tail.invoke();
}
