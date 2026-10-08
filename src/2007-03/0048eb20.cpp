// roc 2007-03 0048eb20  unit: seg_00480000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048eb20
//
// 0048eb20  51                   push ecx
// 0048eb21  56                   push esi
// 0048eb22  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0048eb25  85f6                 test esi, esi
// 0048eb27  7441                 je 0x48eb6a
// 0048eb29  8b4604               mov eax, dword ptr [esi + 4]
// 0048eb2c  85c0                 test eax, eax
// 0048eb2e  741c                 je 0x48eb4c
// 0048eb30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048eb34  8b5608               mov edx, dword ptr [esi + 8]
// 0048eb37  51                   push ecx
// 0048eb38  56                   push esi
// 0048eb39  52                   push edx
// 0048eb3a  50                   push eax
// 0048eb3b  e8b00e0100           call 0x49f9f0
// 0048eb40  8b4604               mov eax, dword ptr [esi + 4]
// 0048eb43  50                   push eax
// 0048eb44  e8a7f51800           call 0x61e0f0
// 0048eb49  83c414               add esp, 0x14
// 0048eb4c  56                   push esi
// 0048eb4d  c7460400000000       mov dword ptr [esi + 4], 0
// 0048eb54  c7460800000000       mov dword ptr [esi + 8], 0
// 0048eb5b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0048eb62  e889f51800           call 0x61e0f0
// 0048eb67  83c404               add esp, 4
// 0048eb6a  5e                   pop esi
// 0048eb6b  59                   pop ecx
// 0048eb6c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?dispose@?$sp_counted_impl_p@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
