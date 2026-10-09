// roc 2009-06 00779e00  unit: CXTPDockingPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779e00
//
// 00779e00  8d41a8               lea eax, [ecx - 0x58]
// 00779e03  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPane@ns_ROCX000017@@QAEHXZ)

namespace ns_ROCX000017 {
struct CXTPDockingPane {
    int f();
};

int CXTPDockingPane::f() {
    return (int)(this - 0x58);
}
}
