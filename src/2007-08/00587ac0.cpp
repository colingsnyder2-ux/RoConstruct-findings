// roc 2007-08 00587ac0  unit: RBX::Reflection::EnumDescriptor  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587ac0
//
// 00587ac0  8b442408             mov eax, dword ptr [esp + 8]
// 00587ac4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00587ac8  50                   push eax
// 00587ac9  51                   push ecx
// 00587aca  e8e1d4fbff           call 0x544fb0
// 00587acf  83c408               add esp, 8
// 00587ad2  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?construct@?$allocator@VToken@G3D@@@std@@QAEXPAVToken@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
