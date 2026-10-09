// roc 2007-03 00604550  unit: seg_00600000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604550
//
// 00604550  6aff                 push -1
// 00604552  685eca7500           push 0x75ca5e
// 00604557  64a100000000         mov eax, dword ptr fs:[0]
// 0060455d  50                   push eax
// 0060455e  64892500000000       mov dword ptr fs:[0], esp
// 00604565  83ec0c               sub esp, 0xc
// 00604568  53                   push ebx
// 00604569  56                   push esi
// 0060456a  8bf1                 mov esi, ecx
// 0060456c  33db                 xor ebx, ebx
// 0060456e  891e                 mov dword ptr [esi], ebx
// 00604570  8974240c             mov dword ptr [esp + 0xc], esi
// 00604574  895e04               mov dword ptr [esi + 4], ebx
// 00604577  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060457b  8b10                 mov edx, dword ptr [eax]
// 0060457d  53                   push ebx
// 0060457e  83ec08               sub esp, 8
// 00604581  8bcc                 mov ecx, esp
// 00604583  8911                 mov dword ptr [ecx], edx
// 00604585  8b4004               mov eax, dword ptr [eax + 4]
// 00604588  3bc3                 cmp eax, ebx
// 0060458a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0060458e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00604592  894104               mov dword ptr [ecx + 4], eax
// 00604595  740c                 je 0x6045a3
// 00604597  83c004               add eax, 4
// 0060459a  b901000000           mov ecx, 1
// 0060459f  f00fc108             lock xadd dword ptr [eax], ecx
// 006045a3  8d4e08               lea ecx, [esi + 8]
// 006045a6  e805ffffff           call 0x6044b0
// 006045ab  6a20                 push 0x20
// 006045ad  c644242001           mov byte ptr [esp + 0x20], 1
// 006045b2  e8519b0100           call 0x61e108
// 006045b7  83c404               add esp, 4
// 006045ba  3bc3                 cmp eax, ebx
// 006045bc  7414                 je 0x6045d2
// 006045be  895804               mov dword ptr [eax + 4], ebx
// 006045c1  895808               mov dword ptr [eax + 8], ebx
// 006045c4  89580c               mov dword ptr [eax + 0xc], ebx
// 006045c7  895814               mov dword ptr [eax + 0x14], ebx
// 006045ca  895818               mov dword ptr [eax + 0x18], ebx
// 006045cd  88581c               mov byte ptr [eax + 0x1c], bl
// 006045d0  eb02                 jmp 0x6045d4
// 006045d2  33c0                 xor eax, eax
// 006045d4  50                   push eax
// 006045d5  8bce                 mov ecx, esi
// 006045d7  c644242001           mov byte ptr [esp + 0x20], 1
// 006045dc  e89f50e1ff           call 0x419680
// 006045e1  8bce                 mov ecx, esi
// 006045e3  e848481200           call 0x728e30
// 006045e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006045ec  8bc6                 mov eax, esi
// 006045ee  5e                   pop esi
// 006045ef  64890d00000000       mov dword ptr fs:[0], ecx
// 006045f6  5b                   pop ebx
// 006045f7  83c418               add esp, 0x18
// 006045fa  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
