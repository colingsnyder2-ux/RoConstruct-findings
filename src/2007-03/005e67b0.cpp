// roc 2007-03 005e67b0  unit: seg_005e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e67b0
//
// 005e67b0  6aff                 push -1
// 005e67b2  685eca7500           push 0x75ca5e
// 005e67b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e67bd  50                   push eax
// 005e67be  64892500000000       mov dword ptr fs:[0], esp
// 005e67c5  83ec0c               sub esp, 0xc
// 005e67c8  53                   push ebx
// 005e67c9  56                   push esi
// 005e67ca  8bf1                 mov esi, ecx
// 005e67cc  33db                 xor ebx, ebx
// 005e67ce  891e                 mov dword ptr [esi], ebx
// 005e67d0  8974240c             mov dword ptr [esp + 0xc], esi
// 005e67d4  895e04               mov dword ptr [esi + 4], ebx
// 005e67d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e67db  8b10                 mov edx, dword ptr [eax]
// 005e67dd  53                   push ebx
// 005e67de  83ec08               sub esp, 8
// 005e67e1  8bcc                 mov ecx, esp
// 005e67e3  8911                 mov dword ptr [ecx], edx
// 005e67e5  8b4004               mov eax, dword ptr [eax + 4]
// 005e67e8  3bc3                 cmp eax, ebx
// 005e67ea  895c2428             mov dword ptr [esp + 0x28], ebx
// 005e67ee  8964241c             mov dword ptr [esp + 0x1c], esp
// 005e67f2  894104               mov dword ptr [ecx + 4], eax
// 005e67f5  740c                 je 0x5e6803
// 005e67f7  83c004               add eax, 4
// 005e67fa  b901000000           mov ecx, 1
// 005e67ff  f00fc108             lock xadd dword ptr [eax], ecx
// 005e6803  8d4e08               lea ecx, [esi + 8]
// 005e6806  e845fcffff           call 0x5e6450
// 005e680b  6a20                 push 0x20
// 005e680d  c644242001           mov byte ptr [esp + 0x20], 1
// 005e6812  e8f1780300           call 0x61e108
// 005e6817  83c404               add esp, 4
// 005e681a  3bc3                 cmp eax, ebx
// 005e681c  7414                 je 0x5e6832
// 005e681e  895804               mov dword ptr [eax + 4], ebx
// 005e6821  895808               mov dword ptr [eax + 8], ebx
// 005e6824  89580c               mov dword ptr [eax + 0xc], ebx
// 005e6827  895814               mov dword ptr [eax + 0x14], ebx
// 005e682a  895818               mov dword ptr [eax + 0x18], ebx
// 005e682d  88581c               mov byte ptr [eax + 0x1c], bl
// 005e6830  eb02                 jmp 0x5e6834
// 005e6832  33c0                 xor eax, eax
// 005e6834  50                   push eax
// 005e6835  8bce                 mov ecx, esi
// 005e6837  c644242001           mov byte ptr [esp + 0x20], 1
// 005e683c  e83f2ee3ff           call 0x419680
// 005e6841  8bce                 mov ecx, esi
// 005e6843  e8e8251400           call 0x728e30
// 005e6848  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e684c  8bc6                 mov eax, esi
// 005e684e  5e                   pop esi
// 005e684f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6856  5b                   pop ebx
// 005e6857  83c418               add esp, 0x18
// 005e685a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
