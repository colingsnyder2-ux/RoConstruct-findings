// roc 2008-06 0055b780  unit: RBX::VInstance::?$SignalDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055b780
//
// 0055b780  6aff                 push -1
// 0055b782  6800e57c00           push 0x7ce500
// 0055b787  64a100000000         mov eax, dword ptr fs:[0]
// 0055b78d  50                   push eax
// 0055b78e  64892500000000       mov dword ptr fs:[0], esp
// 0055b795  51                   push ecx
// 0055b796  56                   push esi
// 0055b797  8bf1                 mov esi, ecx
// 0055b799  33c0                 xor eax, eax
// 0055b79b  89742404             mov dword ptr [esp + 4], esi
// 0055b79f  894604               mov dword ptr [esi + 4], eax
// 0055b7a2  89442410             mov dword ptr [esp + 0x10], eax
// 0055b7a6  c605854c970001       mov byte ptr [0x974c85], 1
// 0055b7ad  e86ef5eaff           call 0x40ad20
// 0055b7b2  894608               mov dword ptr [esi + 8], eax
// 0055b7b5  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0055b7bd  e8bef5eaff           call 0x40ad80
// 0055b7c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055b7c6  894608               mov dword ptr [esi + 8], eax
// 0055b7c9  8bc6                 mov eax, esi
// 0055b7cb  5e                   pop esi
// 0055b7cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0055b7d3  83c410               add esp, 0x10
// 0055b7d6  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??0?$Described@VInstance@RBX@@$1?sInstance@2@3PBDBVDescribedBase@Reflection@2@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
