// roc 2007-03 00683080  unit: seg_00680000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00683080
//
// 00683080  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00683086  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbcore.cpp (function ?IsEOF@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbcore.cpp
