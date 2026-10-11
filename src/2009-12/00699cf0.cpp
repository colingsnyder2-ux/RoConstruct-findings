// from server: 80% by atomic.potato
// roc 2009-12 00699cf0  unit: RBX::Workspace  size: 7 bytes
//
// 00699cf0  8d81e0feffff         lea eax, [ecx - 0x120]
// 00699cf6  c3                   ret 

struct S {
    int f();
};

int S::f() {
    return (int)(*((char*)this - 0x120));
}
