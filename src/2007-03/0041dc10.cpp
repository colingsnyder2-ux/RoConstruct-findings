// roc 2007-03 0041dc10  unit: seg_00410000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041dc10
//
// 0041dc10  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 0041dc16  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbcore.cpp (function ?IsBOF@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbcore.cpp
