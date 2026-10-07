// roc 2010-06 00621720  unit: RBX::DropperTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621720
//
// 00621720  8b442408             mov eax, dword ptr [esp + 8]
// 00621724  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00621728  50                   push eax
// 00621729  51                   push ecx
// 0062172a  e8d1950000           call 0x62ad00
// 0062172f  83c408               add esp, 8
// 00621732  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
