// roc 2009-12 006aa870  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006aa870
//
// 006aa870  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 006aa876  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dbcore.cpp (function ?IsBOF@CRecordset@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dbcore.cpp
