// roc 2012-06 00548c00  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00548c00
//
// 00548c00  51                   push ecx
// 00548c01  56                   push esi
// 00548c02  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00548c05  85f6                 test esi, esi
// 00548c07  7441                 je 0x548c4a
// 00548c09  8b4604               mov eax, dword ptr [esi + 4]
// 00548c0c  85c0                 test eax, eax
// 00548c0e  741c                 je 0x548c2c
// 00548c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00548c14  8b5608               mov edx, dword ptr [esi + 8]
// 00548c17  51                   push ecx
// 00548c18  56                   push esi
// 00548c19  52                   push edx
// 00548c1a  50                   push eax
// 00548c1b  e810fffcff           call 0x518b30
// 00548c20  8b4604               mov eax, dword ptr [esi + 4]
// 00548c23  50                   push eax
// 00548c24  e8eb944300           call 0x982114
// 00548c29  83c414               add esp, 0x14
// 00548c2c  56                   push esi
// 00548c2d  c7460400000000       mov dword ptr [esi + 4], 0
// 00548c34  c7460800000000       mov dword ptr [esi + 8], 0
// 00548c3b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00548c42  e8cd944300           call 0x982114
// 00548c47  83c404               add esp, 4
// 00548c4a  5e                   pop esi
// 00548c4b  59                   pop ecx
// 00548c4c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?dispose@?$sp_counted_impl_p@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
