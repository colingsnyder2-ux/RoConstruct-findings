// roc 2012-06 006db3e0  unit: RBX::DataModel::W4GearType::?$EnumDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006db3e0
//
// 006db3e0  6aff                 push -1
// 006db3e2  6828b3ab00           push 0xabb328
// 006db3e7  64a100000000         mov eax, dword ptr fs:[0]
// 006db3ed  50                   push eax
// 006db3ee  64892500000000       mov dword ptr fs:[0], esp
// 006db3f5  51                   push ecx
// 006db3f6  56                   push esi
// 006db3f7  8bf1                 mov esi, ecx
// 006db3f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006db3fd  83ec3c               sub esp, 0x3c
// 006db400  8bc4                 mov eax, esp
// 006db402  c70600000000         mov dword ptr [esi], 0
// 006db408  8d542458             lea edx, [esp + 0x58]
// 006db40c  89642440             mov dword ptr [esp + 0x40], esp
// 006db410  8908                 mov dword ptr [eax], ecx
// 006db412  8d4804               lea ecx, [eax + 4]
// 006db415  52                   push edx
// 006db416  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006db41e  e8ed66ffff           call 0x6d1b10
// 006db423  8bce                 mov ecx, esi
// 006db425  e886efffff           call 0x6da3b0
// 006db42a  8d4c241c             lea ecx, [esp + 0x1c]
// 006db42e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006db436  e8d55affff           call 0x6d0f10
// 006db43b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db43f  8bc6                 mov eax, esi
// 006db441  64890d00000000       mov dword ptr fs:[0], ecx
// 006db448  5e                   pop esi
// 006db449  83c410               add esp, 0x10
// 006db44c  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
