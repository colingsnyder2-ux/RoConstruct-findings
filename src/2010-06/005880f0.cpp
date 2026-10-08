// from server: 100% by auto
// roc 2010-06 005880f0  unit: seg_00580000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005880f0
//
// 005880f0  83ec14               sub esp, 0x14
// 005880f3  53                   push ebx
// 005880f4  56                   push esi
// 005880f5  8b742420             mov esi, dword ptr [esp + 0x20]
// 005880f9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005880ff  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 00588105  57                   push edi
// 00588106  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0058810a  8b0f                 mov ecx, dword ptr [edi]
// 0058810c  8d0440               lea eax, [eax + eax*2]
// 0058810f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00588113  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00588117  0f83b7010000         jae 0x5882d4
// 0058811d  55                   push ebp
// 0058811e  8bff                 mov edi, edi
// 00588120  8b542430             mov edx, dword ptr [esp + 0x30]
// 00588124  8b12                 mov edx, dword ptr [edx]
// 00588126  8b442434             mov eax, dword ptr [esp + 0x34]
// 0058812a  3bd0                 cmp edx, eax
// 0058812c  0f83b2000000         jae 0x5881e4
// 00588132  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00588135  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 00588138  2be9                 sub ebp, ecx
// 0058813a  2bc2                 sub eax, edx
// 0058813c  896c2410             mov dword ptr [esp + 0x10], ebp
// 00588140  3be8                 cmp ebp, eax
// 00588142  7206                 jb 0x58814a
// 00588144  89442410             mov dword ptr [esp + 0x10], eax
// 00588148  8be8                 mov ebp, eax
// 0058814a  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00588150  8b4004               mov eax, dword ptr [eax + 4]
// 00588153  55                   push ebp
// 00588154  51                   push ecx
// 00588155  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00588159  8d7b08               lea edi, [ebx + 8]
// 0058815c  57                   push edi
// 0058815d  8d1491               lea edx, [ecx + edx*4]
// 00588160  52                   push edx
// 00588161  56                   push esi
// 00588162  ffd0                 call eax
// 00588164  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00588167  83c414               add esp, 0x14
// 0058816a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0058816d  7560                 jne 0x5881cf
// 0058816f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00588173  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0058817b  7e52                 jle 0x5881cf
// 0058817d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00588183  897c2414             mov dword ptr [esp + 0x14], edi
// 00588187  bf01000000           mov edi, 1
// 0058818c  3bc7                 cmp eax, edi
// 0058818e  7c2c                 jl 0x5881bc
// 00588190  83cdff               or ebp, 0xffffffff
// 00588193  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00588196  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058819a  8b02                 mov eax, dword ptr [edx]
// 0058819c  51                   push ecx
// 0058819d  6a01                 push 1
// 0058819f  55                   push ebp
// 005881a0  50                   push eax
// 005881a1  6a00                 push 0
// 005881a3  50                   push eax
// 005881a4  e8c751feff           call 0x56d370
// 005881a9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005881af  47                   inc edi
// 005881b0  83c418               add esp, 0x18
// 005881b3  4d                   dec ebp
// 005881b4  3bf8                 cmp edi, eax
// 005881b6  7edb                 jle 0x588193
// 005881b8  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005881bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005881c0  8344241404           add dword ptr [esp + 0x14], 4
// 005881c5  41                   inc ecx
// 005881c6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005881c9  894c2428             mov dword ptr [esp + 0x28], ecx
// 005881cd  7cb8                 jl 0x588187
// 005881cf  8b442430             mov eax, dword ptr [esp + 0x30]
// 005881d3  0128                 add dword ptr [eax], ebp
// 005881d5  016b34               add dword ptr [ebx + 0x34], ebp
// 005881d8  296b30               sub dword ptr [ebx + 0x30], ebp
// 005881db  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005881df  e989000000           jmp 0x58826d
// 005881e4  837b3000             cmp dword ptr [ebx + 0x30], 0
// 005881e8  0f85e5000000         jne 0x5882d3
// 005881ee  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005881f1  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005881f4  7d77                 jge 0x58826d
// 005881f6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005881fa  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00588202  7e63                 jle 0x588267
// 00588204  8d4308               lea eax, [ebx + 8]
// 00588207  89442414             mov dword ptr [esp + 0x14], eax
// 0058820b  eb03                 jmp 0x588210
// 0058820d  8d4900               lea ecx, [ecx]
// 00588210  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00588213  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 00588216  3bf8                 cmp edi, eax
// 00588218  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0058821b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058821f  8b2a                 mov ebp, dword ptr [edx]
// 00588221  8944241c             mov dword ptr [esp + 0x1c], eax
// 00588225  894c2410             mov dword ptr [esp + 0x10], ecx
// 00588229  7d25                 jge 0x588250
// 0058822b  8d47ff               lea eax, [edi - 1]
// 0058822e  89442418             mov dword ptr [esp + 0x18], eax
// 00588232  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588236  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058823a  51                   push ecx
// 0058823b  6a01                 push 1
// 0058823d  57                   push edi
// 0058823e  55                   push ebp
// 0058823f  52                   push edx
// 00588240  55                   push ebp
// 00588241  e82a51feff           call 0x56d370
// 00588246  47                   inc edi
// 00588247  83c418               add esp, 0x18
// 0058824a  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0058824e  7ce2                 jl 0x588232
// 00588250  8b442428             mov eax, dword ptr [esp + 0x28]
// 00588254  8344241404           add dword ptr [esp + 0x14], 4
// 00588259  40                   inc eax
// 0058825a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0058825d  89442428             mov dword ptr [esp + 0x28], eax
// 00588261  7cad                 jl 0x588210
// 00588263  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00588267  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0058826a  894334               mov dword ptr [ebx + 0x34], eax
// 0058826d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00588270  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00588273  7552                 jne 0x5882c7
// 00588275  8b07                 mov eax, dword ptr [edi]
// 00588277  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0058827b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00588281  8b5204               mov edx, dword ptr [edx + 4]
// 00588284  50                   push eax
// 00588285  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00588288  51                   push ecx
// 00588289  50                   push eax
// 0058828a  8d4b08               lea ecx, [ebx + 8]
// 0058828d  51                   push ecx
// 0058828e  56                   push esi
// 0058828f  ffd2                 call edx
// 00588291  ff07                 inc dword ptr [edi]
// 00588293  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00588299  014338               add dword ptr [ebx + 0x38], eax
// 0058829c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005882a0  83c414               add esp, 0x14
// 005882a3  394338               cmp dword ptr [ebx + 0x38], eax
// 005882a6  7c07                 jl 0x5882af
// 005882a8  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 005882af  394334               cmp dword ptr [ebx + 0x34], eax
// 005882b2  7c07                 jl 0x5882bb
// 005882b4  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 005882bb  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005882c1  034b34               add ecx, dword ptr [ebx + 0x34]
// 005882c4  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 005882c7  8b542440             mov edx, dword ptr [esp + 0x40]
// 005882cb  3917                 cmp dword ptr [edi], edx
// 005882cd  0f824dfeffff         jb 0x588120
// 005882d3  5d                   pop ebp
// 005882d4  5f                   pop edi
// 005882d5  5e                   pop esi
// 005882d6  5b                   pop ebx
// 005882d7  83c414               add esp, 0x14
// 005882da  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
