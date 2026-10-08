// roc 2009-06 005fb640  unit: RBX::DataModel  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fb640
//
// 005fb640  6aff                 push -1
// 005fb642  68b8ac8600           push 0x86acb8
// 005fb647  64a100000000         mov eax, dword ptr fs:[0]
// 005fb64d  50                   push eax
// 005fb64e  64892500000000       mov dword ptr fs:[0], esp
// 005fb655  51                   push ecx
// 005fb656  56                   push esi
// 005fb657  8bf1                 mov esi, ecx
// 005fb659  83ec1c               sub esp, 0x1c
// 005fb65c  8d442434             lea eax, [esp + 0x34]
// 005fb660  89642420             mov dword ptr [esp + 0x20], esp
// 005fb664  8bcc                 mov ecx, esp
// 005fb666  50                   push eax
// 005fb667  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005fb66f  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fb675  8bce                 mov ecx, esi
// 005fb677  e89469e2ff           call 0x422010
// 005fb67c  8d4c2418             lea ecx, [esp + 0x18]
// 005fb680  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fb688  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fb68e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fb692  8bc6                 mov eax, esi
// 005fb694  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb69b  5e                   pop esi
// 005fb69c  83c410               add esp, 0x10
// 005fb69f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
