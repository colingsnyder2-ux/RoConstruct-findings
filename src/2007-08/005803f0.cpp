// roc 2007-08 005803f0  unit: RBX::Log  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005803f0
//
// 005803f0  51                   push ecx
// 005803f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005803f5  803800               cmp byte ptr [eax], 0
// 005803f8  c7042400000000       mov dword ptr [esp], 0
// 005803ff  b8440b7a00           mov eax, 0x7a0b44
// 00580404  7505                 jne 0x58040b
// 00580406  b8d0797900           mov eax, 0x7979d0
// 0058040b  56                   push esi
// 0058040c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00580410  50                   push eax
// 00580411  8bce                 mov ecx, esi
// 00580413  ff1598e67700         call dword ptr [0x77e698]
// 00580419  8bc6                 mov eax, esi
// 0058041b  5e                   pop esi
// 0058041c  59                   pop ecx
// 0058041d  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
