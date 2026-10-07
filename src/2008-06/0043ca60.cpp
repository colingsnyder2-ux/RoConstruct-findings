// roc 2008-06 0043ca60  unit: RBX::Soundscape::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043ca60
//
// 0043ca60  8b442408             mov eax, dword ptr [esp + 8]
// 0043ca64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043ca68  50                   push eax
// 0043ca69  51                   push ecx
// 0043ca6a  e801f31100           call 0x55bd70
// 0043ca6f  83c408               add esp, 8
// 0043ca72  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
