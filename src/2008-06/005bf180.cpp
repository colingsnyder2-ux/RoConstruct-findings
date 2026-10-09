// roc 2008-06 005bf180  unit: RBX::VGameSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf180
//
// 005bf180  56                   push esi
// 005bf181  8bf1                 mov esi, ecx
// 005bf183  e878ace4ff           call 0x409e00
// 005bf188  c70634858300         mov dword ptr [esi], 0x838534
// 005bf18e  c7461024858300       mov dword ptr [esi + 0x10], 0x838524
// 005bf195  c746141c858300       mov dword ptr [esi + 0x14], 0x83851c
// 005bf19c  c7462014858300       mov dword ptr [esi + 0x20], 0x838514
// 005bf1a3  c7462404858300       mov dword ptr [esi + 0x24], 0x838504
// 005bf1aa  c74644f4848300       mov dword ptr [esi + 0x44], 0x8384f4
// 005bf1b1  c74664e4848300       mov dword ptr [esi + 0x64], 0x8384e4
// 005bf1b8  c78684000000d4848300 mov dword ptr [esi + 0x84], 0x8384d4
// 005bf1c2  c786a4000000c4848300 mov dword ptr [esi + 0xa4], 0x8384c4
// 005bf1cc  c786c4000000b4848300 mov dword ptr [esi + 0xc4], 0x8384b4
// 005bf1d6  8bc6                 mov eax, esi
// 005bf1d8  5e                   pop esi
// 005bf1d9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
