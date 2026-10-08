// roc 2012-06 00430b90  unit: CSelectionTreeCtrl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00430b90
//
// 00430b90  64a100000000         mov eax, dword ptr fs:[0]
// 00430b96  6aff                 push -1
// 00430b98  68a818ac00           push 0xac18a8
// 00430b9d  50                   push eax
// 00430b9e  64892500000000       mov dword ptr fs:[0], esp
// 00430ba5  56                   push esi
// 00430ba6  8bf1                 mov esi, ecx
// 00430ba8  8d442414             lea eax, [esp + 0x14]
// 00430bac  50                   push eax
// 00430bad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00430bb5  ff154426b200         call dword ptr [0xb22644]
// 00430bbb  8d4c2414             lea ecx, [esp + 0x14]
// 00430bbf  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00430bc7  ff153c26b200         call dword ptr [0xb2263c]
// 00430bcd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430bd1  8bc6                 mov eax, esi
// 00430bd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00430bda  5e                   pop esi
// 00430bdb  83c40c               add esp, 0xc
// 00430bde  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
