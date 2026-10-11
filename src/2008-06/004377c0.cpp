// roc 2008-06 004377c0  unit: CStandardOutputView  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004377c0
//
// 004377c0  6aff                 push -1
// 004377c2  68496b7c00           push 0x7c6b49
// 004377c7  64a100000000         mov eax, dword ptr fs:[0]
// 004377cd  50                   push eax
// 004377ce  64892500000000       mov dword ptr fs:[0], esp
// 004377d5  51                   push ecx
// 004377d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004377da  56                   push esi
// 004377db  8bf1                 mov esi, ecx
// 004377dd  50                   push eax
// 004377de  89742408             mov dword ptr [esp + 8], esi
// 004377e2  ff1558248000         call dword ptr [0x802458]
// 004377e8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004377f0  e87bca1100           call 0x554270
// 004377f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004377f9  89461c               mov dword ptr [esi + 0x1c], eax
// 004377fc  8bc6                 mov eax, esi
// 004377fe  5e                   pop esi
// 004377ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00437806  83c410               add esp, 0x10
// 00437809  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
