// roc 2008-06 004b9140  unit: RBX::Network::Replicator  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9140
//
// 004b9140  6aff                 push -1
// 004b9142  68188d7c00           push 0x7c8d18
// 004b9147  64a100000000         mov eax, dword ptr fs:[0]
// 004b914d  50                   push eax
// 004b914e  64892500000000       mov dword ptr fs:[0], esp
// 004b9155  51                   push ecx
// 004b9156  56                   push esi
// 004b9157  8bf1                 mov esi, ecx
// 004b9159  89742404             mov dword ptr [esp + 4], esi
// 004b915d  e84ef4ffff           call 0x4b85b0
// 004b9162  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b916a  e86187ffff           call 0x4b18d0
// 004b916f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9173  894608               mov dword ptr [esi + 8], eax
// 004b9176  c7069c528200         mov dword ptr [esi], 0x82529c
// 004b917c  c6460c00             mov byte ptr [esi + 0xc], 0
// 004b9180  8bc6                 mov eax, esi
// 004b9182  5e                   pop esi
// 004b9183  64890d00000000       mov dword ptr fs:[0], ecx
// 004b918a  83c410               add esp, 0x10
// 004b918d  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??0Marker@Network@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
