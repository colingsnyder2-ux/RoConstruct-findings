// roc 2007-03 006c0350  unit: seg_006c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c0350
//
// 006c0350  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 006c0357  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\oleasmon.cpp (function ?Orphan@_AfxBindStatusCallback@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/oleasmon.cpp
