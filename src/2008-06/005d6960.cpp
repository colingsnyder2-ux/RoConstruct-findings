// roc 2008-06 005d6960  unit: RBX::VTeams::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6960
//
// 005d6960  c70114d08300         mov dword ptr [ecx], 0x83d014
// 005d6966  c7411004d08300       mov dword ptr [ecx + 0x10], 0x83d004
// 005d696d  c74114fccf8300       mov dword ptr [ecx + 0x14], 0x83cffc
// 005d6974  c74120f4cf8300       mov dword ptr [ecx + 0x20], 0x83cff4
// 005d697b  c74124e4cf8300       mov dword ptr [ecx + 0x24], 0x83cfe4
// 005d6982  c74144d4cf8300       mov dword ptr [ecx + 0x44], 0x83cfd4
// 005d6989  c74164c4cf8300       mov dword ptr [ecx + 0x64], 0x83cfc4
// 005d6990  c78184000000b4cf8300 mov dword ptr [ecx + 0x84], 0x83cfb4
// 005d699a  c781a4000000a4cf8300 mov dword ptr [ecx + 0xa4], 0x83cfa4
// 005d69a4  c781c400000094cf8300 mov dword ptr [ecx + 0xc4], 0x83cf94
// 005d69ae  e98d3bf8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
