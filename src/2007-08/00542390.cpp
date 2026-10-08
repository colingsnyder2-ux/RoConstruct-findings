// roc 2007-08 00542390  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542390
//
// 00542390  6aff                 push -1
// 00542392  685e167500           push 0x75165e
// 00542397  64a100000000         mov eax, dword ptr fs:[0]
// 0054239d  50                   push eax
// 0054239e  64892500000000       mov dword ptr fs:[0], esp
// 005423a5  83ec0c               sub esp, 0xc
// 005423a8  53                   push ebx
// 005423a9  56                   push esi
// 005423aa  8bf1                 mov esi, ecx
// 005423ac  33db                 xor ebx, ebx
// 005423ae  891e                 mov dword ptr [esi], ebx
// 005423b0  8974240c             mov dword ptr [esp + 0xc], esi
// 005423b4  895e04               mov dword ptr [esi + 4], ebx
// 005423b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005423bb  8b10                 mov edx, dword ptr [eax]
// 005423bd  53                   push ebx
// 005423be  83ec08               sub esp, 8
// 005423c1  8bcc                 mov ecx, esp
// 005423c3  8911                 mov dword ptr [ecx], edx
// 005423c5  8b4004               mov eax, dword ptr [eax + 4]
// 005423c8  3bc3                 cmp eax, ebx
// 005423ca  895c2428             mov dword ptr [esp + 0x28], ebx
// 005423ce  8964241c             mov dword ptr [esp + 0x1c], esp
// 005423d2  894104               mov dword ptr [ecx + 4], eax
// 005423d5  740c                 je 0x5423e3
// 005423d7  83c004               add eax, 4
// 005423da  b901000000           mov ecx, 1
// 005423df  f00fc108             lock xadd dword ptr [eax], ecx
// 005423e3  8d4e08               lea ecx, [esi + 8]
// 005423e6  e805ffffff           call 0x5422f0
// 005423eb  6a20                 push 0x20
// 005423ed  c644242001           mov byte ptr [esp + 0x20], 1
// 005423f2  e8ffda0e00           call 0x62fef6
// 005423f7  83c404               add esp, 4
// 005423fa  3bc3                 cmp eax, ebx
// 005423fc  7414                 je 0x542412
// 005423fe  895804               mov dword ptr [eax + 4], ebx
// 00542401  895808               mov dword ptr [eax + 8], ebx
// 00542404  89580c               mov dword ptr [eax + 0xc], ebx
// 00542407  895814               mov dword ptr [eax + 0x14], ebx
// 0054240a  895818               mov dword ptr [eax + 0x18], ebx
// 0054240d  88581c               mov byte ptr [eax + 0x1c], bl
// 00542410  eb02                 jmp 0x542414
// 00542412  33c0                 xor eax, eax
// 00542414  50                   push eax
// 00542415  8bce                 mov ecx, esi
// 00542417  c644242001           mov byte ptr [esp + 0x20], 1
// 0054241c  e88f5dedff           call 0x4181b0
// 00542421  8bce                 mov ecx, esi
// 00542423  e808641e00           call 0x728830
// 00542428  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054242c  8bc6                 mov eax, esi
// 0054242e  5e                   pop esi
// 0054242f  64890d00000000       mov dword ptr fs:[0], ecx
// 00542436  5b                   pop ebx
// 00542437  83c418               add esp, 0x18
// 0054243a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
