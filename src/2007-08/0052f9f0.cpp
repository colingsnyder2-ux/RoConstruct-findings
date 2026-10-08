// roc 2007-08 0052f9f0  unit: RBX::VRunService::?$BoundFuncDesc  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f9f0
//
// 0052f9f0  6aff                 push -1
// 0052f9f2  685e167500           push 0x75165e
// 0052f9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0052f9fd  50                   push eax
// 0052f9fe  64892500000000       mov dword ptr fs:[0], esp
// 0052fa05  83ec0c               sub esp, 0xc
// 0052fa08  53                   push ebx
// 0052fa09  56                   push esi
// 0052fa0a  8bf1                 mov esi, ecx
// 0052fa0c  33db                 xor ebx, ebx
// 0052fa0e  891e                 mov dword ptr [esi], ebx
// 0052fa10  8974240c             mov dword ptr [esp + 0xc], esi
// 0052fa14  895e04               mov dword ptr [esi + 4], ebx
// 0052fa17  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052fa1b  8b10                 mov edx, dword ptr [eax]
// 0052fa1d  53                   push ebx
// 0052fa1e  83ec08               sub esp, 8
// 0052fa21  8bcc                 mov ecx, esp
// 0052fa23  8911                 mov dword ptr [ecx], edx
// 0052fa25  8b4004               mov eax, dword ptr [eax + 4]
// 0052fa28  3bc3                 cmp eax, ebx
// 0052fa2a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0052fa2e  8964241c             mov dword ptr [esp + 0x1c], esp
// 0052fa32  894104               mov dword ptr [ecx + 4], eax
// 0052fa35  740c                 je 0x52fa43
// 0052fa37  83c004               add eax, 4
// 0052fa3a  b901000000           mov ecx, 1
// 0052fa3f  f00fc108             lock xadd dword ptr [eax], ecx
// 0052fa43  8d4e08               lea ecx, [esi + 8]
// 0052fa46  e805ffffff           call 0x52f950
// 0052fa4b  6a20                 push 0x20
// 0052fa4d  c644242001           mov byte ptr [esp + 0x20], 1
// 0052fa52  e89f041000           call 0x62fef6
// 0052fa57  83c404               add esp, 4
// 0052fa5a  3bc3                 cmp eax, ebx
// 0052fa5c  7414                 je 0x52fa72
// 0052fa5e  895804               mov dword ptr [eax + 4], ebx
// 0052fa61  895808               mov dword ptr [eax + 8], ebx
// 0052fa64  89580c               mov dword ptr [eax + 0xc], ebx
// 0052fa67  895814               mov dword ptr [eax + 0x14], ebx
// 0052fa6a  895818               mov dword ptr [eax + 0x18], ebx
// 0052fa6d  88581c               mov byte ptr [eax + 0x1c], bl
// 0052fa70  eb02                 jmp 0x52fa74
// 0052fa72  33c0                 xor eax, eax
// 0052fa74  50                   push eax
// 0052fa75  8bce                 mov ecx, esi
// 0052fa77  c644242001           mov byte ptr [esp + 0x20], 1
// 0052fa7c  e82f87eeff           call 0x4181b0
// 0052fa81  8bce                 mov ecx, esi
// 0052fa83  e8a88d1f00           call 0x728830
// 0052fa88  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052fa8c  8bc6                 mov eax, esi
// 0052fa8e  5e                   pop esi
// 0052fa8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052fa96  5b                   pop ebx
// 0052fa97  83c418               add esp, 0x18
// 0052fa9a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
