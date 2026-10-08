// roc 2009-06 00448020  unit: CRobloxModule  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00448020
//
// 00448020  6aff                 push -1
// 00448022  68381e8600           push 0x861e38
// 00448027  64a100000000         mov eax, dword ptr fs:[0]
// 0044802d  50                   push eax
// 0044802e  64892500000000       mov dword ptr fs:[0], esp
// 00448035  51                   push ecx
// 00448036  56                   push esi
// 00448037  8bf1                 mov esi, ecx
// 00448039  89742404             mov dword ptr [esp + 4], esi
// 0044803d  c7066c728b00         mov dword ptr [esi], 0x8b726c
// 00448043  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044804b  e8c00b0d00           call 0x518c10
// 00448050  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448054  c706c06a8b00         mov dword ptr [esi], 0x8b6ac0
// 0044805a  5e                   pop esi
// 0044805b  64890d00000000       mov dword ptr fs:[0], ecx
// 00448062  83c410               add esp, 0x10
// 00448065  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
