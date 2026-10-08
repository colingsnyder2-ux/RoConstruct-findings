// roc 2010-06 00423070  unit: CSelectionTreeCtrl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00423070
//
// 00423070  64a100000000         mov eax, dword ptr fs:[0]
// 00423076  6aff                 push -1
// 00423078  6888b69900           push 0x99b688
// 0042307d  50                   push eax
// 0042307e  64892500000000       mov dword ptr fs:[0], esp
// 00423085  56                   push esi
// 00423086  8bf1                 mov esi, ecx
// 00423088  8d442414             lea eax, [esp + 0x14]
// 0042308c  50                   push eax
// 0042308d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00423095  ff150ca49e00         call dword ptr [0x9ea40c]
// 0042309b  8d4c2414             lea ecx, [esp + 0x14]
// 0042309f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004230a7  ff1500a49e00         call dword ptr [0x9ea400]
// 004230ad  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004230b1  8bc6                 mov eax, esi
// 004230b3  64890d00000000       mov dword ptr fs:[0], ecx
// 004230ba  5e                   pop esi
// 004230bb  83c40c               add esp, 0xc
// 004230be  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
