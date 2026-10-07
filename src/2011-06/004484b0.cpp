// roc 2011-06 004484b0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004484b0
//
// 004484b0  8b442408             mov eax, dword ptr [esp + 8]
// 004484b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004484b8  50                   push eax
// 004484b9  51                   push ecx
// 004484ba  e811762000           call 0x64fad0
// 004484bf  83c408               add esp, 8
// 004484c2  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
