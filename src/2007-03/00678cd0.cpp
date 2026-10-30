// roc 2007-03 00678cd0  unit: seg_00670000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678cd0
//
// 00678cd0  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00678cd6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbview.cpp (function ?IsDeleted@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbview.cpp
