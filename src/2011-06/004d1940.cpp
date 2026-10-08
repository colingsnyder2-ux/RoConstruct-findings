// roc 2011-06 004d1940  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d1940
//
// 004d1940  51                   push ecx
// 004d1941  56                   push esi
// 004d1942  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d1945  85f6                 test esi, esi
// 004d1947  7441                 je 0x4d198a
// 004d1949  8b4604               mov eax, dword ptr [esi + 4]
// 004d194c  85c0                 test eax, eax
// 004d194e  741c                 je 0x4d196c
// 004d1950  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d1954  8b5608               mov edx, dword ptr [esi + 8]
// 004d1957  51                   push ecx
// 004d1958  56                   push esi
// 004d1959  52                   push edx
// 004d195a  50                   push eax
// 004d195b  e8d0aa3200           call 0x7fc430
// 004d1960  8b4604               mov eax, dword ptr [esi + 4]
// 004d1963  50                   push eax
// 004d1964  e8ef863300           call 0x80a058
// 004d1969  83c414               add esp, 0x14
// 004d196c  56                   push esi
// 004d196d  c7460400000000       mov dword ptr [esi + 4], 0
// 004d1974  c7460800000000       mov dword ptr [esi + 8], 0
// 004d197b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004d1982  e8d1863300           call 0x80a058
// 004d1987  83c404               add esp, 4
// 004d198a  5e                   pop esi
// 004d198b  59                   pop ecx
// 004d198c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?dispose@?$sp_counted_impl_p@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
