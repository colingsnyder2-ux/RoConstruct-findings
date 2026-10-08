// roc 2009-06 00422010  unit: CSelectionTreeCtrl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00422010
//
// 00422010  64a100000000         mov eax, dword ptr fs:[0]
// 00422016  6aff                 push -1
// 00422018  68b8ac8600           push 0x86acb8
// 0042201d  50                   push eax
// 0042201e  64892500000000       mov dword ptr fs:[0], esp
// 00422025  56                   push esi
// 00422026  8bf1                 mov esi, ecx
// 00422028  8d442414             lea eax, [esp + 0x14]
// 0042202c  50                   push eax
// 0042202d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00422035  ff15b8e48900         call dword ptr [0x89e4b8]
// 0042203b  8d4c2414             lea ecx, [esp + 0x14]
// 0042203f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00422047  ff15c4e48900         call dword ptr [0x89e4c4]
// 0042204d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00422051  8bc6                 mov eax, esi
// 00422053  64890d00000000       mov dword ptr fs:[0], ecx
// 0042205a  5e                   pop esi
// 0042205b  83c40c               add esp, 0xc
// 0042205e  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
