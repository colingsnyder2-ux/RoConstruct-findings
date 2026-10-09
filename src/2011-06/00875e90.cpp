// roc 2011-06 00875e90  unit: CXTPDockingPaneManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875e90
//
// 00875e90  8d41ac               lea eax, [ecx - 0x54]
// 00875e93  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPaneManager@ns_ROCX0000f1@@QAEHXZ)

namespace ns_ROCX0000f1 {
struct CXTPDockingPaneManager {
    int f();
};

int CXTPDockingPaneManager::f() {
    return (int)(this - 0x54);
}
}
