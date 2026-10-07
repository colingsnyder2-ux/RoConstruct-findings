// roc 2010-06 0063a570  unit: RBX::VBasicPartInstance::?$ActionStation  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0063a570
//
// 0063a570  55                   push ebp
// 0063a571  8bec                 mov ebp, esp
// 0063a573  6aff                 push -1
// 0063a575  68a0c49900           push 0x99c4a0
// 0063a57a  64a100000000         mov eax, dword ptr fs:[0]
// 0063a580  50                   push eax
// 0063a581  64892500000000       mov dword ptr fs:[0], esp
// 0063a588  83ec1c               sub esp, 0x1c
// 0063a58b  53                   push ebx
// 0063a58c  56                   push esi
// 0063a58d  8bf1                 mov esi, ecx
// 0063a58f  57                   push edi
// 0063a590  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063a593  8965f0               mov dword ptr [ebp - 0x10], esp
// 0063a596  8975e0               mov dword ptr [ebp - 0x20], esi
// 0063a599  85ff                 test edi, edi
// 0063a59b  7504                 jne 0x63a5a1
// 0063a59d  33c9                 xor ecx, ecx
// 0063a59f  eb0a                 jmp 0x63a5ab
// 0063a5a1  8b4614               mov eax, dword ptr [esi + 0x14]
// 0063a5a4  2bc7                 sub eax, edi
// 0063a5a6  c1f803               sar eax, 3
// 0063a5a9  8bc8                 mov ecx, eax
// 0063a5ab  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0063a5ae  85db                 test ebx, ebx
// 0063a5b0  0f84cb020000         je 0x63a881
// 0063a5b6  8b5610               mov edx, dword ptr [esi + 0x10]
// 0063a5b9  8bc2                 mov eax, edx
// 0063a5bb  2bc7                 sub eax, edi
// 0063a5bd  c1f803               sar eax, 3
// 0063a5c0  bfffffff1f           mov edi, 0x1fffffff
// 0063a5c5  2bf8                 sub edi, eax
// 0063a5c7  3bfb                 cmp edi, ebx
// 0063a5c9  7305                 jae 0x63a5d0
// 0063a5cb  e82098deff           call 0x423df0
// 0063a5d0  03c3                 add eax, ebx
// 0063a5d2  3bc8                 cmp ecx, eax
// 0063a5d4  0f8358010000         jae 0x63a732
// 0063a5da  8bd1                 mov edx, ecx
// 0063a5dc  d1ea                 shr edx, 1
// 0063a5de  bfffffff1f           mov edi, 0x1fffffff
// 0063a5e3  2bfa                 sub edi, edx
// 0063a5e5  3bf9                 cmp edi, ecx
// 0063a5e7  730c                 jae 0x63a5f5
// 0063a5e9  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0063a5f0  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0063a5f3  eb05                 jmp 0x63a5fa
// 0063a5f5  03ca                 add ecx, edx
// 0063a5f7  894dec               mov dword ptr [ebp - 0x14], ecx
// 0063a5fa  3bc8                 cmp ecx, eax
// 0063a5fc  7305                 jae 0x63a603
// 0063a5fe  8945ec               mov dword ptr [ebp - 0x14], eax
// 0063a601  8bc8                 mov ecx, eax
// 0063a603  6a00                 push 0
// 0063a605  51                   push ecx
// 0063a606  e8a53f2c00           call 0x8fe5b0
// 0063a60b  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0063a60e  2b7e0c               sub edi, dword ptr [esi + 0xc]
// 0063a611  33c9                 xor ecx, ecx
// 0063a613  83c408               add esp, 8
// 0063a616  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0063a619  894dfc               mov dword ptr [ebp - 4], ecx
// 0063a61c  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0063a61f  51                   push ecx
// 0063a620  c1ff03               sar edi, 3
// 0063a623  53                   push ebx
// 0063a624  8d14f8               lea edx, [eax + edi*8]
// 0063a627  52                   push edx
// 0063a628  8bce                 mov ecx, esi
// 0063a62a  8945e8               mov dword ptr [ebp - 0x18], eax
// 0063a62d  897ddc               mov dword ptr [ebp - 0x24], edi
// 0063a630  e81bfdffff           call 0x63a350
// 0063a635  8b460c               mov eax, dword ptr [esi + 0xc]
// 0063a638  c6451400             mov byte ptr [ebp + 0x14], 0
// 0063a63c  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0063a63f  52                   push edx
// 0063a640  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0063a643  52                   push edx
// 0063a644  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0063a647  8d4e08               lea ecx, [esi + 8]
// 0063a64a  51                   push ecx
// 0063a64b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0063a64e  51                   push ecx
// 0063a64f  52                   push edx
// 0063a650  50                   push eax
// 0063a651  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 0063a658  e8f3980a00           call 0x6e3f50
// 0063a65d  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0063a660  8b4610               mov eax, dword ptr [esi + 0x10]
// 0063a663  83c418               add esp, 0x18
// 0063a666  c6451400             mov byte ptr [ebp + 0x14], 0
// 0063a66a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0063a66d  52                   push edx
// 0063a66e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0063a671  03fb                 add edi, ebx
// 0063a673  52                   push edx
// 0063a674  8d0cf9               lea ecx, [ecx + edi*8]
// 0063a677  8d7e08               lea edi, [esi + 8]
// 0063a67a  57                   push edi
// 0063a67b  51                   push ecx
// 0063a67c  50                   push eax
// 0063a67d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0063a680  50                   push eax
// 0063a681  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 0063a688  e8c3980a00           call 0x6e3f50
// 0063a68d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0063a690  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063a693  2bc8                 sub ecx, eax
// 0063a695  c1f903               sar ecx, 3
// 0063a698  83c418               add esp, 0x18
// 0063a69b  03d9                 add ebx, ecx
// 0063a69d  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0063a6a4  85c0                 test eax, eax
// 0063a6a6  741b                 je 0x63a6c3
// 0063a6a8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0063a6ab  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063a6ae  52                   push edx
// 0063a6af  57                   push edi
// 0063a6b0  51                   push ecx
// 0063a6b1  50                   push eax
// 0063a6b2  e8490c0800           call 0x6bb300
// 0063a6b7  8b560c               mov edx, dword ptr [esi + 0xc]
// 0063a6ba  52                   push edx
// 0063a6bb  e8dad21600           call 0x7a799a
// 0063a6c0  83c414               add esp, 0x14
// 0063a6c3  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0063a6c6  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0063a6c9  8d14c8               lea edx, [eax + ecx*8]
// 0063a6cc  8d0cd8               lea ecx, [eax + ebx*8]
// 0063a6cf  895614               mov dword ptr [esi + 0x14], edx
// 0063a6d2  894e10               mov dword ptr [esi + 0x10], ecx
// 0063a6d5  89460c               mov dword ptr [esi + 0xc], eax
// 0063a6d8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063a6db  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a6e2  5f                   pop edi
// 0063a6e3  5e                   pop esi
// 0063a6e4  5b                   pop ebx
// 0063a6e5  8be5                 mov esp, ebp
// 0063a6e7  5d                   pop ebp
// 0063a6e8  c21000               ret 0x10
// library templates-boost-1_34_1/vector_wp.cpp (function ?_Insert_n@?$vector@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@2@IABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
