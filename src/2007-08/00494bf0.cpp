// roc 2007-08 00494bf0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00494bf0
//
// 00494bf0  51                   push ecx
// 00494bf1  56                   push esi
// 00494bf2  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00494bf5  85f6                 test esi, esi
// 00494bf7  7441                 je 0x494c3a
// 00494bf9  8b4604               mov eax, dword ptr [esi + 4]
// 00494bfc  85c0                 test eax, eax
// 00494bfe  741c                 je 0x494c1c
// 00494c00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00494c04  8b5608               mov edx, dword ptr [esi + 8]
// 00494c07  51                   push ecx
// 00494c08  56                   push esi
// 00494c09  52                   push edx
// 00494c0a  50                   push eax
// 00494c0b  e8408ff7ff           call 0x40db50
// 00494c10  8b4604               mov eax, dword ptr [esi + 4]
// 00494c13  50                   push eax
// 00494c14  e849b01900           call 0x62fc62
// 00494c19  83c414               add esp, 0x14
// 00494c1c  56                   push esi
// 00494c1d  c7460400000000       mov dword ptr [esi + 4], 0
// 00494c24  c7460800000000       mov dword ptr [esi + 8], 0
// 00494c2b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00494c32  e82bb01900           call 0x62fc62
// 00494c37  83c404               add esp, 4
// 00494c3a  5e                   pop esi
// 00494c3b  59                   pop ecx
// 00494c3c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?dispose@?$sp_counted_impl_p@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
