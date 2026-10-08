// roc 2009-12 007b2f20  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b2f20
//
// 007b2f20  8b442404             mov eax, dword ptr [esp + 4]
// 007b2f24  894104               mov dword ptr [ecx + 4], eax
// 007b2f27  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\afxstate.cpp (function ?Construct@CSimpleList@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/afxstate.cpp
