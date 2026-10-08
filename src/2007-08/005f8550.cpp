// roc 2007-08 005f8550  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8550
//
// 005f8550  6aff                 push -1
// 005f8552  685e167500           push 0x75165e
// 005f8557  64a100000000         mov eax, dword ptr fs:[0]
// 005f855d  50                   push eax
// 005f855e  64892500000000       mov dword ptr fs:[0], esp
// 005f8565  83ec0c               sub esp, 0xc
// 005f8568  53                   push ebx
// 005f8569  56                   push esi
// 005f856a  8bf1                 mov esi, ecx
// 005f856c  33db                 xor ebx, ebx
// 005f856e  891e                 mov dword ptr [esi], ebx
// 005f8570  8974240c             mov dword ptr [esp + 0xc], esi
// 005f8574  895e04               mov dword ptr [esi + 4], ebx
// 005f8577  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f857b  8b10                 mov edx, dword ptr [eax]
// 005f857d  53                   push ebx
// 005f857e  83ec08               sub esp, 8
// 005f8581  8bcc                 mov ecx, esp
// 005f8583  8911                 mov dword ptr [ecx], edx
// 005f8585  8b4004               mov eax, dword ptr [eax + 4]
// 005f8588  3bc3                 cmp eax, ebx
// 005f858a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f858e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005f8592  894104               mov dword ptr [ecx + 4], eax
// 005f8595  740c                 je 0x5f85a3
// 005f8597  83c004               add eax, 4
// 005f859a  b901000000           mov ecx, 1
// 005f859f  f00fc108             lock xadd dword ptr [eax], ecx
// 005f85a3  8d4e08               lea ecx, [esi + 8]
// 005f85a6  e845fcffff           call 0x5f81f0
// 005f85ab  6a20                 push 0x20
// 005f85ad  c644242001           mov byte ptr [esp + 0x20], 1
// 005f85b2  e83f790300           call 0x62fef6
// 005f85b7  83c404               add esp, 4
// 005f85ba  3bc3                 cmp eax, ebx
// 005f85bc  7414                 je 0x5f85d2
// 005f85be  895804               mov dword ptr [eax + 4], ebx
// 005f85c1  895808               mov dword ptr [eax + 8], ebx
// 005f85c4  89580c               mov dword ptr [eax + 0xc], ebx
// 005f85c7  895814               mov dword ptr [eax + 0x14], ebx
// 005f85ca  895818               mov dword ptr [eax + 0x18], ebx
// 005f85cd  88581c               mov byte ptr [eax + 0x1c], bl
// 005f85d0  eb02                 jmp 0x5f85d4
// 005f85d2  33c0                 xor eax, eax
// 005f85d4  50                   push eax
// 005f85d5  8bce                 mov ecx, esi
// 005f85d7  c644242001           mov byte ptr [esp + 0x20], 1
// 005f85dc  e8cffbe1ff           call 0x4181b0
// 005f85e1  8bce                 mov ecx, esi
// 005f85e3  e848021300           call 0x728830
// 005f85e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f85ec  8bc6                 mov eax, esi
// 005f85ee  5e                   pop esi
// 005f85ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005f85f6  5b                   pop ebx
// 005f85f7  83c418               add esp, 0x18
// 005f85fa  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
