// roc 2009-12 006bbe90  unit: RBX::Decal  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bbe90
//
// 006bbe90  51                   push ecx
// 006bbe91  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bbe95  803800               cmp byte ptr [eax], 0
// 006bbe98  c7042400000000       mov dword ptr [esp], 0
// 006bbe9f  b804299c00           mov eax, 0x9c2904
// 006bbea4  7505                 jne 0x6bbeab
// 006bbea6  b8f4559b00           mov eax, 0x9b55f4
// 006bbeab  56                   push esi
// 006bbeac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bbeb0  50                   push eax
// 006bbeb1  8bce                 mov ecx, esi
// 006bbeb3  ff15f4b69800         call dword ptr [0x98b6f4]
// 006bbeb9  8bc6                 mov eax, esi
// 006bbebb  5e                   pop esi
// 006bbebc  59                   pop ecx
// 006bbebd  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
