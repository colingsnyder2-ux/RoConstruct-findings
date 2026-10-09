// roc 2008-06 005df560  unit: RBX::Lighting  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df560
//
// 005df560  c701e4db8300         mov dword ptr [ecx], 0x83dbe4
// 005df566  c74110d4db8300       mov dword ptr [ecx + 0x10], 0x83dbd4
// 005df56d  c74114ccdb8300       mov dword ptr [ecx + 0x14], 0x83dbcc
// 005df574  c74120c4db8300       mov dword ptr [ecx + 0x20], 0x83dbc4
// 005df57b  c74124b4db8300       mov dword ptr [ecx + 0x24], 0x83dbb4
// 005df582  c74144a4db8300       mov dword ptr [ecx + 0x44], 0x83dba4
// 005df589  c7416494db8300       mov dword ptr [ecx + 0x64], 0x83db94
// 005df590  c7818400000084db8300 mov dword ptr [ecx + 0x84], 0x83db84
// 005df59a  c781a400000074db8300 mov dword ptr [ecx + 0xa4], 0x83db74
// 005df5a4  c781c400000064db8300 mov dword ptr [ecx + 0xc4], 0x83db64
// 005df5ae  e98daff7ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
