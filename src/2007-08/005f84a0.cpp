// roc 2007-08 005f84a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f84a0
//
// 005f84a0  6aff                 push -1
// 005f84a2  685e167500           push 0x75165e
// 005f84a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f84ad  50                   push eax
// 005f84ae  64892500000000       mov dword ptr fs:[0], esp
// 005f84b5  83ec0c               sub esp, 0xc
// 005f84b8  53                   push ebx
// 005f84b9  56                   push esi
// 005f84ba  8bf1                 mov esi, ecx
// 005f84bc  33db                 xor ebx, ebx
// 005f84be  891e                 mov dword ptr [esi], ebx
// 005f84c0  8974240c             mov dword ptr [esp + 0xc], esi
// 005f84c4  895e04               mov dword ptr [esi + 4], ebx
// 005f84c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f84cb  8b10                 mov edx, dword ptr [eax]
// 005f84cd  53                   push ebx
// 005f84ce  83ec08               sub esp, 8
// 005f84d1  8bcc                 mov ecx, esp
// 005f84d3  8911                 mov dword ptr [ecx], edx
// 005f84d5  8b4004               mov eax, dword ptr [eax + 4]
// 005f84d8  3bc3                 cmp eax, ebx
// 005f84da  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f84de  8964241c             mov dword ptr [esp + 0x1c], esp
// 005f84e2  894104               mov dword ptr [ecx + 4], eax
// 005f84e5  740c                 je 0x5f84f3
// 005f84e7  83c004               add eax, 4
// 005f84ea  b901000000           mov ecx, 1
// 005f84ef  f00fc108             lock xadd dword ptr [eax], ecx
// 005f84f3  8d4e08               lea ecx, [esi + 8]
// 005f84f6  e855fcffff           call 0x5f8150
// 005f84fb  6a20                 push 0x20
// 005f84fd  c644242001           mov byte ptr [esp + 0x20], 1
// 005f8502  e8ef790300           call 0x62fef6
// 005f8507  83c404               add esp, 4
// 005f850a  3bc3                 cmp eax, ebx
// 005f850c  7414                 je 0x5f8522
// 005f850e  895804               mov dword ptr [eax + 4], ebx
// 005f8511  895808               mov dword ptr [eax + 8], ebx
// 005f8514  89580c               mov dword ptr [eax + 0xc], ebx
// 005f8517  895814               mov dword ptr [eax + 0x14], ebx
// 005f851a  895818               mov dword ptr [eax + 0x18], ebx
// 005f851d  88581c               mov byte ptr [eax + 0x1c], bl
// 005f8520  eb02                 jmp 0x5f8524
// 005f8522  33c0                 xor eax, eax
// 005f8524  50                   push eax
// 005f8525  8bce                 mov ecx, esi
// 005f8527  c644242001           mov byte ptr [esp + 0x20], 1
// 005f852c  e87ffce1ff           call 0x4181b0
// 005f8531  8bce                 mov ecx, esi
// 005f8533  e8f8021300           call 0x728830
// 005f8538  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f853c  8bc6                 mov eax, esi
// 005f853e  5e                   pop esi
// 005f853f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8546  5b                   pop ebx
// 005f8547  83c418               add esp, 0x18
// 005f854a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
