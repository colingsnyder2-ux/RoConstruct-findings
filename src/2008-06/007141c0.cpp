// roc 2008-06 007141c0  unit: CXTPDockingPaneManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007141c0
//
// 007141c0  8d41ac               lea eax, [ecx - 0x54]
// 007141c3  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPDockingPaneManager@ns_ROCX0000ee@@QAEHXZ)

namespace ns_ROCX0000ee {
struct CXTPDockingPaneManager {
    int f();
};

int CXTPDockingPaneManager::f() {
    return (int)(this - 0x54);
}
}
