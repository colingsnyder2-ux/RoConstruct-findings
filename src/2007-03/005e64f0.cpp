// roc 2007-03 005e64f0  unit: seg_005e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e64f0
//
// 005e64f0  6aff                 push -1
// 005e64f2  685eca7500           push 0x75ca5e
// 005e64f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e64fd  50                   push eax
// 005e64fe  64892500000000       mov dword ptr fs:[0], esp
// 005e6505  83ec0c               sub esp, 0xc
// 005e6508  53                   push ebx
// 005e6509  56                   push esi
// 005e650a  8bf1                 mov esi, ecx
// 005e650c  33db                 xor ebx, ebx
// 005e650e  891e                 mov dword ptr [esi], ebx
// 005e6510  8974240c             mov dword ptr [esp + 0xc], esi
// 005e6514  895e04               mov dword ptr [esi + 4], ebx
// 005e6517  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e651b  8b10                 mov edx, dword ptr [eax]
// 005e651d  53                   push ebx
// 005e651e  83ec08               sub esp, 8
// 005e6521  8bcc                 mov ecx, esp
// 005e6523  8911                 mov dword ptr [ecx], edx
// 005e6525  8b4004               mov eax, dword ptr [eax + 4]
// 005e6528  3bc3                 cmp eax, ebx
// 005e652a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e652e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e6532  894104               mov dword ptr [ecx + 4], eax
// 005e6535  740c                 je 0x5e6543
// 005e6537  83c004               add eax, 4
// 005e653a  b901000000           mov ecx, 1
// 005e653f  f00fc108             lock xadd dword ptr [eax], ecx
// 005e6543  8d4e08               lea ecx, [esi + 8]
// 005e6546  e885fcffff           call 0x5e61d0
// 005e654b  6a20                 push 0x20
// 005e654d  c644242001           mov byte ptr [esp + 0x20], 1
// 005e6552  e8b17b0300           call 0x61e108
// 005e6557  83c404               add esp, 4
// 005e655a  3bc3                 cmp eax, ebx
// 005e655c  7414                 je 0x5e6572
// 005e655e  895804               mov dword ptr [eax + 4], ebx
// 005e6561  895808               mov dword ptr [eax + 8], ebx
// 005e6564  89580c               mov dword ptr [eax + 0xc], ebx
// 005e6567  895814               mov dword ptr [eax + 0x14], ebx
// 005e656a  895818               mov dword ptr [eax + 0x18], ebx
// 005e656d  88581c               mov byte ptr [eax + 0x1c], bl
// 005e6570  eb02                 jmp 0x5e6574
// 005e6572  33c0                 xor eax, eax
// 005e6574  50                   push eax
// 005e6575  8bce                 mov ecx, esi
// 005e6577  c644242001           mov byte ptr [esp + 0x20], 1
// 005e657c  e8ff30e3ff           call 0x419680
// 005e6581  8bce                 mov ecx, esi
// 005e6583  e8a8281400           call 0x728e30
// 005e6588  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e658c  8bc6                 mov eax, esi
// 005e658e  5e                   pop esi
// 005e658f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6596  5b                   pop ebx
// 005e6597  83c418               add esp, 0x18
// 005e659a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
