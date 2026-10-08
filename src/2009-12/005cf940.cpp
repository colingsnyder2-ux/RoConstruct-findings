// roc 2009-12 005cf940  unit: RBX::PartChunk  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cf940
//
// 005cf940  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 005cf946  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbcore.cpp (function ?IsEOF@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbcore.cpp
