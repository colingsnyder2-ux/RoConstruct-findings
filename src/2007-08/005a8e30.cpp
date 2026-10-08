// roc 2007-08 005a8e30  unit: RBX::VHumanoid::?$BoundPropGetSet  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8e30
//
// 005a8e30  6aff                 push -1
// 005a8e32  685e167500           push 0x75165e
// 005a8e37  64a100000000         mov eax, dword ptr fs:[0]
// 005a8e3d  50                   push eax
// 005a8e3e  64892500000000       mov dword ptr fs:[0], esp
// 005a8e45  83ec0c               sub esp, 0xc
// 005a8e48  53                   push ebx
// 005a8e49  56                   push esi
// 005a8e4a  8bf1                 mov esi, ecx
// 005a8e4c  33db                 xor ebx, ebx
// 005a8e4e  891e                 mov dword ptr [esi], ebx
// 005a8e50  8974240c             mov dword ptr [esp + 0xc], esi
// 005a8e54  895e04               mov dword ptr [esi + 4], ebx
// 005a8e57  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a8e5b  8b10                 mov edx, dword ptr [eax]
// 005a8e5d  53                   push ebx
// 005a8e5e  83ec08               sub esp, 8
// 005a8e61  8bcc                 mov ecx, esp
// 005a8e63  8911                 mov dword ptr [ecx], edx
// 005a8e65  8b4004               mov eax, dword ptr [eax + 4]
// 005a8e68  3bc3                 cmp eax, ebx
// 005a8e6a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005a8e6e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005a8e72  894104               mov dword ptr [ecx + 4], eax
// 005a8e75  740c                 je 0x5a8e83
// 005a8e77  83c004               add eax, 4
// 005a8e7a  b901000000           mov ecx, 1
// 005a8e7f  f00fc108             lock xadd dword ptr [eax], ecx
// 005a8e83  8d4e08               lea ecx, [esi + 8]
// 005a8e86  e805ffffff           call 0x5a8d90
// 005a8e8b  6a20                 push 0x20
// 005a8e8d  c644242001           mov byte ptr [esp + 0x20], 1
// 005a8e92  e85f700800           call 0x62fef6
// 005a8e97  83c404               add esp, 4
// 005a8e9a  3bc3                 cmp eax, ebx
// 005a8e9c  7414                 je 0x5a8eb2
// 005a8e9e  895804               mov dword ptr [eax + 4], ebx
// 005a8ea1  895808               mov dword ptr [eax + 8], ebx
// 005a8ea4  89580c               mov dword ptr [eax + 0xc], ebx
// 005a8ea7  895814               mov dword ptr [eax + 0x14], ebx
// 005a8eaa  895818               mov dword ptr [eax + 0x18], ebx
// 005a8ead  88581c               mov byte ptr [eax + 0x1c], bl
// 005a8eb0  eb02                 jmp 0x5a8eb4
// 005a8eb2  33c0                 xor eax, eax
// 005a8eb4  50                   push eax
// 005a8eb5  8bce                 mov ecx, esi
// 005a8eb7  c644242001           mov byte ptr [esp + 0x20], 1
// 005a8ebc  e8eff2e6ff           call 0x4181b0
// 005a8ec1  8bce                 mov ecx, esi
// 005a8ec3  e868f91700           call 0x728830
// 005a8ec8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a8ecc  8bc6                 mov eax, esi
// 005a8ece  5e                   pop esi
// 005a8ecf  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8ed6  5b                   pop ebx
// 005a8ed7  83c418               add esp, 0x18
// 005a8eda  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
