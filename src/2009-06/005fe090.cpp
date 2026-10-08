// roc 2009-06 005fe090  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fe090
//
// 005fe090  6aff                 push -1
// 005fe092  6898678600           push 0x866798
// 005fe097  64a100000000         mov eax, dword ptr fs:[0]
// 005fe09d  50                   push eax
// 005fe09e  64892500000000       mov dword ptr fs:[0], esp
// 005fe0a5  51                   push ecx
// 005fe0a6  53                   push ebx
// 005fe0a7  56                   push esi
// 005fe0a8  8bf1                 mov esi, ecx
// 005fe0aa  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005fe0ae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fe0b2  33c0                 xor eax, eax
// 005fe0b4  89442414             mov dword ptr [esp + 0x14], eax
// 005fe0b8  88442408             mov byte ptr [esp + 8], al
// 005fe0bc  8b442408             mov eax, dword ptr [esp + 8]
// 005fe0c0  50                   push eax
// 005fe0c1  51                   push ecx
// 005fe0c2  83ec3c               sub esp, 0x3c
// 005fe0c5  8bc4                 mov eax, esp
// 005fe0c7  8910                 mov dword ptr [eax], edx
// 005fe0c9  8d4804               lea ecx, [eax + 4]
// 005fe0cc  8d442464             lea eax, [esp + 0x64]
// 005fe0d0  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 005fe0d7  50                   push eax
// 005fe0d8  e803d5ffff           call 0x5fb5e0
// 005fe0dd  8bce                 mov ecx, esi
// 005fe0df  e86cf7ffff           call 0x5fd850
// 005fe0e4  8d4c2420             lea ecx, [esp + 0x20]
// 005fe0e8  8ad8                 mov bl, al
// 005fe0ea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fe0f2  e839ceffff           call 0x5faf30
// 005fe0f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fe0fb  5e                   pop esi
// 005fe0fc  8ac3                 mov al, bl
// 005fe0fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe105  5b                   pop ebx
// 005fe106  83c410               add esp, 0x10
// 005fe109  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
