// roc 2010-06 005d1740  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d1740
//
// 005d1740  6aff                 push -1
// 005d1742  6868699900           push 0x996968
// 005d1747  64a100000000         mov eax, dword ptr fs:[0]
// 005d174d  50                   push eax
// 005d174e  64892500000000       mov dword ptr fs:[0], esp
// 005d1755  51                   push ecx
// 005d1756  56                   push esi
// 005d1757  8bf1                 mov esi, ecx
// 005d1759  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d175d  83ec3c               sub esp, 0x3c
// 005d1760  8bc4                 mov eax, esp
// 005d1762  c70600000000         mov dword ptr [esi], 0
// 005d1768  8d542458             lea edx, [esp + 0x58]
// 005d176c  89642440             mov dword ptr [esp + 0x40], esp
// 005d1770  8908                 mov dword ptr [eax], ecx
// 005d1772  8d4804               lea ecx, [eax + 4]
// 005d1775  52                   push edx
// 005d1776  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005d177e  e8bd2cedff           call 0x4a4440
// 005d1783  8bce                 mov ecx, esi
// 005d1785  e896fbffff           call 0x5d1320
// 005d178a  8d4c241c             lea ecx, [esp + 0x1c]
// 005d178e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d1796  e8c51bedff           call 0x4a3360
// 005d179b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d179f  8bc6                 mov eax, esi
// 005d17a1  64890d00000000       mov dword ptr fs:[0], ecx
// 005d17a8  5e                   pop esi
// 005d17a9  83c410               add esp, 0x10
// 005d17ac  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
