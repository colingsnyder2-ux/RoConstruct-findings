// roc 2007-03 0065a1e0  unit: seg_00650000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a1e0
//
// 0065a1e0  8d41ac               lea eax, [ecx - 0x54]
// 0065a1e3  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPaneManager@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct CXTPDockingPaneManager {
    int f();
};

int CXTPDockingPaneManager::f() {
    return (int)(this - 0x54);
}
}
