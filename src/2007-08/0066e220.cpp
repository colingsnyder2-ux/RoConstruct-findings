// from server: 33% by colin
// roc 2007-08 0066e220  unit: CXTPDockingPaneManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e220
//
// 0066e220  8d41ac               lea eax, [ecx - 0x54]
// 0066e223  c3                   ret 

struct CXTPDockingPaneManager {
    char _padding[0x54];
};

CXTPDockingPaneManager* func_0066e220(CXTPDockingPaneManager* ecx) {
    return reinterpret_cast<CXTPDockingPaneManager*>(reinterpret_cast<char*>(ecx) - 0x54);
}
