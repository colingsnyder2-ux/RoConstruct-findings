// roc 2009-12 00665330  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00665330
//
// 00665330  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00665336  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbview.cpp (function ?GetRecordCount@CRecordset@@QBEJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbview.cpp
