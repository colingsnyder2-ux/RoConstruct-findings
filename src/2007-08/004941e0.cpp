// roc 2007-08 004941e0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004941e0
//
// 004941e0  56                   push esi
// 004941e1  8b742408             mov esi, dword ptr [esp + 8]
// 004941e5  85f6                 test esi, esi
// 004941e7  7441                 je 0x49422a
// 004941e9  8b4604               mov eax, dword ptr [esi + 4]
// 004941ec  85c0                 test eax, eax
// 004941ee  741c                 je 0x49420c
// 004941f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004941f4  8b5608               mov edx, dword ptr [esi + 8]
// 004941f7  51                   push ecx
// 004941f8  56                   push esi
// 004941f9  52                   push edx
// 004941fa  50                   push eax
// 004941fb  e85099f7ff           call 0x40db50
// 00494200  8b4604               mov eax, dword ptr [esi + 4]
// 00494203  50                   push eax
// 00494204  e859ba1900           call 0x62fc62
// 00494209  83c414               add esp, 0x14
// 0049420c  56                   push esi
// 0049420d  c7460400000000       mov dword ptr [esi + 4], 0
// 00494214  c7460800000000       mov dword ptr [esi + 8], 0
// 0049421b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00494222  e83bba1900           call 0x62fc62
// 00494227  83c404               add esp, 4
// 0049422a  5e                   pop esi
// 0049422b  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$checked_delete@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@YAXPAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
