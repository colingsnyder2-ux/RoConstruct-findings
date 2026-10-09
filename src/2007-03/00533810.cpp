// roc 2007-03 00533810  unit: seg_00530000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533810
//
// 00533810  6aff                 push -1
// 00533812  685eca7500           push 0x75ca5e
// 00533817  64a100000000         mov eax, dword ptr fs:[0]
// 0053381d  50                   push eax
// 0053381e  64892500000000       mov dword ptr fs:[0], esp
// 00533825  83ec0c               sub esp, 0xc
// 00533828  53                   push ebx
// 00533829  56                   push esi
// 0053382a  8bf1                 mov esi, ecx
// 0053382c  33db                 xor ebx, ebx
// 0053382e  891e                 mov dword ptr [esi], ebx
// 00533830  8974240c             mov dword ptr [esp + 0xc], esi
// 00533834  895e04               mov dword ptr [esi + 4], ebx
// 00533837  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053383b  8b10                 mov edx, dword ptr [eax]
// 0053383d  53                   push ebx
// 0053383e  83ec08               sub esp, 8
// 00533841  8bcc                 mov ecx, esp
// 00533843  8911                 mov dword ptr [ecx], edx
// 00533845  8b4004               mov eax, dword ptr [eax + 4]
// 00533848  3bc3                 cmp eax, ebx
// 0053384a  895c2428             mov dword ptr [esp + 0x28], ebx
// 0053384e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00533852  894104               mov dword ptr [ecx + 4], eax
// 00533855  740c                 je 0x533863
// 00533857  83c004               add eax, 4
// 0053385a  b901000000           mov ecx, 1
// 0053385f  f00fc108             lock xadd dword ptr [eax], ecx
// 00533863  8d4e08               lea ecx, [esi + 8]
// 00533866  e855feffff           call 0x5336c0
// 0053386b  6a20                 push 0x20
// 0053386d  c644242001           mov byte ptr [esp + 0x20], 1
// 00533872  e891a80e00           call 0x61e108
// 00533877  83c404               add esp, 4
// 0053387a  3bc3                 cmp eax, ebx
// 0053387c  7414                 je 0x533892
// 0053387e  895804               mov dword ptr [eax + 4], ebx
// 00533881  895808               mov dword ptr [eax + 8], ebx
// 00533884  89580c               mov dword ptr [eax + 0xc], ebx
// 00533887  895814               mov dword ptr [eax + 0x14], ebx
// 0053388a  895818               mov dword ptr [eax + 0x18], ebx
// 0053388d  88581c               mov byte ptr [eax + 0x1c], bl
// 00533890  eb02                 jmp 0x533894
// 00533892  33c0                 xor eax, eax
// 00533894  50                   push eax
// 00533895  8bce                 mov ecx, esi
// 00533897  c644242001           mov byte ptr [esp + 0x20], 1
// 0053389c  e8df5deeff           call 0x419680
// 005338a1  8bce                 mov ecx, esi
// 005338a3  e888551f00           call 0x728e30
// 005338a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005338ac  8bc6                 mov eax, esi
// 005338ae  5e                   pop esi
// 005338af  64890d00000000       mov dword ptr fs:[0], ecx
// 005338b6  5b                   pop ebx
// 005338b7  83c418               add esp, 0x18
// 005338ba  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
