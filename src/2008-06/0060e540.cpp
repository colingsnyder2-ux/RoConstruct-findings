// roc 2008-06 0060e540  unit: RBX::BlockBlockContact  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060e540
//
// 0060e540  6aff                 push -1
// 0060e542  682b8d7d00           push 0x7d8d2b
// 0060e547  64a100000000         mov eax, dword ptr fs:[0]
// 0060e54d  50                   push eax
// 0060e54e  64892500000000       mov dword ptr fs:[0], esp
// 0060e555  83ec10               sub esp, 0x10
// 0060e558  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060e55c  53                   push ebx
// 0060e55d  56                   push esi
// 0060e55e  57                   push edi
// 0060e55f  8bf9                 mov edi, ecx
// 0060e561  50                   push eax
// 0060e562  8d4c2418             lea ecx, [esp + 0x18]
// 0060e566  51                   push ecx
// 0060e567  897c2418             mov dword ptr [esp + 0x18], edi
// 0060e56b  e8d0a40000           call 0x618a40
// 0060e570  8b10                 mov edx, dword ptr [eax]
// 0060e572  8917                 mov dword ptr [edi], edx
// 0060e574  8b4004               mov eax, dword ptr [eax + 4]
// 0060e577  33db                 xor ebx, ebx
// 0060e579  83c408               add esp, 8
// 0060e57c  894704               mov dword ptr [edi + 4], eax
// 0060e57f  3bc3                 cmp eax, ebx
// 0060e581  740c                 je 0x60e58f
// 0060e583  83c008               add eax, 8
// 0060e586  b901000000           mov ecx, 1
// 0060e58b  f00fc108             lock xadd dword ptr [eax], ecx
// 0060e58f  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060e593  895c2424             mov dword ptr [esp + 0x24], ebx
// 0060e597  3bf3                 cmp esi, ebx
// 0060e599  742a                 je 0x60e5c5
// 0060e59b  8d5604               lea edx, [esi + 4]
// 0060e59e  83c8ff               or eax, 0xffffffff
// 0060e5a1  f00fc102             lock xadd dword ptr [edx], eax
// 0060e5a5  751e                 jne 0x60e5c5
// 0060e5a7  8b16                 mov edx, dword ptr [esi]
// 0060e5a9  8b4204               mov eax, dword ptr [edx + 4]
// 0060e5ac  8bce                 mov ecx, esi
// 0060e5ae  ffd0                 call eax
// 0060e5b0  8d4e08               lea ecx, [esi + 8]
// 0060e5b3  83caff               or edx, 0xffffffff
// 0060e5b6  f00fc111             lock xadd dword ptr [ecx], edx
// 0060e5ba  7509                 jne 0x60e5c5
// 0060e5bc  8b06                 mov eax, dword ptr [esi]
// 0060e5be  8b5008               mov edx, dword ptr [eax + 8]
// 0060e5c1  8bce                 mov ecx, esi
// 0060e5c3  ffd2                 call edx
// 0060e5c5  6a04                 push 4
// 0060e5c7  8d7708               lea esi, [edi + 8]
// 0060e5ca  e851230900           call 0x6a0920
// 0060e5cf  83c404               add esp, 4
// 0060e5d2  3bc3                 cmp eax, ebx
// 0060e5d4  7404                 je 0x60e5da
// 0060e5d6  8930                 mov dword ptr [eax], esi
// 0060e5d8  eb02                 jmp 0x60e5dc
// 0060e5da  33c0                 xor eax, eax
// 0060e5dc  8906                 mov dword ptr [esi], eax
// 0060e5de  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060e5e1  895e10               mov dword ptr [esi + 0x10], ebx
// 0060e5e4  895e14               mov dword ptr [esi + 0x14], ebx
// 0060e5e7  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060e5eb  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060e5ef  c6472001             mov byte ptr [edi + 0x20], 1
// 0060e5f3  894724               mov dword ptr [edi + 0x24], eax
// 0060e5f6  8b80e4020000         mov eax, dword ptr [eax + 0x2e4]
// 0060e5fc  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0060e602  56                   push esi
// 0060e603  52                   push edx
// 0060e604  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0060e609  894f28               mov dword ptr [edi + 0x28], ecx
// 0060e60c  e80f030000           call 0x60e920
// 0060e611  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060e615  83c408               add esp, 8
// 0060e618  8bc7                 mov eax, edi
// 0060e61a  5f                   pop edi
// 0060e61b  5e                   pop esi
// 0060e61c  5b                   pop ebx
// 0060e61d  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e624  83c41c               add esp, 0x1c
// 0060e627  c20c00               ret 0xc
// library rbxgs-dll/roc_unit_c02d01ef6020881c.cpp (function ??0MegaDragger@RBX@@QAE@PAVPartInstance@1@ABV?$vector@PAVPVInstance@RBX@@V?$allocator@PAVPVInstance@RBX@@@std@@@std@@PAVRootInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_unit_c02d01ef6020881c.cpp
