// from server: 100% by auto
// roc 2008-06 005b6b40  unit: RBX::DropperTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6b40
//
// 005b6b40  8b442408             mov eax, dword ptr [esp + 8]
// 005b6b44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b6b48  50                   push eax
// 005b6b49  51                   push ecx
// 005b6b4a  e80152faff           call 0x55bd50
// 005b6b4f  83c408               add esp, 8
// 005b6b52  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
