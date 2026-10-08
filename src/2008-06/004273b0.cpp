// roc 2008-06 004273b0  unit: CSelectionTreeCtrl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004273b0
//
// 004273b0  64a100000000         mov eax, dword ptr fs:[0]
// 004273b6  6aff                 push -1
// 004273b8  6808497d00           push 0x7d4908
// 004273bd  50                   push eax
// 004273be  64892500000000       mov dword ptr fs:[0], esp
// 004273c5  56                   push esi
// 004273c6  8bf1                 mov esi, ecx
// 004273c8  8d442414             lea eax, [esp + 0x14]
// 004273cc  50                   push eax
// 004273cd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004273d5  ff155c248000         call dword ptr [0x80245c]
// 004273db  8d4c2414             lea ecx, [esp + 0x14]
// 004273df  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004273e7  ff1568248000         call dword ptr [0x802468]
// 004273ed  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004273f1  8bc6                 mov eax, esi
// 004273f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004273fa  5e                   pop esi
// 004273fb  83c40c               add esp, 0xc
// 004273fe  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
