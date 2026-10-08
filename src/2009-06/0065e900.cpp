// from server: 100% by auto
// roc 2009-06 0065e900  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065e900
//
// 0065e900  55                   push ebp
// 0065e901  8bec                 mov ebp, esp
// 0065e903  6aff                 push -1
// 0065e905  6800bf8600           push 0x86bf00
// 0065e90a  64a100000000         mov eax, dword ptr fs:[0]
// 0065e910  50                   push eax
// 0065e911  64892500000000       mov dword ptr fs:[0], esp
// 0065e918  83ec1c               sub esp, 0x1c
// 0065e91b  53                   push ebx
// 0065e91c  56                   push esi
// 0065e91d  8bf1                 mov esi, ecx
// 0065e91f  57                   push edi
// 0065e920  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0065e923  8965f0               mov dword ptr [ebp - 0x10], esp
// 0065e926  8975e0               mov dword ptr [ebp - 0x20], esi
// 0065e929  85ff                 test edi, edi
// 0065e92b  7504                 jne 0x65e931
// 0065e92d  33c9                 xor ecx, ecx
// 0065e92f  eb0a                 jmp 0x65e93b
// 0065e931  8b4614               mov eax, dword ptr [esi + 0x14]
// 0065e934  2bc7                 sub eax, edi
// 0065e936  c1f803               sar eax, 3
// 0065e939  8bc8                 mov ecx, eax
// 0065e93b  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0065e93e  85db                 test ebx, ebx
// 0065e940  0f84cb020000         je 0x65ec11
// 0065e946  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065e949  8bc2                 mov eax, edx
// 0065e94b  2bc7                 sub eax, edi
// 0065e94d  c1f803               sar eax, 3
// 0065e950  bfffffff1f           mov edi, 0x1fffffff
// 0065e955  2bf8                 sub edi, eax
// 0065e957  3bfb                 cmp edi, ebx
// 0065e959  7305                 jae 0x65e960
// 0065e95b  e8001ae3ff           call 0x490360
// 0065e960  03c3                 add eax, ebx
// 0065e962  3bc8                 cmp ecx, eax
// 0065e964  0f8358010000         jae 0x65eac2
// 0065e96a  8bd1                 mov edx, ecx
// 0065e96c  d1ea                 shr edx, 1
// 0065e96e  bfffffff1f           mov edi, 0x1fffffff
// 0065e973  2bfa                 sub edi, edx
// 0065e975  3bf9                 cmp edi, ecx
// 0065e977  730c                 jae 0x65e985
// 0065e979  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0065e980  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0065e983  eb05                 jmp 0x65e98a
// 0065e985  03ca                 add ecx, edx
// 0065e987  894dec               mov dword ptr [ebp - 0x14], ecx
// 0065e98a  3bc8                 cmp ecx, eax
// 0065e98c  7305                 jae 0x65e993
// 0065e98e  8945ec               mov dword ptr [ebp - 0x14], eax
// 0065e991  8bc8                 mov ecx, eax
// 0065e993  6a00                 push 0
// 0065e995  51                   push ecx
// 0065e996  e85565e2ff           call 0x484ef0
// 0065e99b  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0065e99e  2b7e0c               sub edi, dword ptr [esi + 0xc]
// 0065e9a1  33c9                 xor ecx, ecx
// 0065e9a3  83c408               add esp, 8
// 0065e9a6  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0065e9a9  894dfc               mov dword ptr [ebp - 4], ecx
// 0065e9ac  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0065e9af  51                   push ecx
// 0065e9b0  c1ff03               sar edi, 3
// 0065e9b3  53                   push ebx
// 0065e9b4  8d14f8               lea edx, [eax + edi*8]
// 0065e9b7  52                   push edx
// 0065e9b8  8bce                 mov ecx, esi
// 0065e9ba  8945e8               mov dword ptr [ebp - 0x18], eax
// 0065e9bd  897ddc               mov dword ptr [ebp - 0x24], edi
// 0065e9c0  e8ebfcffff           call 0x65e6b0
// 0065e9c5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065e9c8  c6451400             mov byte ptr [ebp + 0x14], 0
// 0065e9cc  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0065e9cf  52                   push edx
// 0065e9d0  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065e9d3  52                   push edx
// 0065e9d4  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0065e9d7  8d4e08               lea ecx, [esi + 8]
// 0065e9da  51                   push ecx
// 0065e9db  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0065e9de  51                   push ecx
// 0065e9df  52                   push edx
// 0065e9e0  50                   push eax
// 0065e9e1  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 0065e9e8  e803eaffff           call 0x65d3f0
// 0065e9ed  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0065e9f0  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065e9f3  83c418               add esp, 0x18
// 0065e9f6  c6451400             mov byte ptr [ebp + 0x14], 0
// 0065e9fa  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0065e9fd  52                   push edx
// 0065e9fe  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065ea01  03fb                 add edi, ebx
// 0065ea03  52                   push edx
// 0065ea04  8d0cf9               lea ecx, [ecx + edi*8]
// 0065ea07  8d7e08               lea edi, [esi + 8]
// 0065ea0a  57                   push edi
// 0065ea0b  51                   push ecx
// 0065ea0c  50                   push eax
// 0065ea0d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0065ea10  50                   push eax
// 0065ea11  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 0065ea18  e8d3e9ffff           call 0x65d3f0
// 0065ea1d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065ea20  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065ea23  2bc8                 sub ecx, eax
// 0065ea25  c1f903               sar ecx, 3
// 0065ea28  83c418               add esp, 0x18
// 0065ea2b  03d9                 add ebx, ecx
// 0065ea2d  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0065ea34  85c0                 test eax, eax
// 0065ea36  741b                 je 0x65ea53
// 0065ea38  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065ea3b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065ea3e  52                   push edx
// 0065ea3f  57                   push edi
// 0065ea40  51                   push ecx
// 0065ea41  50                   push eax
// 0065ea42  e82921fcff           call 0x620b70
// 0065ea47  8b560c               mov edx, dword ptr [esi + 0xc]
// 0065ea4a  52                   push edx
// 0065ea4b  e8e29f0b00           call 0x718a32
// 0065ea50  83c414               add esp, 0x14
// 0065ea53  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0065ea56  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0065ea59  8d14c8               lea edx, [eax + ecx*8]
// 0065ea5c  8d0cd8               lea ecx, [eax + ebx*8]
// 0065ea5f  895614               mov dword ptr [esi + 0x14], edx
// 0065ea62  894e10               mov dword ptr [esi + 0x10], ecx
// 0065ea65  89460c               mov dword ptr [esi + 0xc], eax
// 0065ea68  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0065ea6b  64890d00000000       mov dword ptr fs:[0], ecx
// 0065ea72  5f                   pop edi
// 0065ea73  5e                   pop esi
// 0065ea74  5b                   pop ebx
// 0065ea75  8be5                 mov esp, ebp
// 0065ea77  5d                   pop ebp
// 0065ea78  c21000               ret 0x10
// library templates-boost-1_34_1/vector_wp.cpp (function ?_Insert_n@?$vector@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@2@IABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
