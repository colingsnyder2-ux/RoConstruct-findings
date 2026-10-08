// roc 2009-06 005ff290  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff290
//
// 005ff290  6aff                 push -1
// 005ff292  6898678600           push 0x866798
// 005ff297  64a100000000         mov eax, dword ptr fs:[0]
// 005ff29d  50                   push eax
// 005ff29e  64892500000000       mov dword ptr fs:[0], esp
// 005ff2a5  51                   push ecx
// 005ff2a6  56                   push esi
// 005ff2a7  8bf1                 mov esi, ecx
// 005ff2a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ff2ad  83ec3c               sub esp, 0x3c
// 005ff2b0  8bc4                 mov eax, esp
// 005ff2b2  c70600000000         mov dword ptr [esi], 0
// 005ff2b8  8d542458             lea edx, [esp + 0x58]
// 005ff2bc  89642440             mov dword ptr [esp + 0x40], esp
// 005ff2c0  8908                 mov dword ptr [eax], ecx
// 005ff2c2  8d4804               lea ecx, [eax + 4]
// 005ff2c5  52                   push edx
// 005ff2c6  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005ff2ce  e80dc3ffff           call 0x5fb5e0
// 005ff2d3  8bce                 mov ecx, esi
// 005ff2d5  e836faffff           call 0x5fed10
// 005ff2da  8d4c241c             lea ecx, [esp + 0x1c]
// 005ff2de  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ff2e6  e845bcffff           call 0x5faf30
// 005ff2eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff2ef  8bc6                 mov eax, esi
// 005ff2f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff2f8  5e                   pop esi
// 005ff2f9  83c410               add esp, 0x10
// 005ff2fc  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
