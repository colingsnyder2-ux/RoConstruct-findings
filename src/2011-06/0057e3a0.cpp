// roc 2011-06 0057e3a0  unit: seg_00570000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e3a0
//
// 0057e3a0  83ec14               sub esp, 0x14
// 0057e3a3  53                   push ebx
// 0057e3a4  56                   push esi
// 0057e3a5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057e3a9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057e3af  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 0057e3b5  57                   push edi
// 0057e3b6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0057e3ba  8b0f                 mov ecx, dword ptr [edi]
// 0057e3bc  8d0440               lea eax, [eax + eax*2]
// 0057e3bf  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e3c3  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 0057e3c7  0f83b7010000         jae 0x57e584
// 0057e3cd  55                   push ebp
// 0057e3ce  8bff                 mov edi, edi
// 0057e3d0  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057e3d4  8b12                 mov edx, dword ptr [edx]
// 0057e3d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057e3da  3bd0                 cmp edx, eax
// 0057e3dc  0f83b2000000         jae 0x57e494
// 0057e3e2  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0057e3e5  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 0057e3e8  2be9                 sub ebp, ecx
// 0057e3ea  2bc2                 sub eax, edx
// 0057e3ec  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057e3f0  3be8                 cmp ebp, eax
// 0057e3f2  7206                 jb 0x57e3fa
// 0057e3f4  89442410             mov dword ptr [esp + 0x10], eax
// 0057e3f8  8be8                 mov ebp, eax
// 0057e3fa  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0057e400  8b4004               mov eax, dword ptr [eax + 4]
// 0057e403  55                   push ebp
// 0057e404  51                   push ecx
// 0057e405  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057e409  8d7b08               lea edi, [ebx + 8]
// 0057e40c  57                   push edi
// 0057e40d  8d1491               lea edx, [ecx + edx*4]
// 0057e410  52                   push edx
// 0057e411  56                   push esi
// 0057e412  ffd0                 call eax
// 0057e414  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0057e417  83c414               add esp, 0x14
// 0057e41a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0057e41d  7560                 jne 0x57e47f
// 0057e41f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057e423  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0057e42b  7e52                 jle 0x57e47f
// 0057e42d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057e433  897c2414             mov dword ptr [esp + 0x14], edi
// 0057e437  bf01000000           mov edi, 1
// 0057e43c  3bc7                 cmp eax, edi
// 0057e43e  7c2c                 jl 0x57e46c
// 0057e440  83cdff               or ebp, 0xffffffff
// 0057e443  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057e446  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057e44a  8b02                 mov eax, dword ptr [edx]
// 0057e44c  51                   push ecx
// 0057e44d  6a01                 push 1
// 0057e44f  55                   push ebp
// 0057e450  50                   push eax
// 0057e451  6a00                 push 0
// 0057e453  50                   push eax
// 0057e454  e87799feff           call 0x567dd0
// 0057e459  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057e45f  47                   inc edi
// 0057e460  83c418               add esp, 0x18
// 0057e463  4d                   dec ebp
// 0057e464  3bf8                 cmp edi, eax
// 0057e466  7edb                 jle 0x57e443
// 0057e468  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e46c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057e470  8344241404           add dword ptr [esp + 0x14], 4
// 0057e475  41                   inc ecx
// 0057e476  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0057e479  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057e47d  7cb8                 jl 0x57e437
// 0057e47f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057e483  0128                 add dword ptr [eax], ebp
// 0057e485  016b34               add dword ptr [ebx + 0x34], ebp
// 0057e488  296b30               sub dword ptr [ebx + 0x30], ebp
// 0057e48b  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0057e48f  e989000000           jmp 0x57e51d
// 0057e494  837b3000             cmp dword ptr [ebx + 0x30], 0
// 0057e498  0f85e5000000         jne 0x57e583
// 0057e49e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0057e4a1  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0057e4a4  7d77                 jge 0x57e51d
// 0057e4a6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057e4aa  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0057e4b2  7e63                 jle 0x57e517
// 0057e4b4  8d4308               lea eax, [ebx + 8]
// 0057e4b7  89442414             mov dword ptr [esp + 0x14], eax
// 0057e4bb  eb03                 jmp 0x57e4c0
// 0057e4bd  8d4900               lea ecx, [ecx]
// 0057e4c0  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0057e4c3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 0057e4c6  3bf8                 cmp edi, eax
// 0057e4c8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057e4cb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057e4cf  8b2a                 mov ebp, dword ptr [edx]
// 0057e4d1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e4d5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057e4d9  7d25                 jge 0x57e500
// 0057e4db  8d47ff               lea eax, [edi - 1]
// 0057e4de  89442418             mov dword ptr [esp + 0x18], eax
// 0057e4e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e4e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e4ea  51                   push ecx
// 0057e4eb  6a01                 push 1
// 0057e4ed  57                   push edi
// 0057e4ee  55                   push ebp
// 0057e4ef  52                   push edx
// 0057e4f0  55                   push ebp
// 0057e4f1  e8da98feff           call 0x567dd0
// 0057e4f6  47                   inc edi
// 0057e4f7  83c418               add esp, 0x18
// 0057e4fa  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0057e4fe  7ce2                 jl 0x57e4e2
// 0057e500  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e504  8344241404           add dword ptr [esp + 0x14], 4
// 0057e509  40                   inc eax
// 0057e50a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0057e50d  89442428             mov dword ptr [esp + 0x28], eax
// 0057e511  7cad                 jl 0x57e4c0
// 0057e513  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0057e517  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0057e51a  894334               mov dword ptr [ebx + 0x34], eax
// 0057e51d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0057e520  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0057e523  7552                 jne 0x57e577
// 0057e525  8b07                 mov eax, dword ptr [edi]
// 0057e527  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057e52b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0057e531  8b5204               mov edx, dword ptr [edx + 4]
// 0057e534  50                   push eax
// 0057e535  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0057e538  51                   push ecx
// 0057e539  50                   push eax
// 0057e53a  8d4b08               lea ecx, [ebx + 8]
// 0057e53d  51                   push ecx
// 0057e53e  56                   push esi
// 0057e53f  ffd2                 call edx
// 0057e541  ff07                 inc dword ptr [edi]
// 0057e543  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057e549  014338               add dword ptr [ebx + 0x38], eax
// 0057e54c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057e550  83c414               add esp, 0x14
// 0057e553  394338               cmp dword ptr [ebx + 0x38], eax
// 0057e556  7c07                 jl 0x57e55f
// 0057e558  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 0057e55f  394334               cmp dword ptr [ebx + 0x34], eax
// 0057e562  7c07                 jl 0x57e56b
// 0057e564  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 0057e56b  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0057e571  034b34               add ecx, dword ptr [ebx + 0x34]
// 0057e574  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 0057e577  8b542440             mov edx, dword ptr [esp + 0x40]
// 0057e57b  3917                 cmp dword ptr [edi], edx
// 0057e57d  0f824dfeffff         jb 0x57e3d0
// 0057e583  5d                   pop ebp
// 0057e584  5f                   pop edi
// 0057e585  5e                   pop esi
// 0057e586  5b                   pop ebx
// 0057e587  83c414               add esp, 0x14
// 0057e58a  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
