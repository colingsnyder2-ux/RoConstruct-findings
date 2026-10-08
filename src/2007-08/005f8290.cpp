// roc 2007-08 005f8290  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8290
//
// 005f8290  6aff                 push -1
// 005f8292  685e167500           push 0x75165e
// 005f8297  64a100000000         mov eax, dword ptr fs:[0]
// 005f829d  50                   push eax
// 005f829e  64892500000000       mov dword ptr fs:[0], esp
// 005f82a5  83ec0c               sub esp, 0xc
// 005f82a8  53                   push ebx
// 005f82a9  56                   push esi
// 005f82aa  8bf1                 mov esi, ecx
// 005f82ac  33db                 xor ebx, ebx
// 005f82ae  891e                 mov dword ptr [esi], ebx
// 005f82b0  8974240c             mov dword ptr [esp + 0xc], esi
// 005f82b4  895e04               mov dword ptr [esi + 4], ebx
// 005f82b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f82bb  8b10                 mov edx, dword ptr [eax]
// 005f82bd  53                   push ebx
// 005f82be  83ec08               sub esp, 8
// 005f82c1  8bcc                 mov ecx, esp
// 005f82c3  8911                 mov dword ptr [ecx], edx
// 005f82c5  8b4004               mov eax, dword ptr [eax + 4]
// 005f82c8  3bc3                 cmp eax, ebx
// 005f82ca  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f82ce  8964241c             mov dword ptr [esp + 0x1c], esp
// 005f82d2  894104               mov dword ptr [ecx + 4], eax
// 005f82d5  740c                 je 0x5f82e3
// 005f82d7  83c004               add eax, 4
// 005f82da  b901000000           mov ecx, 1
// 005f82df  f00fc108             lock xadd dword ptr [eax], ecx
// 005f82e3  8d4e08               lea ecx, [esi + 8]
// 005f82e6  e885fcffff           call 0x5f7f70
// 005f82eb  6a20                 push 0x20
// 005f82ed  c644242001           mov byte ptr [esp + 0x20], 1
// 005f82f2  e8ff7b0300           call 0x62fef6
// 005f82f7  83c404               add esp, 4
// 005f82fa  3bc3                 cmp eax, ebx
// 005f82fc  7414                 je 0x5f8312
// 005f82fe  895804               mov dword ptr [eax + 4], ebx
// 005f8301  895808               mov dword ptr [eax + 8], ebx
// 005f8304  89580c               mov dword ptr [eax + 0xc], ebx
// 005f8307  895814               mov dword ptr [eax + 0x14], ebx
// 005f830a  895818               mov dword ptr [eax + 0x18], ebx
// 005f830d  88581c               mov byte ptr [eax + 0x1c], bl
// 005f8310  eb02                 jmp 0x5f8314
// 005f8312  33c0                 xor eax, eax
// 005f8314  50                   push eax
// 005f8315  8bce                 mov ecx, esi
// 005f8317  c644242001           mov byte ptr [esp + 0x20], 1
// 005f831c  e88ffee1ff           call 0x4181b0
// 005f8321  8bce                 mov ecx, esi
// 005f8323  e808051300           call 0x728830
// 005f8328  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f832c  8bc6                 mov eax, esi
// 005f832e  5e                   pop esi
// 005f832f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8336  5b                   pop ebx
// 005f8337  83c418               add esp, 0x18
// 005f833a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
