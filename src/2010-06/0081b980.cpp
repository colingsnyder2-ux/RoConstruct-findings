// from server: 100% by colin
// roc 2010-06 0081b980  unit: CXTPDockingPaneManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081b980
//
// 0081b980  8d41ac               lea eax, [ecx - 0x54]
// 0081b983  c3                   ret 

struct CXTPDockingPaneManager {
    int f();
};

int CXTPDockingPaneManager::f() {
    return (int)(this - 0x54);
}
