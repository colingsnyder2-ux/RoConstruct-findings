// roc 2009-12 00422c10  unit: RBX::Kernel  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00422c10
//
// 00422c10  64a100000000         mov eax, dword ptr fs:[0]
// 00422c16  6aff                 push -1
// 00422c18  68a8969400           push 0x9496a8
// 00422c1d  50                   push eax
// 00422c1e  64892500000000       mov dword ptr fs:[0], esp
// 00422c25  56                   push esi
// 00422c26  8bf1                 mov esi, ecx
// 00422c28  8d442414             lea eax, [esp + 0x14]
// 00422c2c  50                   push eax
// 00422c2d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00422c35  ff15f0b69800         call dword ptr [0x98b6f0]
// 00422c3b  8d4c2414             lea ecx, [esp + 0x14]
// 00422c3f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00422c47  ff15e4b69800         call dword ptr [0x98b6e4]
// 00422c4d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00422c51  8bc6                 mov eax, esi
// 00422c53  64890d00000000       mov dword ptr fs:[0], ecx
// 00422c5a  5e                   pop esi
// 00422c5b  83c40c               add esp, 0xc
// 00422c5e  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
