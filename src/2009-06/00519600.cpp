// roc 2009-06 00519600  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519600
//
// 00519600  6aff                 push -1
// 00519602  68381e8600           push 0x861e38
// 00519607  64a100000000         mov eax, dword ptr fs:[0]
// 0051960d  50                   push eax
// 0051960e  64892500000000       mov dword ptr fs:[0], esp
// 00519615  51                   push ecx
// 00519616  56                   push esi
// 00519617  8bf1                 mov esi, ecx
// 00519619  89742404             mov dword ptr [esp + 4], esi
// 0051961d  c706449d8c00         mov dword ptr [esi], 0x8c9d44
// 00519623  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0051962b  e8e0f5ffff           call 0x518c10
// 00519630  f644241801           test byte ptr [esp + 0x18], 1
// 00519635  c706c06a8b00         mov dword ptr [esi], 0x8b6ac0
// 0051963b  7409                 je 0x519646
// 0051963d  56                   push esi
// 0051963e  e8eff31f00           call 0x718a32
// 00519643  83c404               add esp, 4
// 00519646  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051964a  8bc6                 mov eax, esi
// 0051964c  5e                   pop esi
// 0051964d  64890d00000000       mov dword ptr fs:[0], ecx
// 00519654  83c410               add esp, 0x10
// 00519657  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
