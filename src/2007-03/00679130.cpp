// roc 2007-03 00679130  unit: seg_00670000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679130
//
// 00679130  8d41a8               lea eax, [ecx - 0x58]
// 00679133  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPane@ns_ROCX00000e@@QAEHXZ)

namespace ns_ROCX00000e {
struct CXTPDockingPane {
    int f();
};

int CXTPDockingPane::f() {
    return (int)(this - 0x58);
}
}
