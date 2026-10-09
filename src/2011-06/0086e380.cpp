// roc 2011-06 0086e380  unit: CXTPDockingPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e380
//
// 0086e380  8d41a8               lea eax, [ecx - 0x58]
// 0086e383  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPane@ns_ROCX000030@@QAEHXZ)

namespace ns_ROCX000030 {
struct CXTPDockingPane {
    int f();
};

int CXTPDockingPane::f() {
    return (int)(this - 0x58);
}
}
