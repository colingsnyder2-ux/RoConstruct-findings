// roc 2007-03 0059b050  unit: seg_00590000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059b050
//
// 0059b050  6aff                 push -1
// 0059b052  685eca7500           push 0x75ca5e
// 0059b057  64a100000000         mov eax, dword ptr fs:[0]
// 0059b05d  50                   push eax
// 0059b05e  64892500000000       mov dword ptr fs:[0], esp
// 0059b065  83ec0c               sub esp, 0xc
// 0059b068  53                   push ebx
// 0059b069  56                   push esi
// 0059b06a  8bf1                 mov esi, ecx
// 0059b06c  33db                 xor ebx, ebx
// 0059b06e  891e                 mov dword ptr [esi], ebx
// 0059b070  8974240c             mov dword ptr [esp + 0xc], esi
// 0059b074  895e04               mov dword ptr [esi + 4], ebx
// 0059b077  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059b07b  8b10                 mov edx, dword ptr [eax]
// 0059b07d  53                   push ebx
// 0059b07e  83ec08               sub esp, 8
// 0059b081  8bcc                 mov ecx, esp
// 0059b083  8911                 mov dword ptr [ecx], edx
// 0059b085  8b4004               mov eax, dword ptr [eax + 4]
// 0059b088  3bc3                 cmp eax, ebx
// 0059b08a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0059b08e  8964241c             mov dword ptr [esp + 0x1c], esp
// 0059b092  894104               mov dword ptr [ecx + 4], eax
// 0059b095  740c                 je 0x59b0a3
// 0059b097  83c004               add eax, 4
// 0059b09a  b901000000           mov ecx, 1
// 0059b09f  f00fc108             lock xadd dword ptr [eax], ecx
// 0059b0a3  8d4e08               lea ecx, [esi + 8]
// 0059b0a6  e835fdffff           call 0x59ade0
// 0059b0ab  6a20                 push 0x20
// 0059b0ad  c644242001           mov byte ptr [esp + 0x20], 1
// 0059b0b2  e851300800           call 0x61e108
// 0059b0b7  83c404               add esp, 4
// 0059b0ba  3bc3                 cmp eax, ebx
// 0059b0bc  7414                 je 0x59b0d2
// 0059b0be  895804               mov dword ptr [eax + 4], ebx
// 0059b0c1  895808               mov dword ptr [eax + 8], ebx
// 0059b0c4  89580c               mov dword ptr [eax + 0xc], ebx
// 0059b0c7  895814               mov dword ptr [eax + 0x14], ebx
// 0059b0ca  895818               mov dword ptr [eax + 0x18], ebx
// 0059b0cd  88581c               mov byte ptr [eax + 0x1c], bl
// 0059b0d0  eb02                 jmp 0x59b0d4
// 0059b0d2  33c0                 xor eax, eax
// 0059b0d4  50                   push eax
// 0059b0d5  8bce                 mov ecx, esi
// 0059b0d7  c644242001           mov byte ptr [esp + 0x20], 1
// 0059b0dc  e89fe5e7ff           call 0x419680
// 0059b0e1  8bce                 mov ecx, esi
// 0059b0e3  e848dd1800           call 0x728e30
// 0059b0e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059b0ec  8bc6                 mov eax, esi
// 0059b0ee  5e                   pop esi
// 0059b0ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b0f6  5b                   pop ebx
// 0059b0f7  83c418               add esp, 0x18
// 0059b0fa  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
