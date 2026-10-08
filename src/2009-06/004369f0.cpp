// from server: 100% by auto
// roc 2009-06 004369f0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004369f0
//
// 004369f0  8b442408             mov eax, dword ptr [esp + 8]
// 004369f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004369f8  50                   push eax
// 004369f9  51                   push ecx
// 004369fa  e881221a00           call 0x5d8c80
// 004369ff  83c408               add esp, 8
// 00436a02  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
