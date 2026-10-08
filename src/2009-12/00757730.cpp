// roc 2009-12 00757730  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757730
//
// 00757730  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00757736  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbview.cpp (function ?IsDeleted@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbview.cpp
