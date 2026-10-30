// roc 2007-03 00438e70  unit: seg_00430000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00438e70
//
// 00438e70  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00438e76  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbflt.cpp (function ?GetRowsetSize@CRecordset@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbflt.cpp
