// from server: 100% by auto
// roc 2012-06 00669ab0  unit: seg_00660000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669ab0
//
// 00669ab0  83ec14               sub esp, 0x14
// 00669ab3  53                   push ebx
// 00669ab4  56                   push esi
// 00669ab5  8b742420             mov esi, dword ptr [esp + 0x20]
// 00669ab9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00669abf  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 00669ac5  57                   push edi
// 00669ac6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00669aca  8b0f                 mov ecx, dword ptr [edi]
// 00669acc  8d0440               lea eax, [eax + eax*2]
// 00669acf  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669ad3  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00669ad7  0f83b7010000         jae 0x669c94
// 00669add  55                   push ebp
// 00669ade  8bff                 mov edi, edi
// 00669ae0  8b542430             mov edx, dword ptr [esp + 0x30]
// 00669ae4  8b12                 mov edx, dword ptr [edx]
// 00669ae6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00669aea  3bd0                 cmp edx, eax
// 00669aec  0f83b2000000         jae 0x669ba4
// 00669af2  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00669af5  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 00669af8  2be9                 sub ebp, ecx
// 00669afa  2bc2                 sub eax, edx
// 00669afc  896c2410             mov dword ptr [esp + 0x10], ebp
// 00669b00  3be8                 cmp ebp, eax
// 00669b02  7206                 jb 0x669b0a
// 00669b04  89442410             mov dword ptr [esp + 0x10], eax
// 00669b08  8be8                 mov ebp, eax
// 00669b0a  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00669b10  8b4004               mov eax, dword ptr [eax + 4]
// 00669b13  55                   push ebp
// 00669b14  51                   push ecx
// 00669b15  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00669b19  8d7b08               lea edi, [ebx + 8]
// 00669b1c  57                   push edi
// 00669b1d  8d1491               lea edx, [ecx + edx*4]
// 00669b20  52                   push edx
// 00669b21  56                   push esi
// 00669b22  ffd0                 call eax
// 00669b24  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00669b27  83c414               add esp, 0x14
// 00669b2a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 00669b2d  7560                 jne 0x669b8f
// 00669b2f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00669b33  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00669b3b  7e52                 jle 0x669b8f
// 00669b3d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00669b43  897c2414             mov dword ptr [esp + 0x14], edi
// 00669b47  bf01000000           mov edi, 1
// 00669b4c  3bc7                 cmp eax, edi
// 00669b4e  7c2c                 jl 0x669b7c
// 00669b50  83cdff               or ebp, 0xffffffff
// 00669b53  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00669b56  8b542414             mov edx, dword ptr [esp + 0x14]
// 00669b5a  8b02                 mov eax, dword ptr [edx]
// 00669b5c  51                   push ecx
// 00669b5d  6a01                 push 1
// 00669b5f  55                   push ebp
// 00669b60  50                   push eax
// 00669b61  6a00                 push 0
// 00669b63  50                   push eax
// 00669b64  e87799feff           call 0x6534e0
// 00669b69  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00669b6f  47                   inc edi
// 00669b70  83c418               add esp, 0x18
// 00669b73  4d                   dec ebp
// 00669b74  3bf8                 cmp edi, eax
// 00669b76  7edb                 jle 0x669b53
// 00669b78  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00669b7c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00669b80  8344241404           add dword ptr [esp + 0x14], 4
// 00669b85  41                   inc ecx
// 00669b86  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00669b89  894c2428             mov dword ptr [esp + 0x28], ecx
// 00669b8d  7cb8                 jl 0x669b47
// 00669b8f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00669b93  0128                 add dword ptr [eax], ebp
// 00669b95  016b34               add dword ptr [ebx + 0x34], ebp
// 00669b98  296b30               sub dword ptr [ebx + 0x30], ebp
// 00669b9b  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00669b9f  e989000000           jmp 0x669c2d
// 00669ba4  837b3000             cmp dword ptr [ebx + 0x30], 0
// 00669ba8  0f85e5000000         jne 0x669c93
// 00669bae  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00669bb1  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00669bb4  7d77                 jge 0x669c2d
// 00669bb6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00669bba  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00669bc2  7e63                 jle 0x669c27
// 00669bc4  8d4308               lea eax, [ebx + 8]
// 00669bc7  89442414             mov dword ptr [esp + 0x14], eax
// 00669bcb  eb03                 jmp 0x669bd0
// 00669bcd  8d4900               lea ecx, [ecx]
// 00669bd0  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00669bd3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 00669bd6  3bf8                 cmp edi, eax
// 00669bd8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00669bdb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00669bdf  8b2a                 mov ebp, dword ptr [edx]
// 00669be1  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669be5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00669be9  7d25                 jge 0x669c10
// 00669beb  8d47ff               lea eax, [edi - 1]
// 00669bee  89442418             mov dword ptr [esp + 0x18], eax
// 00669bf2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00669bf6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00669bfa  51                   push ecx
// 00669bfb  6a01                 push 1
// 00669bfd  57                   push edi
// 00669bfe  55                   push ebp
// 00669bff  52                   push edx
// 00669c00  55                   push ebp
// 00669c01  e8da98feff           call 0x6534e0
// 00669c06  47                   inc edi
// 00669c07  83c418               add esp, 0x18
// 00669c0a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00669c0e  7ce2                 jl 0x669bf2
// 00669c10  8b442428             mov eax, dword ptr [esp + 0x28]
// 00669c14  8344241404           add dword ptr [esp + 0x14], 4
// 00669c19  40                   inc eax
// 00669c1a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00669c1d  89442428             mov dword ptr [esp + 0x28], eax
// 00669c21  7cad                 jl 0x669bd0
// 00669c23  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00669c27  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00669c2a  894334               mov dword ptr [ebx + 0x34], eax
// 00669c2d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00669c30  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00669c33  7552                 jne 0x669c87
// 00669c35  8b07                 mov eax, dword ptr [edi]
// 00669c37  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00669c3b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00669c41  8b5204               mov edx, dword ptr [edx + 4]
// 00669c44  50                   push eax
// 00669c45  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00669c48  51                   push ecx
// 00669c49  50                   push eax
// 00669c4a  8d4b08               lea ecx, [ebx + 8]
// 00669c4d  51                   push ecx
// 00669c4e  56                   push esi
// 00669c4f  ffd2                 call edx
// 00669c51  ff07                 inc dword ptr [edi]
// 00669c53  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00669c59  014338               add dword ptr [ebx + 0x38], eax
// 00669c5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00669c60  83c414               add esp, 0x14
// 00669c63  394338               cmp dword ptr [ebx + 0x38], eax
// 00669c66  7c07                 jl 0x669c6f
// 00669c68  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 00669c6f  394334               cmp dword ptr [ebx + 0x34], eax
// 00669c72  7c07                 jl 0x669c7b
// 00669c74  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 00669c7b  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00669c81  034b34               add ecx, dword ptr [ebx + 0x34]
// 00669c84  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 00669c87  8b542440             mov edx, dword ptr [esp + 0x40]
// 00669c8b  3917                 cmp dword ptr [edi], edx
// 00669c8d  0f824dfeffff         jb 0x669ae0
// 00669c93  5d                   pop ebp
// 00669c94  5f                   pop edi
// 00669c95  5e                   pop esi
// 00669c96  5b                   pop ebx
// 00669c97  83c414               add esp, 0x14
// 00669c9a  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
