// from server: 100% by auto
// roc 2010-06 0043a480  unit: RBX::Soundscape::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0043a480
//
// 0043a480  8b442408             mov eax, dword ptr [esp + 8]
// 0043a484  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043a488  50                   push eax
// 0043a489  51                   push ecx
// 0043a48a  e891081f00           call 0x62ad20
// 0043a48f  83c408               add esp, 8
// 0043a492  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
