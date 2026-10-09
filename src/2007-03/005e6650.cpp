// roc 2007-03 005e6650  unit: seg_005e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6650
//
// 005e6650  6aff                 push -1
// 005e6652  685eca7500           push 0x75ca5e
// 005e6657  64a100000000         mov eax, dword ptr fs:[0]
// 005e665d  50                   push eax
// 005e665e  64892500000000       mov dword ptr fs:[0], esp
// 005e6665  83ec0c               sub esp, 0xc
// 005e6668  53                   push ebx
// 005e6669  56                   push esi
// 005e666a  8bf1                 mov esi, ecx
// 005e666c  33db                 xor ebx, ebx
// 005e666e  891e                 mov dword ptr [esi], ebx
// 005e6670  8974240c             mov dword ptr [esp + 0xc], esi
// 005e6674  895e04               mov dword ptr [esi + 4], ebx
// 005e6677  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e667b  8b10                 mov edx, dword ptr [eax]
// 005e667d  53                   push ebx
// 005e667e  83ec08               sub esp, 8
// 005e6681  8bcc                 mov ecx, esp
// 005e6683  8911                 mov dword ptr [ecx], edx
// 005e6685  8b4004               mov eax, dword ptr [eax + 4]
// 005e6688  3bc3                 cmp eax, ebx
// 005e668a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e668e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e6692  894104               mov dword ptr [ecx + 4], eax
// 005e6695  740c                 je 0x5e66a3
// 005e6697  83c004               add eax, 4
// 005e669a  b901000000           mov ecx, 1
// 005e669f  f00fc108             lock xadd dword ptr [eax], ecx
// 005e66a3  8d4e08               lea ecx, [esi + 8]
// 005e66a6  e865fcffff           call 0x5e6310
// 005e66ab  6a20                 push 0x20
// 005e66ad  c644242001           mov byte ptr [esp + 0x20], 1
// 005e66b2  e8517a0300           call 0x61e108
// 005e66b7  83c404               add esp, 4
// 005e66ba  3bc3                 cmp eax, ebx
// 005e66bc  7414                 je 0x5e66d2
// 005e66be  895804               mov dword ptr [eax + 4], ebx
// 005e66c1  895808               mov dword ptr [eax + 8], ebx
// 005e66c4  89580c               mov dword ptr [eax + 0xc], ebx
// 005e66c7  895814               mov dword ptr [eax + 0x14], ebx
// 005e66ca  895818               mov dword ptr [eax + 0x18], ebx
// 005e66cd  88581c               mov byte ptr [eax + 0x1c], bl
// 005e66d0  eb02                 jmp 0x5e66d4
// 005e66d2  33c0                 xor eax, eax
// 005e66d4  50                   push eax
// 005e66d5  8bce                 mov ecx, esi
// 005e66d7  c644242001           mov byte ptr [esp + 0x20], 1
// 005e66dc  e89f2fe3ff           call 0x419680
// 005e66e1  8bce                 mov ecx, esi
// 005e66e3  e848271400           call 0x728e30
// 005e66e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e66ec  8bc6                 mov eax, esi
// 005e66ee  5e                   pop esi
// 005e66ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005e66f6  5b                   pop ebx
// 005e66f7  83c418               add esp, 0x18
// 005e66fa  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
