// roc 2009-12 00666480  unit: boost::detail::tss_cleanup_function  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00666480
//
// 00666480  6aff                 push -1
// 00666482  68a8969400           push 0x9496a8
// 00666487  64a100000000         mov eax, dword ptr fs:[0]
// 0066648d  50                   push eax
// 0066648e  64892500000000       mov dword ptr fs:[0], esp
// 00666495  51                   push ecx
// 00666496  56                   push esi
// 00666497  8bf1                 mov esi, ecx
// 00666499  83ec1c               sub esp, 0x1c
// 0066649c  8d442434             lea eax, [esp + 0x34]
// 006664a0  89642420             mov dword ptr [esp + 0x20], esp
// 006664a4  8bcc                 mov ecx, esp
// 006664a6  50                   push eax
// 006664a7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006664af  ff15f0b69800         call dword ptr [0x98b6f0]
// 006664b5  8bce                 mov ecx, esi
// 006664b7  e854c7dbff           call 0x422c10
// 006664bc  8d4c2418             lea ecx, [esp + 0x18]
// 006664c0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006664c8  ff15e4b69800         call dword ptr [0x98b6e4]
// 006664ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006664d2  8bc6                 mov eax, esi
// 006664d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006664db  5e                   pop esi
// 006664dc  83c410               add esp, 0x10
// 006664df  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
