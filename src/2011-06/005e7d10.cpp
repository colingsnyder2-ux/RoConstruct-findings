// roc 2011-06 005e7d10  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7d10
//
// 005e7d10  6aff                 push -1
// 005e7d12  6878719e00           push 0x9e7178
// 005e7d17  64a100000000         mov eax, dword ptr fs:[0]
// 005e7d1d  50                   push eax
// 005e7d1e  64892500000000       mov dword ptr fs:[0], esp
// 005e7d25  51                   push ecx
// 005e7d26  56                   push esi
// 005e7d27  8bf1                 mov esi, ecx
// 005e7d29  83ec1c               sub esp, 0x1c
// 005e7d2c  8d442434             lea eax, [esp + 0x34]
// 005e7d30  89642420             mov dword ptr [esp + 0x20], esp
// 005e7d34  8bcc                 mov ecx, esp
// 005e7d36  50                   push eax
// 005e7d37  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005e7d3f  ff15c804a400         call dword ptr [0xa404c8]
// 005e7d45  8bce                 mov ecx, esi
// 005e7d47  e87444e4ff           call 0x42c1c0
// 005e7d4c  8d4c2418             lea ecx, [esp + 0x18]
// 005e7d50  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005e7d58  ff15d004a400         call dword ptr [0xa404d0]
// 005e7d5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e7d62  8bc6                 mov eax, esi
// 005e7d64  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7d6b  5e                   pop esi
// 005e7d6c  83c410               add esp, 0x10
// 005e7d6f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
