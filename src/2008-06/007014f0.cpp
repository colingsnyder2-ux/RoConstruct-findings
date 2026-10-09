// roc 2008-06 007014f0  unit: CXTPDockingPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007014f0
//
// 007014f0  8d41a8               lea eax, [ecx - 0x58]
// 007014f3  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPane@ns_ROCX00001e@@QAEHXZ)

namespace ns_ROCX00001e {
struct CXTPDockingPane {
    int f();
};

int CXTPDockingPane::f() {
    return (int)(this - 0x58);
}
}
