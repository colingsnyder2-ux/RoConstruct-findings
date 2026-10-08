// from server: 100% by auto
// roc 2008-06 00572510  unit: RBX::Reflection::ClassDescriptor  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572510
//
// 00572510  6aff                 push -1
// 00572512  68f0027d00           push 0x7d02f0
// 00572517  64a100000000         mov eax, dword ptr fs:[0]
// 0057251d  50                   push eax
// 0057251e  64892500000000       mov dword ptr fs:[0], esp
// 00572525  83ec0c               sub esp, 0xc
// 00572528  53                   push ebx
// 00572529  55                   push ebp
// 0057252a  56                   push esi
// 0057252b  8bf1                 mov esi, ecx
// 0057252d  8b4640               mov eax, dword ptr [esi + 0x40]
// 00572530  8b4804               mov ecx, dword ptr [eax + 4]
// 00572533  57                   push edi
// 00572534  51                   push ecx
// 00572535  8bce                 mov ecx, esi
// 00572537  e8e48affff           call 0x56b020
// 0057253c  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057253f  894004               mov dword ptr [eax + 4], eax
// 00572542  8b4640               mov eax, dword ptr [esi + 0x40]
// 00572545  33ff                 xor edi, edi
// 00572547  897e44               mov dword ptr [esi + 0x44], edi
// 0057254a  8900                 mov dword ptr [eax], eax
// 0057254c  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057254f  894008               mov dword ptr [eax + 8], eax
// 00572552  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0057255a  897c2414             mov dword ptr [esp + 0x14], edi
// 0057255e  897c2418             mov dword ptr [esp + 0x18], edi
// 00572562  8d542410             lea edx, [esp + 0x10]
// 00572566  52                   push edx
// 00572567  8bce                 mov ecx, esi
// 00572569  897c2428             mov dword ptr [esp + 0x28], edi
// 0057256d  e85efeffff           call 0x5723d0
// 00572572  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00572576  83cdff               or ebp, 0xffffffff
// 00572579  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057257d  3bdf                 cmp ebx, edi
// 0057257f  7428                 je 0x5725a9
// 00572581  8d4304               lea eax, [ebx + 4]
// 00572584  8bcd                 mov ecx, ebp
// 00572586  f00fc108             lock xadd dword ptr [eax], ecx
// 0057258a  751d                 jne 0x5725a9
// 0057258c  8b13                 mov edx, dword ptr [ebx]
// 0057258e  8b4204               mov eax, dword ptr [edx + 4]
// 00572591  8bcb                 mov ecx, ebx
// 00572593  ffd0                 call eax
// 00572595  8d4b08               lea ecx, [ebx + 8]
// 00572598  8bd5                 mov edx, ebp
// 0057259a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057259e  7509                 jne 0x5725a9
// 005725a0  8b03                 mov eax, dword ptr [ebx]
// 005725a2  8b5008               mov edx, dword ptr [eax + 8]
// 005725a5  8bcb                 mov ecx, ebx
// 005725a7  ffd2                 call edx
// 005725a9  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005725b1  897c2414             mov dword ptr [esp + 0x14], edi
// 005725b5  897c2418             mov dword ptr [esp + 0x18], edi
// 005725b9  8d442410             lea eax, [esp + 0x10]
// 005725bd  50                   push eax
// 005725be  8bce                 mov ecx, esi
// 005725c0  c744242801000000     mov dword ptr [esp + 0x28], 1
// 005725c8  e803feffff           call 0x5723d0
// 005725cd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005725d1  896c2424             mov dword ptr [esp + 0x24], ebp
// 005725d5  3bdf                 cmp ebx, edi
// 005725d7  7426                 je 0x5725ff
// 005725d9  8d4b04               lea ecx, [ebx + 4]
// 005725dc  8bd5                 mov edx, ebp
// 005725de  f00fc111             lock xadd dword ptr [ecx], edx
// 005725e2  751b                 jne 0x5725ff
// 005725e4  8b03                 mov eax, dword ptr [ebx]
// 005725e6  8b5004               mov edx, dword ptr [eax + 4]
// 005725e9  8bcb                 mov ecx, ebx
// 005725eb  ffd2                 call edx
// 005725ed  8d4308               lea eax, [ebx + 8]
// 005725f0  f00fc128             lock xadd dword ptr [eax], ebp
// 005725f4  7509                 jne 0x5725ff
// 005725f6  8b13                 mov edx, dword ptr [ebx]
// 005725f8  8b4208               mov eax, dword ptr [edx + 8]
// 005725fb  8bcb                 mov ecx, ebx
// 005725fd  ffd0                 call eax
// 005725ff  8b4640               mov eax, dword ptr [esi + 0x40]
// 00572602  8b16                 mov edx, dword ptr [esi]
// 00572604  8d4e48               lea ecx, [esi + 0x48]
// 00572607  8911                 mov dword ptr [ecx], edx
// 00572609  894104               mov dword ptr [ecx + 4], eax
// 0057260c  e80fd90f00           call 0x66ff20
// 00572611  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00572615  5f                   pop edi
// 00572616  5e                   pop esi
// 00572617  5d                   pop ebp
// 00572618  5b                   pop ebx
// 00572619  64890d00000000       mov dword ptr fs:[0], ecx
// 00572620  83c418               add esp, 0x18
// 00572623  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?clear@named_slot_map@detail@signals@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
