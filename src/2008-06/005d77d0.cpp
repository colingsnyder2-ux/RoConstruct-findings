// roc 2008-06 005d77d0  unit: RBX::Humanoid  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d77d0
//
// 005d77d0  c7019cd28300         mov dword ptr [ecx], 0x83d29c
// 005d77d6  c741108cd28300       mov dword ptr [ecx + 0x10], 0x83d28c
// 005d77dd  c7411484d28300       mov dword ptr [ecx + 0x14], 0x83d284
// 005d77e4  c741207cd28300       mov dword ptr [ecx + 0x20], 0x83d27c
// 005d77eb  c741246cd28300       mov dword ptr [ecx + 0x24], 0x83d26c
// 005d77f2  c741445cd28300       mov dword ptr [ecx + 0x44], 0x83d25c
// 005d77f9  c741644cd28300       mov dword ptr [ecx + 0x64], 0x83d24c
// 005d7800  c781840000003cd28300 mov dword ptr [ecx + 0x84], 0x83d23c
// 005d780a  c781a40000002cd28300 mov dword ptr [ecx + 0xa4], 0x83d22c
// 005d7814  c781c40000001cd28300 mov dword ptr [ecx + 0xc4], 0x83d21c
// 005d781e  e91d2df8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
