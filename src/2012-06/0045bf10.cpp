// roc 2012-06 0045bf10  unit: RBX::Soundscape::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0045bf10
//
// 0045bf10  8b442408             mov eax, dword ptr [esp + 8]
// 0045bf14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045bf18  50                   push eax
// 0045bf19  51                   push ecx
// 0045bf1a  e821782e00           call 0x743740
// 0045bf1f  83c408               add esp, 8
// 0045bf22  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
