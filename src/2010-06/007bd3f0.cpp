// from server: 50% by colin
// roc 2010-06 007bd3f0  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd3f0
//
// 007bd3f0  83c008               add eax, 8
// 007bd3f3  c3                   ret 

struct CXTPCommandBar {
    int f();
};

int CXTPCommandBar::f() {
    return *(int*)((char*)this + 8);
}
