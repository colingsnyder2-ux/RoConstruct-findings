// roc 2008-06 0041d4b0  unit: VDHTMLWindow::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041d4b0
//
// 0041d4b0  6aff                 push -1
// 0041d4b2  68496b7c00           push 0x7c6b49
// 0041d4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0041d4bd  50                   push eax
// 0041d4be  64892500000000       mov dword ptr fs:[0], esp
// 0041d4c5  51                   push ecx
// 0041d4c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041d4ca  56                   push esi
// 0041d4cb  8bf1                 mov esi, ecx
// 0041d4cd  50                   push eax
// 0041d4ce  89742408             mov dword ptr [esp + 8], esi
// 0041d4d2  ff155c248000         call dword ptr [0x80245c]
// 0041d4d8  8d4e1c               lea ecx, [esi + 0x1c]
// 0041d4db  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041d4e3  ff1560248000         call dword ptr [0x802460]
// 0041d4e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041d4ed  8bc6                 mov eax, esi
// 0041d4ef  5e                   pop esi
// 0041d4f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d4f7  83c410               add esp, 0x10
// 0041d4fa  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0Http@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
