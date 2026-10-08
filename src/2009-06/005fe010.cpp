// roc 2009-06 005fe010  unit: RBX::VInstance::?$NonFactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fe010
//
// 005fe010  6aff                 push -1
// 005fe012  6818c18500           push 0x85c118
// 005fe017  64a100000000         mov eax, dword ptr fs:[0]
// 005fe01d  50                   push eax
// 005fe01e  64892500000000       mov dword ptr fs:[0], esp
// 005fe025  51                   push ecx
// 005fe026  53                   push ebx
// 005fe027  56                   push esi
// 005fe028  8bf1                 mov esi, ecx
// 005fe02a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005fe02e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fe032  33c0                 xor eax, eax
// 005fe034  89442414             mov dword ptr [esp + 0x14], eax
// 005fe038  88442408             mov byte ptr [esp + 8], al
// 005fe03c  8b442408             mov eax, dword ptr [esp + 8]
// 005fe040  50                   push eax
// 005fe041  51                   push ecx
// 005fe042  83ec20               sub esp, 0x20
// 005fe045  8bc4                 mov eax, esp
// 005fe047  8910                 mov dword ptr [eax], edx
// 005fe049  8d4804               lea ecx, [eax + 4]
// 005fe04c  8d442448             lea eax, [esp + 0x48]
// 005fe050  89642464             mov dword ptr [esp + 0x64], esp
// 005fe054  50                   push eax
// 005fe055  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fe05b  8bce                 mov ecx, esi
// 005fe05d  e83ef7ffff           call 0x5fd7a0
// 005fe062  8d4c2420             lea ecx, [esp + 0x20]
// 005fe066  8ad8                 mov bl, al
// 005fe068  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fe070  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fe076  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fe07a  5e                   pop esi
// 005fe07b  8ac3                 mov al, bl
// 005fe07d  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe084  5b                   pop ebx
// 005fe085  83c410               add esp, 0x10
// 005fe088  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
