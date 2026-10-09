// roc 2007-03 00533760  unit: seg_00530000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533760
//
// 00533760  6aff                 push -1
// 00533762  685eca7500           push 0x75ca5e
// 00533767  64a100000000         mov eax, dword ptr fs:[0]
// 0053376d  50                   push eax
// 0053376e  64892500000000       mov dword ptr fs:[0], esp
// 00533775  83ec0c               sub esp, 0xc
// 00533778  53                   push ebx
// 00533779  56                   push esi
// 0053377a  8bf1                 mov esi, ecx
// 0053377c  33db                 xor ebx, ebx
// 0053377e  891e                 mov dword ptr [esi], ebx
// 00533780  8974240c             mov dword ptr [esp + 0xc], esi
// 00533784  895e04               mov dword ptr [esi + 4], ebx
// 00533787  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053378b  8b10                 mov edx, dword ptr [eax]
// 0053378d  53                   push ebx
// 0053378e  83ec08               sub esp, 8
// 00533791  8bcc                 mov ecx, esp
// 00533793  8911                 mov dword ptr [ecx], edx
// 00533795  8b4004               mov eax, dword ptr [eax + 4]
// 00533798  3bc3                 cmp eax, ebx
// 0053379a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0053379e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005337a2  894104               mov dword ptr [ecx + 4], eax
// 005337a5  740c                 je 0x5337b3
// 005337a7  83c004               add eax, 4
// 005337aa  b901000000           mov ecx, 1
// 005337af  f00fc108             lock xadd dword ptr [eax], ecx
// 005337b3  8d4e08               lea ecx, [esi + 8]
// 005337b6  e865feffff           call 0x533620
// 005337bb  6a20                 push 0x20
// 005337bd  c644242001           mov byte ptr [esp + 0x20], 1
// 005337c2  e841a90e00           call 0x61e108
// 005337c7  83c404               add esp, 4
// 005337ca  3bc3                 cmp eax, ebx
// 005337cc  7414                 je 0x5337e2
// 005337ce  895804               mov dword ptr [eax + 4], ebx
// 005337d1  895808               mov dword ptr [eax + 8], ebx
// 005337d4  89580c               mov dword ptr [eax + 0xc], ebx
// 005337d7  895814               mov dword ptr [eax + 0x14], ebx
// 005337da  895818               mov dword ptr [eax + 0x18], ebx
// 005337dd  88581c               mov byte ptr [eax + 0x1c], bl
// 005337e0  eb02                 jmp 0x5337e4
// 005337e2  33c0                 xor eax, eax
// 005337e4  50                   push eax
// 005337e5  8bce                 mov ecx, esi
// 005337e7  c644242001           mov byte ptr [esp + 0x20], 1
// 005337ec  e88f5eeeff           call 0x419680
// 005337f1  8bce                 mov ecx, esi
// 005337f3  e838561f00           call 0x728e30
// 005337f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005337fc  8bc6                 mov eax, esi
// 005337fe  5e                   pop esi
// 005337ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00533806  5b                   pop ebx
// 00533807  83c418               add esp, 0x18
// 0053380a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
