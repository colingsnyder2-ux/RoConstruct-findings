// from server: 100% by auto
// roc 2010-06 006ab880  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ab880
//
// 006ab880  55                   push ebp
// 006ab881  8bec                 mov ebp, esp
// 006ab883  6aff                 push -1
// 006ab885  6800339a00           push 0x9a3300
// 006ab88a  64a100000000         mov eax, dword ptr fs:[0]
// 006ab890  50                   push eax
// 006ab891  64892500000000       mov dword ptr fs:[0], esp
// 006ab898  83ec1c               sub esp, 0x1c
// 006ab89b  53                   push ebx
// 006ab89c  56                   push esi
// 006ab89d  8bf1                 mov esi, ecx
// 006ab89f  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006ab8a2  57                   push edi
// 006ab8a3  8965f0               mov dword ptr [ebp - 0x10], esp
// 006ab8a6  8975e0               mov dword ptr [ebp - 0x20], esi
// 006ab8a9  85db                 test ebx, ebx
// 006ab8ab  7504                 jne 0x6ab8b1
// 006ab8ad  33c9                 xor ecx, ecx
// 006ab8af  eb0a                 jmp 0x6ab8bb
// 006ab8b1  8b4614               mov eax, dword ptr [esi + 0x14]
// 006ab8b4  2bc3                 sub eax, ebx
// 006ab8b6  c1f803               sar eax, 3
// 006ab8b9  8bc8                 mov ecx, eax
// 006ab8bb  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006ab8be  85ff                 test edi, edi
// 006ab8c0  0f8480020000         je 0x6abb46
// 006ab8c6  8b5610               mov edx, dword ptr [esi + 0x10]
// 006ab8c9  8bc2                 mov eax, edx
// 006ab8cb  2bc3                 sub eax, ebx
// 006ab8cd  c1f803               sar eax, 3
// 006ab8d0  bbffffff1f           mov ebx, 0x1fffffff
// 006ab8d5  2bd8                 sub ebx, eax
// 006ab8d7  3bdf                 cmp ebx, edi
// 006ab8d9  7305                 jae 0x6ab8e0
// 006ab8db  e81085d7ff           call 0x423df0
// 006ab8e0  8d1c38               lea ebx, [eax + edi]
// 006ab8e3  3bcb                 cmp ecx, ebx
// 006ab8e5  0f8358010000         jae 0x6aba43
// 006ab8eb  8bc1                 mov eax, ecx
// 006ab8ed  d1e8                 shr eax, 1
// 006ab8ef  baffffff1f           mov edx, 0x1fffffff
// 006ab8f4  2bd0                 sub edx, eax
// 006ab8f6  3bd1                 cmp edx, ecx
// 006ab8f8  730c                 jae 0x6ab906
// 006ab8fa  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 006ab901  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006ab904  eb05                 jmp 0x6ab90b
// 006ab906  03c8                 add ecx, eax
// 006ab908  894dec               mov dword ptr [ebp - 0x14], ecx
// 006ab90b  3bcb                 cmp ecx, ebx
// 006ab90d  7305                 jae 0x6ab914
// 006ab90f  895dec               mov dword ptr [ebp - 0x14], ebx
// 006ab912  8bcb                 mov ecx, ebx
// 006ab914  6a00                 push 0
// 006ab916  51                   push ecx
// 006ab917  e8942c2500           call 0x8fe5b0
// 006ab91c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 006ab91f  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 006ab922  33c9                 xor ecx, ecx
// 006ab924  83c408               add esp, 8
// 006ab927  894de4               mov dword ptr [ebp - 0x1c], ecx
// 006ab92a  894dfc               mov dword ptr [ebp - 4], ecx
// 006ab92d  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006ab930  51                   push ecx
// 006ab931  c1fb03               sar ebx, 3
// 006ab934  57                   push edi
// 006ab935  8d14d8               lea edx, [eax + ebx*8]
// 006ab938  52                   push edx
// 006ab939  8bce                 mov ecx, esi
// 006ab93b  8945e8               mov dword ptr [ebp - 0x18], eax
// 006ab93e  895ddc               mov dword ptr [ebp - 0x24], ebx
// 006ab941  e84a5df6ff           call 0x611690
// 006ab946  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ab949  c6451400             mov byte ptr [ebp + 0x14], 0
// 006ab94d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006ab950  52                   push edx
// 006ab951  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006ab954  52                   push edx
// 006ab955  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006ab958  8d4e08               lea ecx, [esi + 8]
// 006ab95b  51                   push ecx
// 006ab95c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006ab95f  51                   push ecx
// 006ab960  52                   push edx
// 006ab961  50                   push eax
// 006ab962  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 006ab969  e88243f6ff           call 0x60fcf0
// 006ab96e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006ab971  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ab974  83c418               add esp, 0x18
// 006ab977  c6451400             mov byte ptr [ebp + 0x14], 0
// 006ab97b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006ab97e  52                   push edx
// 006ab97f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006ab982  03df                 add ebx, edi
// 006ab984  52                   push edx
// 006ab985  8d0cd9               lea ecx, [ecx + ebx*8]
// 006ab988  8d5e08               lea ebx, [esi + 8]
// 006ab98b  53                   push ebx
// 006ab98c  51                   push ecx
// 006ab98d  50                   push eax
// 006ab98e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006ab991  50                   push eax
// 006ab992  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 006ab999  e85243f6ff           call 0x60fcf0
// 006ab99e  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ab9a1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ab9a4  2bc8                 sub ecx, eax
// 006ab9a6  c1f903               sar ecx, 3
// 006ab9a9  83c418               add esp, 0x18
// 006ab9ac  03f9                 add edi, ecx
// 006ab9ae  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006ab9b5  85c0                 test eax, eax
// 006ab9b7  741b                 je 0x6ab9d4
// 006ab9b9  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006ab9bc  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ab9bf  52                   push edx
// 006ab9c0  53                   push ebx
// 006ab9c1  51                   push ecx
// 006ab9c2  50                   push eax
// 006ab9c3  e8e87bf5ff           call 0x6035b0
// 006ab9c8  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ab9cb  52                   push edx
// 006ab9cc  e8c9bf0f00           call 0x7a799a
// 006ab9d1  83c414               add esp, 0x14
// 006ab9d4  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 006ab9d7  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006ab9da  8d14c8               lea edx, [eax + ecx*8]
// 006ab9dd  8d0cf8               lea ecx, [eax + edi*8]
// 006ab9e0  895614               mov dword ptr [esi + 0x14], edx
// 006ab9e3  894e10               mov dword ptr [esi + 0x10], ecx
// 006ab9e6  89460c               mov dword ptr [esi + 0xc], eax
// 006ab9e9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006ab9ec  64890d00000000       mov dword ptr fs:[0], ecx
// 006ab9f3  5f                   pop edi
// 006ab9f4  5e                   pop esi
// 006ab9f5  5b                   pop ebx
// 006ab9f6  8be5                 mov esp, ebp
// 006ab9f8  5d                   pop ebp
// 006ab9f9  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Insert_n@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@2@IABV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
