// roc 2008-06 00565e60  unit: RBX::Team  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565e60
//
// 00565e60  c70174e98200         mov dword ptr [ecx], 0x82e974
// 00565e66  c7411064e98200       mov dword ptr [ecx + 0x10], 0x82e964
// 00565e6d  c741145ce98200       mov dword ptr [ecx + 0x14], 0x82e95c
// 00565e74  c7412054e98200       mov dword ptr [ecx + 0x20], 0x82e954
// 00565e7b  c7412444e98200       mov dword ptr [ecx + 0x24], 0x82e944
// 00565e82  c7414434e98200       mov dword ptr [ecx + 0x44], 0x82e934
// 00565e89  c7416424e98200       mov dword ptr [ecx + 0x64], 0x82e924
// 00565e90  c7818400000014e98200 mov dword ptr [ecx + 0x84], 0x82e914
// 00565e9a  c781a400000004e98200 mov dword ptr [ecx + 0xa4], 0x82e904
// 00565ea4  c781c4000000f4e88200 mov dword ptr [ecx + 0xc4], 0x82e8f4
// 00565eae  e98d46ffff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
