// from server: 100% by auto
// roc 2007-08 0043d7e0  unit: RBX::VSoundId::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043d7e0
//
// 0043d7e0  8b442408             mov eax, dword ptr [esp + 8]
// 0043d7e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043d7e8  50                   push eax
// 0043d7e9  51                   push ecx
// 0043d7ea  e8e1771000           call 0x544fd0
// 0043d7ef  83c408               add esp, 8
// 0043d7f2  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
