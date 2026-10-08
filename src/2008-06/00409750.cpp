// roc 2008-06 00409750  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409750
//
// 00409750  6aff                 push -1
// 00409752  68496b7c00           push 0x7c6b49
// 00409757  64a100000000         mov eax, dword ptr fs:[0]
// 0040975d  50                   push eax
// 0040975e  64892500000000       mov dword ptr fs:[0], esp
// 00409765  51                   push ecx
// 00409766  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040976a  56                   push esi
// 0040976b  8bf1                 mov esi, ecx
// 0040976d  50                   push eax
// 0040976e  89742408             mov dword ptr [esp + 8], esi
// 00409772  ff1558248000         call dword ptr [0x802458]
// 00409778  8d4e1c               lea ecx, [esi + 0x1c]
// 0040977b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409783  ff1560248000         call dword ptr [0x802460]
// 00409789  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040978d  8bc6                 mov eax, esi
// 0040978f  5e                   pop esi
// 00409790  64890d00000000       mov dword ptr fs:[0], ecx
// 00409797  83c410               add esp, 0x10
// 0040979a  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0Http@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
