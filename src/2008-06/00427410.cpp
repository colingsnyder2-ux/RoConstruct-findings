// roc 2008-06 00427410  unit: CSelectionTreeCtrl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427410
//
// 00427410  6aff                 push -1
// 00427412  6808497d00           push 0x7d4908
// 00427417  64a100000000         mov eax, dword ptr fs:[0]
// 0042741d  50                   push eax
// 0042741e  64892500000000       mov dword ptr fs:[0], esp
// 00427425  51                   push ecx
// 00427426  56                   push esi
// 00427427  8bf1                 mov esi, ecx
// 00427429  83ec1c               sub esp, 0x1c
// 0042742c  8d442434             lea eax, [esp + 0x34]
// 00427430  89642420             mov dword ptr [esp + 0x20], esp
// 00427434  8bcc                 mov ecx, esp
// 00427436  50                   push eax
// 00427437  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0042743f  ff155c248000         call dword ptr [0x80245c]
// 00427445  8bce                 mov ecx, esi
// 00427447  e864ffffff           call 0x4273b0
// 0042744c  8d4c2418             lea ecx, [esp + 0x18]
// 00427450  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00427458  ff1568248000         call dword ptr [0x802468]
// 0042745e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00427462  8bc6                 mov eax, esi
// 00427464  64890d00000000       mov dword ptr fs:[0], ecx
// 0042746b  5e                   pop esi
// 0042746c  83c410               add esp, 0x10
// 0042746f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
