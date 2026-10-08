// roc 2012-06 006d81c0  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d81c0
//
// 006d81c0  6aff                 push -1
// 006d81c2  6828b3ab00           push 0xabb328
// 006d81c7  64a100000000         mov eax, dword ptr fs:[0]
// 006d81cd  50                   push eax
// 006d81ce  64892500000000       mov dword ptr fs:[0], esp
// 006d81d5  51                   push ecx
// 006d81d6  53                   push ebx
// 006d81d7  56                   push esi
// 006d81d8  8bf1                 mov esi, ecx
// 006d81da  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006d81de  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d81e2  33c0                 xor eax, eax
// 006d81e4  89442414             mov dword ptr [esp + 0x14], eax
// 006d81e8  88442408             mov byte ptr [esp + 8], al
// 006d81ec  8b442408             mov eax, dword ptr [esp + 8]
// 006d81f0  50                   push eax
// 006d81f1  51                   push ecx
// 006d81f2  83ec3c               sub esp, 0x3c
// 006d81f5  8bc4                 mov eax, esp
// 006d81f7  8910                 mov dword ptr [eax], edx
// 006d81f9  8d4804               lea ecx, [eax + 4]
// 006d81fc  8d442464             lea eax, [esp + 0x64]
// 006d8200  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 006d8207  50                   push eax
// 006d8208  e80399ffff           call 0x6d1b10
// 006d820d  8bce                 mov ecx, esi
// 006d820f  e80cf3ffff           call 0x6d7520
// 006d8214  8d4c2420             lea ecx, [esp + 0x20]
// 006d8218  8ad8                 mov bl, al
// 006d821a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d8222  e8e98cffff           call 0x6d0f10
// 006d8227  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d822b  5e                   pop esi
// 006d822c  8ac3                 mov al, bl
// 006d822e  64890d00000000       mov dword ptr fs:[0], ecx
// 006d8235  5b                   pop ebx
// 006d8236  83c410               add esp, 0x10
// 006d8239  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
