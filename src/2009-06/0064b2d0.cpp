// roc 2009-06 0064b2d0  unit: RBX::DataModel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b2d0
//
// 0064b2d0  51                   push ecx
// 0064b2d1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064b2d5  803800               cmp byte ptr [eax], 0
// 0064b2d8  c7042400000000       mov dword ptr [esp], 0
// 0064b2df  b894ba8c00           mov eax, 0x8cba94
// 0064b2e4  7505                 jne 0x64b2eb
// 0064b2e6  b8fcfc8b00           mov eax, 0x8bfcfc
// 0064b2eb  56                   push esi
// 0064b2ec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064b2f0  50                   push eax
// 0064b2f1  8bce                 mov ecx, esi
// 0064b2f3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b2f9  8bc6                 mov eax, esi
// 0064b2fb  5e                   pop esi
// 0064b2fc  59                   pop ecx
// 0064b2fd  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
