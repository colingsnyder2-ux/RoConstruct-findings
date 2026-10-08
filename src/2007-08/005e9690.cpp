// roc 2007-08 005e9690  unit: RBX::Explosion  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9690
//
// 005e9690  6aff                 push -1
// 005e9692  685e167500           push 0x75165e
// 005e9697  64a100000000         mov eax, dword ptr fs:[0]
// 005e969d  50                   push eax
// 005e969e  64892500000000       mov dword ptr fs:[0], esp
// 005e96a5  83ec0c               sub esp, 0xc
// 005e96a8  53                   push ebx
// 005e96a9  56                   push esi
// 005e96aa  8bf1                 mov esi, ecx
// 005e96ac  33db                 xor ebx, ebx
// 005e96ae  891e                 mov dword ptr [esi], ebx
// 005e96b0  8974240c             mov dword ptr [esp + 0xc], esi
// 005e96b4  895e04               mov dword ptr [esi + 4], ebx
// 005e96b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e96bb  8b10                 mov edx, dword ptr [eax]
// 005e96bd  53                   push ebx
// 005e96be  83ec08               sub esp, 8
// 005e96c1  8bcc                 mov ecx, esp
// 005e96c3  8911                 mov dword ptr [ecx], edx
// 005e96c5  8b4004               mov eax, dword ptr [eax + 4]
// 005e96c8  3bc3                 cmp eax, ebx
// 005e96ca  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e96ce  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e96d2  894104               mov dword ptr [ecx + 4], eax
// 005e96d5  740c                 je 0x5e96e3
// 005e96d7  83c004               add eax, 4
// 005e96da  b901000000           mov ecx, 1
// 005e96df  f00fc108             lock xadd dword ptr [eax], ecx
// 005e96e3  8d4e08               lea ecx, [esi + 8]
// 005e96e6  e805ffffff           call 0x5e95f0
// 005e96eb  6a20                 push 0x20
// 005e96ed  c644242001           mov byte ptr [esp + 0x20], 1
// 005e96f2  e8ff670400           call 0x62fef6
// 005e96f7  83c404               add esp, 4
// 005e96fa  3bc3                 cmp eax, ebx
// 005e96fc  7414                 je 0x5e9712
// 005e96fe  895804               mov dword ptr [eax + 4], ebx
// 005e9701  895808               mov dword ptr [eax + 8], ebx
// 005e9704  89580c               mov dword ptr [eax + 0xc], ebx
// 005e9707  895814               mov dword ptr [eax + 0x14], ebx
// 005e970a  895818               mov dword ptr [eax + 0x18], ebx
// 005e970d  88581c               mov byte ptr [eax + 0x1c], bl
// 005e9710  eb02                 jmp 0x5e9714
// 005e9712  33c0                 xor eax, eax
// 005e9714  50                   push eax
// 005e9715  8bce                 mov ecx, esi
// 005e9717  c644242001           mov byte ptr [esp + 0x20], 1
// 005e971c  e88feae2ff           call 0x4181b0
// 005e9721  8bce                 mov ecx, esi
// 005e9723  e808f11300           call 0x728830
// 005e9728  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e972c  8bc6                 mov eax, esi
// 005e972e  5e                   pop esi
// 005e972f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9736  5b                   pop ebx
// 005e9737  83c418               add esp, 0x18
// 005e973a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
