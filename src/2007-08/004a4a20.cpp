// roc 2007-08 004a4a20  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4a20
//
// 004a4a20  8b442404             mov eax, dword ptr [esp + 4]
// 004a4a24  85c0                 test eax, eax
// 004a4a26  56                   push esi
// 004a4a27  57                   push edi
// 004a4a28  8bf1                 mov esi, ecx
// 004a4a2a  7405                 je 0x4a4a31
// 004a4a2c  8d78fc               lea edi, [eax - 4]
// 004a4a2f  eb02                 jmp 0x4a4a33
// 004a4a31  33ff                 xor edi, edi
// 004a4a33  8b4608               mov eax, dword ptr [esi + 8]
// 004a4a36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a4a3a  8b09                 mov ecx, dword ptr [ecx]
// 004a4a3c  03c7                 add eax, edi
// 004a4a3e  3908                 cmp dword ptr [eax], ecx
// 004a4a40  741f                 je 0x4a4a61
// 004a4a42  8908                 mov dword ptr [eax], ecx
// 004a4a44  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a4a47  85c0                 test eax, eax
// 004a4a49  740b                 je 0x4a4a56
// 004a4a4b  8b5604               mov edx, dword ptr [esi + 4]
// 004a4a4e  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004a4a51  52                   push edx
// 004a4a52  03cf                 add ecx, edi
// 004a4a54  ffd0                 call eax
// 004a4a56  8b4604               mov eax, dword ptr [esi + 4]
// 004a4a59  50                   push eax
// 004a4a5a  8bcf                 mov ecx, edi
// 004a4a5c  e8affcf9ff           call 0x444710
// 004a4a61  5f                   pop edi
// 004a4a62  5e                   pop esi
// 004a4a63  c20800               ret 8
// library rbxgs/v8datamodel\GameSettings.cpp (function ?setValue@?$BoundPropGetSet@VGameSettings@RBX@@@?$BoundProp@H$00@Reflection@RBX@@UBEXPAVDescribedBase@34@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
