// roc 2010-06 00816080  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00816080
//
// 00816080  51                   push ecx
// 00816081  8b442408             mov eax, dword ptr [esp + 8]
// 00816085  890c24               mov dword ptr [esp], ecx
// 00816088  85c0                 test eax, eax
// 0081608a  7444                 je 0x8160d0
// 0081608c  53                   push ebx
// 0081608d  56                   push esi
// 0081608e  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 00816091  33db                 xor ebx, ebx
// 00816093  85f6                 test esi, esi
// 00816095  7e37                 jle 0x8160ce
// 00816097  8d5154               lea edx, [ecx + 0x54]
// 0081609a  55                   push ebp
// 0081609b  89542414             mov dword ptr [esp + 0x14], edx
// 0081609f  57                   push edi
// 008160a0  85db                 test ebx, ebx
// 008160a2  0f8c03010000         jl 0x8161ab
// 008160a8  3b5a08               cmp ebx, dword ptr [edx + 8]
// 008160ab  0f8dfa000000         jge 0x8161ab
// 008160b1  8b7a04               mov edi, dword ptr [edx + 4]
// 008160b4  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 008160b7  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 008160ba  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 008160bd  7508                 jne 0x8160c7
// 008160bf  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 008160c2  3b6808               cmp ebp, dword ptr [eax + 8]
// 008160c5  740d                 je 0x8160d4
// 008160c7  43                   inc ebx
// 008160c8  3bde                 cmp ebx, esi
// 008160ca  7cd4                 jl 0x8160a0
// 008160cc  5f                   pop edi
// 008160cd  5d                   pop ebp
// 008160ce  5e                   pop esi
// 008160cf  5b                   pop ebx
// 008160d0  59                   pop ecx
// 008160d1  c20400               ret 4
// 008160d4  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008160da  3bc5                 cmp eax, ebp
// 008160dc  751a                 jne 0x8160f8
// 008160de  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 008160e4  3b4724               cmp eax, dword ptr [edi + 0x24]
// 008160e7  750f                 jne 0x8160f8
// 008160e9  6a00                 push 0
// 008160eb  e880e6ffff           call 0x814770
// 008160f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 008160f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008160f8  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 008160fe  8b2de4ba9e00         mov ebp, dword ptr [0x9ebae4]
// 00816104  8db1a8000000         lea esi, [ecx + 0xa8]
// 0081610a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0081610d  7536                 jne 0x816145
// 0081610f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00816112  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00816115  752e                 jne 0x816145
// 00816117  8bce                 mov ecx, esi
// 00816119  ff1588c69e00         call dword ptr [0x9ec688]
// 0081611f  33c0                 xor eax, eax
// 00816121  8d4e0c               lea ecx, [esi + 0xc]
// 00816124  51                   push ecx
// 00816125  894608               mov dword ptr [esi + 8], eax
// 00816128  894620               mov dword ptr [esi + 0x20], eax
// 0081612b  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00816132  89461c               mov dword ptr [esi + 0x1c], eax
// 00816135  ffd5                 call ebp
// 00816137  83c628               add esi, 0x28
// 0081613a  56                   push esi
// 0081613b  ffd5                 call ebp
// 0081613d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00816141  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00816145  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0081614b  8db1e0000000         lea esi, [ecx + 0xe0]
// 00816151  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00816154  7532                 jne 0x816188
// 00816156  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00816159  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 0081615c  752a                 jne 0x816188
// 0081615e  8bce                 mov ecx, esi
// 00816160  ff1588c69e00         call dword ptr [0x9ec688]
// 00816166  33c0                 xor eax, eax
// 00816168  8d560c               lea edx, [esi + 0xc]
// 0081616b  52                   push edx
// 0081616c  894608               mov dword ptr [esi + 8], eax
// 0081616f  894620               mov dword ptr [esi + 0x20], eax
// 00816172  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00816179  89461c               mov dword ptr [esi + 0x1c], eax
// 0081617c  ffd5                 call ebp
// 0081617e  83c628               add esi, 0x28
// 00816181  56                   push esi
// 00816182  ffd5                 call ebp
// 00816184  8b542418             mov edx, dword ptr [esp + 0x18]
// 00816188  6a01                 push 1
// 0081618a  53                   push ebx
// 0081618b  8bca                 mov ecx, edx
// 0081618d  e8ae28faff           call 0x7b8a40
// 00816192  8bcf                 mov ecx, edi
// 00816194  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0081619a  57                   push edi
// 0081619b  e8fa17f9ff           call 0x7a799a
// 008161a0  83c404               add esp, 4
// 008161a3  5f                   pop edi
// 008161a4  5d                   pop ebp
// 008161a5  5e                   pop esi
// 008161a6  5b                   pop ebx
// 008161a7  59                   pop ecx
// 008161a8  c20400               ret 4
// 008161ab  e89c1af9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?DelTool@CXTPToolTipContextToolTip@@QAEXPAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp