// roc 2009-06 005a45e0  unit: seg_005a0000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a45e0
//
// 005a45e0  83ec14               sub esp, 0x14
// 005a45e3  53                   push ebx
// 005a45e4  56                   push esi
// 005a45e5  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a45e9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a45ef  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 005a45f5  57                   push edi
// 005a45f6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005a45fa  8b0f                 mov ecx, dword ptr [edi]
// 005a45fc  8d0440               lea eax, [eax + eax*2]
// 005a45ff  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4603  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 005a4607  0f83b7010000         jae 0x5a47c4
// 005a460d  55                   push ebp
// 005a460e  8bff                 mov edi, edi
// 005a4610  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a4614  8b12                 mov edx, dword ptr [edx]
// 005a4616  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a461a  3bd0                 cmp edx, eax
// 005a461c  0f83b2000000         jae 0x5a46d4
// 005a4622  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005a4625  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 005a4628  2be9                 sub ebp, ecx
// 005a462a  2bc2                 sub eax, edx
// 005a462c  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a4630  3be8                 cmp ebp, eax
// 005a4632  7206                 jb 0x5a463a
// 005a4634  89442410             mov dword ptr [esp + 0x10], eax
// 005a4638  8be8                 mov ebp, eax
// 005a463a  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005a4640  8b4004               mov eax, dword ptr [eax + 4]
// 005a4643  55                   push ebp
// 005a4644  51                   push ecx
// 005a4645  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a4649  8d7b08               lea edi, [ebx + 8]
// 005a464c  57                   push edi
// 005a464d  8d1491               lea edx, [ecx + edx*4]
// 005a4650  52                   push edx
// 005a4651  56                   push esi
// 005a4652  ffd0                 call eax
// 005a4654  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 005a4657  83c414               add esp, 0x14
// 005a465a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 005a465d  7560                 jne 0x5a46bf
// 005a465f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a4663  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a466b  7e52                 jle 0x5a46bf
// 005a466d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a4673  897c2414             mov dword ptr [esp + 0x14], edi
// 005a4677  bf01000000           mov edi, 1
// 005a467c  3bc7                 cmp eax, edi
// 005a467e  7c2c                 jl 0x5a46ac
// 005a4680  83cdff               or ebp, 0xffffffff
// 005a4683  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a4686  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a468a  8b02                 mov eax, dword ptr [edx]
// 005a468c  51                   push ecx
// 005a468d  6a01                 push 1
// 005a468f  55                   push ebp
// 005a4690  50                   push eax
// 005a4691  6a00                 push 0
// 005a4693  50                   push eax
// 005a4694  e8a757feff           call 0x589e40
// 005a4699  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a469f  47                   inc edi
// 005a46a0  83c418               add esp, 0x18
// 005a46a3  4d                   dec ebp
// 005a46a4  3bf8                 cmp edi, eax
// 005a46a6  7edb                 jle 0x5a4683
// 005a46a8  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a46ac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a46b0  8344241404           add dword ptr [esp + 0x14], 4
// 005a46b5  41                   inc ecx
// 005a46b6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005a46b9  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a46bd  7cb8                 jl 0x5a4677
// 005a46bf  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a46c3  0128                 add dword ptr [eax], ebp
// 005a46c5  016b34               add dword ptr [ebx + 0x34], ebp
// 005a46c8  296b30               sub dword ptr [ebx + 0x30], ebp
// 005a46cb  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005a46cf  e989000000           jmp 0x5a475d
// 005a46d4  837b3000             cmp dword ptr [ebx + 0x30], 0
// 005a46d8  0f85e5000000         jne 0x5a47c3
// 005a46de  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005a46e1  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005a46e4  7d77                 jge 0x5a475d
// 005a46e6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a46ea  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a46f2  7e63                 jle 0x5a4757
// 005a46f4  8d4308               lea eax, [ebx + 8]
// 005a46f7  89442414             mov dword ptr [esp + 0x14], eax
// 005a46fb  eb03                 jmp 0x5a4700
// 005a46fd  8d4900               lea ecx, [ecx]
// 005a4700  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 005a4703  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 005a4706  3bf8                 cmp edi, eax
// 005a4708  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a470b  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a470f  8b2a                 mov ebp, dword ptr [edx]
// 005a4711  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4715  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a4719  7d25                 jge 0x5a4740
// 005a471b  8d47ff               lea eax, [edi - 1]
// 005a471e  89442418             mov dword ptr [esp + 0x18], eax
// 005a4722  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a4726  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a472a  51                   push ecx
// 005a472b  6a01                 push 1
// 005a472d  57                   push edi
// 005a472e  55                   push ebp
// 005a472f  52                   push edx
// 005a4730  55                   push ebp
// 005a4731  e80a57feff           call 0x589e40
// 005a4736  47                   inc edi
// 005a4737  83c418               add esp, 0x18
// 005a473a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005a473e  7ce2                 jl 0x5a4722
// 005a4740  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4744  8344241404           add dword ptr [esp + 0x14], 4
// 005a4749  40                   inc eax
// 005a474a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005a474d  89442428             mov dword ptr [esp + 0x28], eax
// 005a4751  7cad                 jl 0x5a4700
// 005a4753  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005a4757  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 005a475a  894334               mov dword ptr [ebx + 0x34], eax
// 005a475d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005a4760  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005a4763  7552                 jne 0x5a47b7
// 005a4765  8b07                 mov eax, dword ptr [edi]
// 005a4767  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a476b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 005a4771  8b5204               mov edx, dword ptr [edx + 4]
// 005a4774  50                   push eax
// 005a4775  8b4338               mov eax, dword ptr [ebx + 0x38]
// 005a4778  51                   push ecx
// 005a4779  50                   push eax
// 005a477a  8d4b08               lea ecx, [ebx + 8]
// 005a477d  51                   push ecx
// 005a477e  56                   push esi
// 005a477f  ffd2                 call edx
// 005a4781  ff07                 inc dword ptr [edi]
// 005a4783  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a4789  014338               add dword ptr [ebx + 0x38], eax
// 005a478c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a4790  83c414               add esp, 0x14
// 005a4793  394338               cmp dword ptr [ebx + 0x38], eax
// 005a4796  7c07                 jl 0x5a479f
// 005a4798  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 005a479f  394334               cmp dword ptr [ebx + 0x34], eax
// 005a47a2  7c07                 jl 0x5a47ab
// 005a47a4  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 005a47ab  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005a47b1  034b34               add ecx, dword ptr [ebx + 0x34]
// 005a47b4  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 005a47b7  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a47bb  3917                 cmp dword ptr [edi], edx
// 005a47bd  0f824dfeffff         jb 0x5a4610
// 005a47c3  5d                   pop ebp
// 005a47c4  5f                   pop edi
// 005a47c5  5e                   pop esi
// 005a47c6  5b                   pop ebx
// 005a47c7  83c414               add esp, 0x14
// 005a47ca  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
