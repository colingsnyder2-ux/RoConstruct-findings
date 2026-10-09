// roc 2008-06 005d1cb0  unit: RBX::VBackpack::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1cb0
//
// 005d1cb0  c70124bc8300         mov dword ptr [ecx], 0x83bc24
// 005d1cb6  c7411018bc8300       mov dword ptr [ecx + 0x10], 0x83bc18
// 005d1cbd  c7411410bc8300       mov dword ptr [ecx + 0x14], 0x83bc10
// 005d1cc4  c7412008bc8300       mov dword ptr [ecx + 0x20], 0x83bc08
// 005d1ccb  c74124f8bb8300       mov dword ptr [ecx + 0x24], 0x83bbf8
// 005d1cd2  c74144e8bb8300       mov dword ptr [ecx + 0x44], 0x83bbe8
// 005d1cd9  c74164d8bb8300       mov dword ptr [ecx + 0x64], 0x83bbd8
// 005d1ce0  c78184000000c8bb8300 mov dword ptr [ecx + 0x84], 0x83bbc8
// 005d1cea  c781a4000000b8bb8300 mov dword ptr [ecx + 0xa4], 0x83bbb8
// 005d1cf4  c781c4000000a8bb8300 mov dword ptr [ecx + 0xc4], 0x83bba8
// 005d1cfe  e93d88f8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
