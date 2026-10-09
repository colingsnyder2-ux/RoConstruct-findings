// roc 2008-06 00565f90  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565f90
//
// 00565f90  c70184ea8200         mov dword ptr [ecx], 0x82ea84
// 00565f96  c7411078ea8200       mov dword ptr [ecx + 0x10], 0x82ea78
// 00565f9d  c7411470ea8200       mov dword ptr [ecx + 0x14], 0x82ea70
// 00565fa4  c7412068ea8200       mov dword ptr [ecx + 0x20], 0x82ea68
// 00565fab  c7412458ea8200       mov dword ptr [ecx + 0x24], 0x82ea58
// 00565fb2  c7414448ea8200       mov dword ptr [ecx + 0x44], 0x82ea48
// 00565fb9  c7416438ea8200       mov dword ptr [ecx + 0x64], 0x82ea38
// 00565fc0  c7818400000028ea8200 mov dword ptr [ecx + 0x84], 0x82ea28
// 00565fca  c781a400000018ea8200 mov dword ptr [ecx + 0xa4], 0x82ea18
// 00565fd4  c781c400000008ea8200 mov dword ptr [ecx + 0xc4], 0x82ea08
// 00565fde  e97dfeffff           jmp 0x565e60
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
