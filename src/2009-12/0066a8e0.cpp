// roc 2009-12 0066a8e0  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0066a8e0
//
// 0066a8e0  6aff                 push -1
// 0066a8e2  6888449400           push 0x944488
// 0066a8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0066a8ed  50                   push eax
// 0066a8ee  64892500000000       mov dword ptr fs:[0], esp
// 0066a8f5  51                   push ecx
// 0066a8f6  56                   push esi
// 0066a8f7  8bf1                 mov esi, ecx
// 0066a8f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066a8fd  83ec3c               sub esp, 0x3c
// 0066a900  8bc4                 mov eax, esp
// 0066a902  c70600000000         mov dword ptr [esi], 0
// 0066a908  8d542458             lea edx, [esp + 0x58]
// 0066a90c  89642440             mov dword ptr [esp + 0x40], esp
// 0066a910  8908                 mov dword ptr [eax], ecx
// 0066a912  8d4804               lea ecx, [eax + 4]
// 0066a915  52                   push edx
// 0066a916  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0066a91e  e85d48fdff           call 0x63f180
// 0066a923  8bce                 mov ecx, esi
// 0066a925  e8e6fbffff           call 0x66a510
// 0066a92a  8d4c241c             lea ecx, [esp + 0x1c]
// 0066a92e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066a936  e885860900           call 0x702fc0
// 0066a93b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066a93f  8bc6                 mov eax, esi
// 0066a941  64890d00000000       mov dword ptr fs:[0], ecx
// 0066a948  5e                   pop esi
// 0066a949  83c410               add esp, 0x10
// 0066a94c  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
