// roc 2008-06 004d2570  unit: seg_004d0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d2570
//
// 004d2570  6aff                 push -1
// 004d2572  68389b7c00           push 0x7c9b38
// 004d2577  64a100000000         mov eax, dword ptr fs:[0]
// 004d257d  50                   push eax
// 004d257e  64892500000000       mov dword ptr fs:[0], esp
// 004d2585  51                   push ecx
// 004d2586  56                   push esi
// 004d2587  8bf1                 mov esi, ecx
// 004d2589  89742404             mov dword ptr [esp + 4], esi
// 004d258d  837e1400             cmp dword ptr [esi + 0x14], 0
// 004d2591  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d2599  7413                 je 0x4d25ae
// 004d259b  e890e6ffff           call 0x4d0c30
// 004d25a0  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004d25a7  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004d25ae  8bce                 mov ecx, esi
// 004d25b0  e82bcdffff           call 0x4cf2e0
// 004d25b5  8bce                 mov ecx, esi
// 004d25b7  e824cdffff           call 0x4cf2e0
// 004d25bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d25c0  5e                   pop esi
// 004d25c1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d25c8  83c410               add esp, 0x10
// 004d25cb  c3                   ret 
// library rbxgs-raknet/DS_Table.cpp (function ??1?$BPlusTree@IPAURow@Table@DataStructures@@$0BA@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
