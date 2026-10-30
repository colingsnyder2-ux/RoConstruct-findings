// roc 2009-12 008648e0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008648e0
//
// 008648e0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 008648e6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbflt.cpp (function ?GetRowsetSize@CRecordset@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbflt.cpp
