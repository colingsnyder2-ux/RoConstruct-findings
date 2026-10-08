// from server: 100% by auto
// roc 2009-06 00643480  unit: RBX::WoodTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643480
//
// 00643480  8b442408             mov eax, dword ptr [esp + 8]
// 00643484  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00643488  50                   push eax
// 00643489  51                   push ecx
// 0064348a  e8d157f9ff           call 0x5d8c60
// 0064348f  83c408               add esp, 8
// 00643492  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
