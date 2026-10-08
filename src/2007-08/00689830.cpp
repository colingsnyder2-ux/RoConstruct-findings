// from server: 100% by colin
// roc 2007-08 00689830  unit: CXTPDockingPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689830
//
// 00689830  8d41a8               lea eax, [ecx - 0x58]
// 00689833  c3                   ret 

struct CXTPDockingPane {
    int f();
};

int CXTPDockingPane::f() {
    return (int)(this - 0x58);
}
