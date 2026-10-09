// roc 2007-03 005e65a0  unit: seg_005e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e65a0
//
// 005e65a0  6aff                 push -1
// 005e65a2  685eca7500           push 0x75ca5e
// 005e65a7  64a100000000         mov eax, dword ptr fs:[0]
// 005e65ad  50                   push eax
// 005e65ae  64892500000000       mov dword ptr fs:[0], esp
// 005e65b5  83ec0c               sub esp, 0xc
// 005e65b8  53                   push ebx
// 005e65b9  56                   push esi
// 005e65ba  8bf1                 mov esi, ecx
// 005e65bc  33db                 xor ebx, ebx
// 005e65be  891e                 mov dword ptr [esi], ebx
// 005e65c0  8974240c             mov dword ptr [esp + 0xc], esi
// 005e65c4  895e04               mov dword ptr [esi + 4], ebx
// 005e65c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e65cb  8b10                 mov edx, dword ptr [eax]
// 005e65cd  53                   push ebx
// 005e65ce  83ec08               sub esp, 8
// 005e65d1  8bcc                 mov ecx, esp
// 005e65d3  8911                 mov dword ptr [ecx], edx
// 005e65d5  8b4004               mov eax, dword ptr [eax + 4]
// 005e65d8  3bc3                 cmp eax, ebx
// 005e65da  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e65de  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e65e2  894104               mov dword ptr [ecx + 4], eax
// 005e65e5  740c                 je 0x5e65f3
// 005e65e7  83c004               add eax, 4
// 005e65ea  b901000000           mov ecx, 1
// 005e65ef  f00fc108             lock xadd dword ptr [eax], ecx
// 005e65f3  8d4e08               lea ecx, [esi + 8]
// 005e65f6  e875fcffff           call 0x5e6270
// 005e65fb  6a20                 push 0x20
// 005e65fd  c644242001           mov byte ptr [esp + 0x20], 1
// 005e6602  e8017b0300           call 0x61e108
// 005e6607  83c404               add esp, 4
// 005e660a  3bc3                 cmp eax, ebx
// 005e660c  7414                 je 0x5e6622
// 005e660e  895804               mov dword ptr [eax + 4], ebx
// 005e6611  895808               mov dword ptr [eax + 8], ebx
// 005e6614  89580c               mov dword ptr [eax + 0xc], ebx
// 005e6617  895814               mov dword ptr [eax + 0x14], ebx
// 005e661a  895818               mov dword ptr [eax + 0x18], ebx
// 005e661d  88581c               mov byte ptr [eax + 0x1c], bl
// 005e6620  eb02                 jmp 0x5e6624
// 005e6622  33c0                 xor eax, eax
// 005e6624  50                   push eax
// 005e6625  8bce                 mov ecx, esi
// 005e6627  c644242001           mov byte ptr [esp + 0x20], 1
// 005e662c  e84f30e3ff           call 0x419680
// 005e6631  8bce                 mov ecx, esi
// 005e6633  e8f8271400           call 0x728e30
// 005e6638  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e663c  8bc6                 mov eax, esi
// 005e663e  5e                   pop esi
// 005e663f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6646  5b                   pop ebx
// 005e6647  83c418               add esp, 0x18
// 005e664a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
