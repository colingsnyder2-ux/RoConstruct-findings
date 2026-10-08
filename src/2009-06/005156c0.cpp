// roc 2009-06 005156c0  unit: seg_00510000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005156c0
//
// 005156c0  6aff                 push -1
// 005156c2  68381e8600           push 0x861e38
// 005156c7  64a100000000         mov eax, dword ptr fs:[0]
// 005156cd  50                   push eax
// 005156ce  64892500000000       mov dword ptr fs:[0], esp
// 005156d5  51                   push ecx
// 005156d6  56                   push esi
// 005156d7  8bf1                 mov esi, ecx
// 005156d9  57                   push edi
// 005156da  89742408             mov dword ptr [esp + 8], esi
// 005156de  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005156e2  c7066c728b00         mov dword ptr [esi], 0x8b726c
// 005156e8  c7460400000000       mov dword ptr [esi + 4], 0
// 005156ef  8b7804               mov edi, dword ptr [eax + 4]
// 005156f2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005156fa  e811350000           call 0x518c10
// 005156ff  897e04               mov dword ptr [esi + 4], edi
// 00515702  85ff                 test edi, edi
// 00515704  7423                 je 0x515729
// 00515706  6a08                 push 8
// 00515708  e82b332000           call 0x718a38
// 0051570d  83c404               add esp, 4
// 00515710  85c0                 test eax, eax
// 00515712  740d                 je 0x515721
// 00515714  8b4e04               mov ecx, dword ptr [esi + 4]
// 00515717  8b4908               mov ecx, dword ptr [ecx + 8]
// 0051571a  8930                 mov dword ptr [eax], esi
// 0051571c  894804               mov dword ptr [eax + 4], ecx
// 0051571f  eb02                 jmp 0x515723
// 00515721  33c0                 xor eax, eax
// 00515723  8b5604               mov edx, dword ptr [esi + 4]
// 00515726  894208               mov dword ptr [edx + 8], eax
// 00515729  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051572d  5f                   pop edi
// 0051572e  8bc6                 mov eax, esi
// 00515730  5e                   pop esi
// 00515731  64890d00000000       mov dword ptr fs:[0], ecx
// 00515738  83c410               add esp, 0x10
// 0051573b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
