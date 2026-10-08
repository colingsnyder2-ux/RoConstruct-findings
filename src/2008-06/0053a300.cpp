// from server: 100% by auto
// roc 2008-06 0053a300  unit: seg_00530000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a300
//
// 0053a300  83ec14               sub esp, 0x14
// 0053a303  53                   push ebx
// 0053a304  56                   push esi
// 0053a305  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053a309  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053a30f  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 0053a315  57                   push edi
// 0053a316  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0053a31a  8b0f                 mov ecx, dword ptr [edi]
// 0053a31c  8d0440               lea eax, [eax + eax*2]
// 0053a31f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a323  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 0053a327  0f83b7010000         jae 0x53a4e4
// 0053a32d  55                   push ebp
// 0053a32e  8bff                 mov edi, edi
// 0053a330  8b542430             mov edx, dword ptr [esp + 0x30]
// 0053a334  8b12                 mov edx, dword ptr [edx]
// 0053a336  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053a33a  3bd0                 cmp edx, eax
// 0053a33c  0f83b2000000         jae 0x53a3f4
// 0053a342  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0053a345  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 0053a348  2be9                 sub ebp, ecx
// 0053a34a  2bc2                 sub eax, edx
// 0053a34c  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053a350  3be8                 cmp ebp, eax
// 0053a352  7206                 jb 0x53a35a
// 0053a354  89442410             mov dword ptr [esp + 0x10], eax
// 0053a358  8be8                 mov ebp, eax
// 0053a35a  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0053a360  8b4004               mov eax, dword ptr [eax + 4]
// 0053a363  55                   push ebp
// 0053a364  51                   push ecx
// 0053a365  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053a369  8d7b08               lea edi, [ebx + 8]
// 0053a36c  57                   push edi
// 0053a36d  8d1491               lea edx, [ecx + edx*4]
// 0053a370  52                   push edx
// 0053a371  56                   push esi
// 0053a372  ffd0                 call eax
// 0053a374  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0053a377  83c414               add esp, 0x14
// 0053a37a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0053a37d  7560                 jne 0x53a3df
// 0053a37f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053a383  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0053a38b  7e52                 jle 0x53a3df
// 0053a38d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053a393  897c2414             mov dword ptr [esp + 0x14], edi
// 0053a397  bf01000000           mov edi, 1
// 0053a39c  3bc7                 cmp eax, edi
// 0053a39e  7c2c                 jl 0x53a3cc
// 0053a3a0  83cdff               or ebp, 0xffffffff
// 0053a3a3  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053a3a6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053a3aa  8b02                 mov eax, dword ptr [edx]
// 0053a3ac  51                   push ecx
// 0053a3ad  6a01                 push 1
// 0053a3af  55                   push ebp
// 0053a3b0  50                   push eax
// 0053a3b1  6a00                 push 0
// 0053a3b3  50                   push eax
// 0053a3b4  e877b7feff           call 0x525b30
// 0053a3b9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053a3bf  47                   inc edi
// 0053a3c0  83c418               add esp, 0x18
// 0053a3c3  4d                   dec ebp
// 0053a3c4  3bf8                 cmp edi, eax
// 0053a3c6  7edb                 jle 0x53a3a3
// 0053a3c8  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053a3cc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053a3d0  8344241404           add dword ptr [esp + 0x14], 4
// 0053a3d5  41                   inc ecx
// 0053a3d6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0053a3d9  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053a3dd  7cb8                 jl 0x53a397
// 0053a3df  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053a3e3  0128                 add dword ptr [eax], ebp
// 0053a3e5  016b34               add dword ptr [ebx + 0x34], ebp
// 0053a3e8  296b30               sub dword ptr [ebx + 0x30], ebp
// 0053a3eb  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0053a3ef  e989000000           jmp 0x53a47d
// 0053a3f4  837b3000             cmp dword ptr [ebx + 0x30], 0
// 0053a3f8  0f85e5000000         jne 0x53a4e3
// 0053a3fe  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0053a401  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0053a404  7d77                 jge 0x53a47d
// 0053a406  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053a40a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0053a412  7e63                 jle 0x53a477
// 0053a414  8d4308               lea eax, [ebx + 8]
// 0053a417  89442414             mov dword ptr [esp + 0x14], eax
// 0053a41b  eb03                 jmp 0x53a420
// 0053a41d  8d4900               lea ecx, [ecx]
// 0053a420  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0053a423  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 0053a426  3bf8                 cmp edi, eax
// 0053a428  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053a42b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053a42f  8b2a                 mov ebp, dword ptr [edx]
// 0053a431  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a435  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053a439  7d25                 jge 0x53a460
// 0053a43b  8d47ff               lea eax, [edi - 1]
// 0053a43e  89442418             mov dword ptr [esp + 0x18], eax
// 0053a442  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053a446  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053a44a  51                   push ecx
// 0053a44b  6a01                 push 1
// 0053a44d  57                   push edi
// 0053a44e  55                   push ebp
// 0053a44f  52                   push edx
// 0053a450  55                   push ebp
// 0053a451  e8dab6feff           call 0x525b30
// 0053a456  47                   inc edi
// 0053a457  83c418               add esp, 0x18
// 0053a45a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0053a45e  7ce2                 jl 0x53a442
// 0053a460  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053a464  8344241404           add dword ptr [esp + 0x14], 4
// 0053a469  40                   inc eax
// 0053a46a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0053a46d  89442428             mov dword ptr [esp + 0x28], eax
// 0053a471  7cad                 jl 0x53a420
// 0053a473  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0053a477  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0053a47a  894334               mov dword ptr [ebx + 0x34], eax
// 0053a47d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0053a480  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0053a483  7552                 jne 0x53a4d7
// 0053a485  8b07                 mov eax, dword ptr [edi]
// 0053a487  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053a48b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0053a491  8b5204               mov edx, dword ptr [edx + 4]
// 0053a494  50                   push eax
// 0053a495  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0053a498  51                   push ecx
// 0053a499  50                   push eax
// 0053a49a  8d4b08               lea ecx, [ebx + 8]
// 0053a49d  51                   push ecx
// 0053a49e  56                   push esi
// 0053a49f  ffd2                 call edx
// 0053a4a1  ff07                 inc dword ptr [edi]
// 0053a4a3  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053a4a9  014338               add dword ptr [ebx + 0x38], eax
// 0053a4ac  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053a4b0  83c414               add esp, 0x14
// 0053a4b3  394338               cmp dword ptr [ebx + 0x38], eax
// 0053a4b6  7c07                 jl 0x53a4bf
// 0053a4b8  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 0053a4bf  394334               cmp dword ptr [ebx + 0x34], eax
// 0053a4c2  7c07                 jl 0x53a4cb
// 0053a4c4  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 0053a4cb  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0053a4d1  034b34               add ecx, dword ptr [ebx + 0x34]
// 0053a4d4  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 0053a4d7  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053a4db  3917                 cmp dword ptr [edi], edx
// 0053a4dd  0f824dfeffff         jb 0x53a330
// 0053a4e3  5d                   pop ebp
// 0053a4e4  5f                   pop edi
// 0053a4e5  5e                   pop esi
// 0053a4e6  5b                   pop ebx
// 0053a4e7  83c414               add esp, 0x14
// 0053a4ea  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
