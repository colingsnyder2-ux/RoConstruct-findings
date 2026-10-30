// roc 2009-12 008f3ba0  unit: CXTMemDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3ba0
//
// 008f3ba0  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 008f3ba7  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\oleasmon.cpp (function ?Orphan@_AfxBindStatusCallback@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/oleasmon.cpp
