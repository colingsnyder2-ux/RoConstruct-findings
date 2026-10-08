// from server: 33% by colin
// roc 2010-06 00810b80  unit: CXTPDockingPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810b80
//
// 00810b80  8d41a8               lea eax, [ecx - 0x58]
// 00810b83  c3                   ret 

struct CXTPDockingPane {
    char pad[168];
};

int CXTPDockingPane_f(CXTPDockingPane* ecx) {
    return *(int*)((char*)ecx - 0x58);
}
