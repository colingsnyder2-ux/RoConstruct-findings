// roc 2007-03 005e6700  unit: seg_005e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6700
//
// 005e6700  6aff                 push -1
// 005e6702  685eca7500           push 0x75ca5e
// 005e6707  64a100000000         mov eax, dword ptr fs:[0]
// 005e670d  50                   push eax
// 005e670e  64892500000000       mov dword ptr fs:[0], esp
// 005e6715  83ec0c               sub esp, 0xc
// 005e6718  53                   push ebx
// 005e6719  56                   push esi
// 005e671a  8bf1                 mov esi, ecx
// 005e671c  33db                 xor ebx, ebx
// 005e671e  891e                 mov dword ptr [esi], ebx
// 005e6720  8974240c             mov dword ptr [esp + 0xc], esi
// 005e6724  895e04               mov dword ptr [esi + 4], ebx
// 005e6727  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e672b  8b10                 mov edx, dword ptr [eax]
// 005e672d  53                   push ebx
// 005e672e  83ec08               sub esp, 8
// 005e6731  8bcc                 mov ecx, esp
// 005e6733  8911                 mov dword ptr [ecx], edx
// 005e6735  8b4004               mov eax, dword ptr [eax + 4]
// 005e6738  3bc3                 cmp eax, ebx
// 005e673a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e673e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e6742  894104               mov dword ptr [ecx + 4], eax
// 005e6745  740c                 je 0x5e6753
// 005e6747  83c004               add eax, 4
// 005e674a  b901000000           mov ecx, 1
// 005e674f  f00fc108             lock xadd dword ptr [eax], ecx
// 005e6753  8d4e08               lea ecx, [esi + 8]
// 005e6756  e855fcffff           call 0x5e63b0
// 005e675b  6a20                 push 0x20
// 005e675d  c644242001           mov byte ptr [esp + 0x20], 1
// 005e6762  e8a1790300           call 0x61e108
// 005e6767  83c404               add esp, 4
// 005e676a  3bc3                 cmp eax, ebx
// 005e676c  7414                 je 0x5e6782
// 005e676e  895804               mov dword ptr [eax + 4], ebx
// 005e6771  895808               mov dword ptr [eax + 8], ebx
// 005e6774  89580c               mov dword ptr [eax + 0xc], ebx
// 005e6777  895814               mov dword ptr [eax + 0x14], ebx
// 005e677a  895818               mov dword ptr [eax + 0x18], ebx
// 005e677d  88581c               mov byte ptr [eax + 0x1c], bl
// 005e6780  eb02                 jmp 0x5e6784
// 005e6782  33c0                 xor eax, eax
// 005e6784  50                   push eax
// 005e6785  8bce                 mov ecx, esi
// 005e6787  c644242001           mov byte ptr [esp + 0x20], 1
// 005e678c  e8ef2ee3ff           call 0x419680
// 005e6791  8bce                 mov ecx, esi
// 005e6793  e898261400           call 0x728e30
// 005e6798  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e679c  8bc6                 mov eax, esi
// 005e679e  5e                   pop esi
// 005e679f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e67a6  5b                   pop ebx
// 005e67a7  83c418               add esp, 0x18
// 005e67aa  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
