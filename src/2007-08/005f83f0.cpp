// roc 2007-08 005f83f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f83f0
//
// 005f83f0  6aff                 push -1
// 005f83f2  685e167500           push 0x75165e
// 005f83f7  64a100000000         mov eax, dword ptr fs:[0]
// 005f83fd  50                   push eax
// 005f83fe  64892500000000       mov dword ptr fs:[0], esp
// 005f8405  83ec0c               sub esp, 0xc
// 005f8408  53                   push ebx
// 005f8409  56                   push esi
// 005f840a  8bf1                 mov esi, ecx
// 005f840c  33db                 xor ebx, ebx
// 005f840e  891e                 mov dword ptr [esi], ebx
// 005f8410  8974240c             mov dword ptr [esp + 0xc], esi
// 005f8414  895e04               mov dword ptr [esi + 4], ebx
// 005f8417  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f841b  8b10                 mov edx, dword ptr [eax]
// 005f841d  53                   push ebx
// 005f841e  83ec08               sub esp, 8
// 005f8421  8bcc                 mov ecx, esp
// 005f8423  8911                 mov dword ptr [ecx], edx
// 005f8425  8b4004               mov eax, dword ptr [eax + 4]
// 005f8428  3bc3                 cmp eax, ebx
// 005f842a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f842e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005f8432  894104               mov dword ptr [ecx + 4], eax
// 005f8435  740c                 je 0x5f8443
// 005f8437  83c004               add eax, 4
// 005f843a  b901000000           mov ecx, 1
// 005f843f  f00fc108             lock xadd dword ptr [eax], ecx
// 005f8443  8d4e08               lea ecx, [esi + 8]
// 005f8446  e865fcffff           call 0x5f80b0
// 005f844b  6a20                 push 0x20
// 005f844d  c644242001           mov byte ptr [esp + 0x20], 1
// 005f8452  e89f7a0300           call 0x62fef6
// 005f8457  83c404               add esp, 4
// 005f845a  3bc3                 cmp eax, ebx
// 005f845c  7414                 je 0x5f8472
// 005f845e  895804               mov dword ptr [eax + 4], ebx
// 005f8461  895808               mov dword ptr [eax + 8], ebx
// 005f8464  89580c               mov dword ptr [eax + 0xc], ebx
// 005f8467  895814               mov dword ptr [eax + 0x14], ebx
// 005f846a  895818               mov dword ptr [eax + 0x18], ebx
// 005f846d  88581c               mov byte ptr [eax + 0x1c], bl
// 005f8470  eb02                 jmp 0x5f8474
// 005f8472  33c0                 xor eax, eax
// 005f8474  50                   push eax
// 005f8475  8bce                 mov ecx, esi
// 005f8477  c644242001           mov byte ptr [esp + 0x20], 1
// 005f847c  e82ffde1ff           call 0x4181b0
// 005f8481  8bce                 mov ecx, esi
// 005f8483  e8a8031300           call 0x728830
// 005f8488  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f848c  8bc6                 mov eax, esi
// 005f848e  5e                   pop esi
// 005f848f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8496  5b                   pop ebx
// 005f8497  83c418               add esp, 0x18
// 005f849a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
