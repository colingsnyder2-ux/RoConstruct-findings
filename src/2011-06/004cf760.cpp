// roc 2011-06 004cf760  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cf760
//
// 004cf760  56                   push esi
// 004cf761  8b742408             mov esi, dword ptr [esp + 8]
// 004cf765  85f6                 test esi, esi
// 004cf767  7441                 je 0x4cf7aa
// 004cf769  8b4604               mov eax, dword ptr [esi + 4]
// 004cf76c  85c0                 test eax, eax
// 004cf76e  741c                 je 0x4cf78c
// 004cf770  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cf774  8b5608               mov edx, dword ptr [esi + 8]
// 004cf777  51                   push ecx
// 004cf778  56                   push esi
// 004cf779  52                   push edx
// 004cf77a  50                   push eax
// 004cf77b  e8b0cc3200           call 0x7fc430
// 004cf780  8b4604               mov eax, dword ptr [esi + 4]
// 004cf783  50                   push eax
// 004cf784  e8cfa83300           call 0x80a058
// 004cf789  83c414               add esp, 0x14
// 004cf78c  56                   push esi
// 004cf78d  c7460400000000       mov dword ptr [esi + 4], 0
// 004cf794  c7460800000000       mov dword ptr [esi + 8], 0
// 004cf79b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004cf7a2  e8b1a83300           call 0x80a058
// 004cf7a7  83c404               add esp, 4
// 004cf7aa  5e                   pop esi
// 004cf7ab  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$checked_delete@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@YAXPAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
