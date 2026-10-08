// from server: 100% by auto
// roc 2012-06 00692860  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00692860
//
// 00692860  8b442408             mov eax, dword ptr [esp + 8]
// 00692864  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00692868  50                   push eax
// 00692869  51                   push ecx
// 0069286a  e8b10e0b00           call 0x743720
// 0069286f  83c408               add esp, 8
// 00692872  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
