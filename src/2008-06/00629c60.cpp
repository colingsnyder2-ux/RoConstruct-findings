// roc 2008-06 00629c60  unit: RBX::ClickDetector  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629c60
//
// 00629c60  c701145c8400         mov dword ptr [ecx], 0x845c14
// 00629c66  c74110045c8400       mov dword ptr [ecx + 0x10], 0x845c04
// 00629c6d  c74114fc5b8400       mov dword ptr [ecx + 0x14], 0x845bfc
// 00629c74  c74120f45b8400       mov dword ptr [ecx + 0x20], 0x845bf4
// 00629c7b  c74124e45b8400       mov dword ptr [ecx + 0x24], 0x845be4
// 00629c82  c74144d45b8400       mov dword ptr [ecx + 0x44], 0x845bd4
// 00629c89  c74164c45b8400       mov dword ptr [ecx + 0x64], 0x845bc4
// 00629c90  c78184000000b45b8400 mov dword ptr [ecx + 0x84], 0x845bb4
// 00629c9a  c781a4000000a45b8400 mov dword ptr [ecx + 0xa4], 0x845ba4
// 00629ca4  c781c4000000945b8400 mov dword ptr [ecx + 0xc4], 0x845b94
// 00629cae  e98d08f3ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
