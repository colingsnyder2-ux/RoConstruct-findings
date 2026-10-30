// roc 2009-12 00476860  unit: CWebToolbox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00476860
//
// 00476860  8b81e0000000         mov eax, dword ptr [ecx + 0xe0]
// 00476866  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbview.cpp (function ?CanScroll@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbview.cpp
