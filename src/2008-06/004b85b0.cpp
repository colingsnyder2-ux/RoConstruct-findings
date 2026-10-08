// roc 2008-06 004b85b0  unit: RBX::Network::VReplicator::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b85b0
//
// 004b85b0  6aff                 push -1
// 004b85b2  68688c7c00           push 0x7c8c68
// 004b85b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b85bd  50                   push eax
// 004b85be  64892500000000       mov dword ptr fs:[0], esp
// 004b85c5  51                   push ecx
// 004b85c6  56                   push esi
// 004b85c7  8bf1                 mov esi, ecx
// 004b85c9  33c0                 xor eax, eax
// 004b85cb  89742404             mov dword ptr [esp + 4], esi
// 004b85cf  894604               mov dword ptr [esi + 4], eax
// 004b85d2  89442410             mov dword ptr [esp + 0x10], eax
// 004b85d6  c605854c970001       mov byte ptr [0x974c85], 1
// 004b85dd  e83e27f5ff           call 0x40ad20
// 004b85e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b85e6  894608               mov dword ptr [esi + 8], eax
// 004b85e9  c706e8518200         mov dword ptr [esi], 0x8251e8
// 004b85ef  8bc6                 mov eax, esi
// 004b85f1  5e                   pop esi
// 004b85f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b85f9  83c410               add esp, 0x10
// 004b85fc  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??0?$NonFactoryProduct@VDescribedBase@Reflection@RBX@@$1?sMarker@Network@3@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
