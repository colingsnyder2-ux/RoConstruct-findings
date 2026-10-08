// roc 2012-06 006d1b70  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d1b70
//
// 006d1b70  6aff                 push -1
// 006d1b72  68a818ac00           push 0xac18a8
// 006d1b77  64a100000000         mov eax, dword ptr fs:[0]
// 006d1b7d  50                   push eax
// 006d1b7e  64892500000000       mov dword ptr fs:[0], esp
// 006d1b85  51                   push ecx
// 006d1b86  56                   push esi
// 006d1b87  8bf1                 mov esi, ecx
// 006d1b89  83ec1c               sub esp, 0x1c
// 006d1b8c  8d442434             lea eax, [esp + 0x34]
// 006d1b90  89642420             mov dword ptr [esp + 0x20], esp
// 006d1b94  8bcc                 mov ecx, esp
// 006d1b96  50                   push eax
// 006d1b97  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006d1b9f  ff154426b200         call dword ptr [0xb22644]
// 006d1ba5  8bce                 mov ecx, esi
// 006d1ba7  e8e4efd5ff           call 0x430b90
// 006d1bac  8d4c2418             lea ecx, [esp + 0x18]
// 006d1bb0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d1bb8  ff153c26b200         call dword ptr [0xb2263c]
// 006d1bbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d1bc2  8bc6                 mov eax, esi
// 006d1bc4  64890d00000000       mov dword ptr fs:[0], ecx
// 006d1bcb  5e                   pop esi
// 006d1bcc  83c410               add esp, 0x10
// 006d1bcf  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
