// roc 2011-06 0059e4f0  unit: RBX::VRunService::?$EventDesc  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059e4f0
//
// 0059e4f0  8b442408             mov eax, dword ptr [esp + 8]
// 0059e4f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059e4f8  50                   push eax
// 0059e4f9  51                   push ecx
// 0059e4fa  e8b1150b00           call 0x64fab0
// 0059e4ff  83c408               add esp, 8
// 0059e502  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
