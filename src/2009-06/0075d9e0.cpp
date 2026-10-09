// roc 2009-06 0075d9e0  unit: CXTPDockingPaneManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d9e0
//
// 0075d9e0  8d41ac               lea eax, [ecx - 0x54]
// 0075d9e3  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPaneManager@ns_ROCX0000e9@@QAEHXZ)

namespace ns_ROCX0000e9 {
struct CXTPDockingPaneManager {
    int f();
};

int CXTPDockingPaneManager::f() {
    return (int)(this - 0x54);
}
}
