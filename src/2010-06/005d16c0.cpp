// roc 2010-06 005d16c0  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d16c0
//
// 005d16c0  6aff                 push -1
// 005d16c2  6888c99900           push 0x99c988
// 005d16c7  64a100000000         mov eax, dword ptr fs:[0]
// 005d16cd  50                   push eax
// 005d16ce  64892500000000       mov dword ptr fs:[0], esp
// 005d16d5  51                   push ecx
// 005d16d6  56                   push esi
// 005d16d7  8bf1                 mov esi, ecx
// 005d16d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d16dd  83ec20               sub esp, 0x20
// 005d16e0  8bc4                 mov eax, esp
// 005d16e2  c70600000000         mov dword ptr [esi], 0
// 005d16e8  8d54243c             lea edx, [esp + 0x3c]
// 005d16ec  89642424             mov dword ptr [esp + 0x24], esp
// 005d16f0  8908                 mov dword ptr [eax], ecx
// 005d16f2  8d4804               lea ecx, [eax + 4]
// 005d16f5  52                   push edx
// 005d16f6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d16fe  ff150ca49e00         call dword ptr [0x9ea40c]
// 005d1704  8bce                 mov ecx, esi
// 005d1706  e895fbffff           call 0x5d12a0
// 005d170b  8d4c241c             lea ecx, [esp + 0x1c]
// 005d170f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d1717  ff1500a49e00         call dword ptr [0x9ea400]
// 005d171d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d1721  8bc6                 mov eax, esi
// 005d1723  64890d00000000       mov dword ptr fs:[0], ecx
// 005d172a  5e                   pop esi
// 005d172b  83c410               add esp, 0x10
// 005d172e  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
