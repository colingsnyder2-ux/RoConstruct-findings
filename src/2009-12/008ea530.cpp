// roc 2009-12 008ea530  unit: CXTPRibbonTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea530
//
// 008ea530  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 008ea536  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlppg.cpp (function ?IsModified@COlePropertyPage@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlppg.cpp
