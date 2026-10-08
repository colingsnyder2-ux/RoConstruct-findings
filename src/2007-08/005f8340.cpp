// roc 2007-08 005f8340  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8340
//
// 005f8340  6aff                 push -1
// 005f8342  685e167500           push 0x75165e
// 005f8347  64a100000000         mov eax, dword ptr fs:[0]
// 005f834d  50                   push eax
// 005f834e  64892500000000       mov dword ptr fs:[0], esp
// 005f8355  83ec0c               sub esp, 0xc
// 005f8358  53                   push ebx
// 005f8359  56                   push esi
// 005f835a  8bf1                 mov esi, ecx
// 005f835c  33db                 xor ebx, ebx
// 005f835e  891e                 mov dword ptr [esi], ebx
// 005f8360  8974240c             mov dword ptr [esp + 0xc], esi
// 005f8364  895e04               mov dword ptr [esi + 4], ebx
// 005f8367  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f836b  8b10                 mov edx, dword ptr [eax]
// 005f836d  53                   push ebx
// 005f836e  83ec08               sub esp, 8
// 005f8371  8bcc                 mov ecx, esp
// 005f8373  8911                 mov dword ptr [ecx], edx
// 005f8375  8b4004               mov eax, dword ptr [eax + 4]
// 005f8378  3bc3                 cmp eax, ebx
// 005f837a  895c2428             mov dword ptr [esp + 0x28], ebx
// 005f837e  8964241c             mov dword ptr [esp + 0x1c], esp
// 005f8382  894104               mov dword ptr [ecx + 4], eax
// 005f8385  740c                 je 0x5f8393
// 005f8387  83c004               add eax, 4
// 005f838a  b901000000           mov ecx, 1
// 005f838f  f00fc108             lock xadd dword ptr [eax], ecx
// 005f8393  8d4e08               lea ecx, [esi + 8]
// 005f8396  e875fcffff           call 0x5f8010
// 005f839b  6a20                 push 0x20
// 005f839d  c644242001           mov byte ptr [esp + 0x20], 1
// 005f83a2  e84f7b0300           call 0x62fef6
// 005f83a7  83c404               add esp, 4
// 005f83aa  3bc3                 cmp eax, ebx
// 005f83ac  7414                 je 0x5f83c2
// 005f83ae  895804               mov dword ptr [eax + 4], ebx
// 005f83b1  895808               mov dword ptr [eax + 8], ebx
// 005f83b4  89580c               mov dword ptr [eax + 0xc], ebx
// 005f83b7  895814               mov dword ptr [eax + 0x14], ebx
// 005f83ba  895818               mov dword ptr [eax + 0x18], ebx
// 005f83bd  88581c               mov byte ptr [eax + 0x1c], bl
// 005f83c0  eb02                 jmp 0x5f83c4
// 005f83c2  33c0                 xor eax, eax
// 005f83c4  50                   push eax
// 005f83c5  8bce                 mov ecx, esi
// 005f83c7  c644242001           mov byte ptr [esp + 0x20], 1
// 005f83cc  e8dffde1ff           call 0x4181b0
// 005f83d1  8bce                 mov ecx, esi
// 005f83d3  e858041300           call 0x728830
// 005f83d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f83dc  8bc6                 mov eax, esi
// 005f83de  5e                   pop esi
// 005f83df  64890d00000000       mov dword ptr fs:[0], ecx
// 005f83e6  5b                   pop ebx
// 005f83e7  83c418               add esp, 0x18
// 005f83ea  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$slot@V?$function@$$A6AXXZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
