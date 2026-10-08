// roc 2007-03 0048e090  unit: seg_00480000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048e090
//
// 0048e090  56                   push esi
// 0048e091  8b742408             mov esi, dword ptr [esp + 8]
// 0048e095  85f6                 test esi, esi
// 0048e097  7441                 je 0x48e0da
// 0048e099  8b4604               mov eax, dword ptr [esi + 4]
// 0048e09c  85c0                 test eax, eax
// 0048e09e  741c                 je 0x48e0bc
// 0048e0a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e0a4  8b5608               mov edx, dword ptr [esi + 8]
// 0048e0a7  51                   push ecx
// 0048e0a8  56                   push esi
// 0048e0a9  52                   push edx
// 0048e0aa  50                   push eax
// 0048e0ab  e840190100           call 0x49f9f0
// 0048e0b0  8b4604               mov eax, dword ptr [esi + 4]
// 0048e0b3  50                   push eax
// 0048e0b4  e837001900           call 0x61e0f0
// 0048e0b9  83c414               add esp, 0x14
// 0048e0bc  56                   push esi
// 0048e0bd  c7460400000000       mov dword ptr [esi + 4], 0
// 0048e0c4  c7460800000000       mov dword ptr [esi + 8], 0
// 0048e0cb  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0048e0d2  e819001900           call 0x61e0f0
// 0048e0d7  83c404               add esp, 4
// 0048e0da  5e                   pop esi
// 0048e0db  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$checked_delete@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@YAXPAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
