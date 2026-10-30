// from server: 100% by auto
// roc 2012-06 00667040  unit: seg_00660000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667040
//
// 00667040  53                   push ebx
// 00667041  57                   push edi
// 00667042  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00667046  8b4704               mov eax, dword ptr [edi + 4]
// 00667049  8b08                 mov ecx, dword ptr [eax]
// 0066704b  6a68                 push 0x68
// 0066704d  6a01                 push 1
// 0066704f  57                   push edi
// 00667050  ffd1                 call ecx
// 00667052  8bd8                 mov ebx, eax
// 00667054  83c40c               add esp, 0xc
// 00667057  807c241000           cmp byte ptr [esp + 0x10], 0
// 0066705c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 00667062  c703506f6600         mov dword ptr [ebx], 0x666f50
// 00667068  7466                 je 0x6670d0
// 0066706a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0066706e  56                   push esi
// 0066706f  8b7744               mov esi, dword ptr [edi + 0x44]
// 00667072  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066707a  7e50                 jle 0x6670cc
// 0066707c  83c60c               add esi, 0xc
// 0066707f  83c340               add ebx, 0x40
// 00667082  55                   push ebp
// 00667083  8b06                 mov eax, dword ptr [esi]
// 00667085  8b5614               mov edx, dword ptr [esi + 0x14]
// 00667088  8b6f04               mov ebp, dword ptr [edi + 4]
// 0066708b  50                   push eax
// 0066708c  50                   push eax
// 0066708d  52                   push edx
// 0066708e  e82dc4feff           call 0x6534c0
// 00667093  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00667096  83c408               add esp, 8
// 00667099  50                   push eax
// 0066709a  8b46fc               mov eax, dword ptr [esi - 4]
// 0066709d  50                   push eax
// 0066709e  51                   push ecx
// 0066709f  e81cc4feff           call 0x6534c0
// 006670a4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006670a7  83c408               add esp, 8
// 006670aa  50                   push eax
// 006670ab  6a00                 push 0
// 006670ad  6a01                 push 1
// 006670af  57                   push edi
// 006670b0  ffd2                 call edx
// 006670b2  8903                 mov dword ptr [ebx], eax
// 006670b4  8b442430             mov eax, dword ptr [esp + 0x30]
// 006670b8  40                   inc eax
// 006670b9  83c418               add esp, 0x18
// 006670bc  83c304               add ebx, 4
// 006670bf  83c654               add esi, 0x54
// 006670c2  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 006670c5  89442418             mov dword ptr [esp + 0x18], eax
// 006670c9  7cb8                 jl 0x667083
// 006670cb  5d                   pop ebp
// 006670cc  5e                   pop esi
// 006670cd  5f                   pop edi
// 006670ce  5b                   pop ebx
// 006670cf  c3                   ret 
// 006670d0  8b4704               mov eax, dword ptr [edi + 4]
// 006670d3  8b4804               mov ecx, dword ptr [eax + 4]
// 006670d6  6800050000           push 0x500
// 006670db  6a01                 push 1
// 006670dd  57                   push edi
// 006670de  ffd1                 call ecx
// 006670e0  8d9080000000         lea edx, [eax + 0x80]
// 006670e6  89531c               mov dword ptr [ebx + 0x1c], edx
// 006670e9  8d8800010000         lea ecx, [eax + 0x100]
// 006670ef  894b20               mov dword ptr [ebx + 0x20], ecx
// 006670f2  8d9080010000         lea edx, [eax + 0x180]
// 006670f8  8d8800020000         lea ecx, [eax + 0x200]
// 006670fe  895324               mov dword ptr [ebx + 0x24], edx
// 00667101  894b28               mov dword ptr [ebx + 0x28], ecx
// 00667104  8d9080020000         lea edx, [eax + 0x280]
// 0066710a  8d8800030000         lea ecx, [eax + 0x300]
// 00667110  89532c               mov dword ptr [ebx + 0x2c], edx
// 00667113  894b30               mov dword ptr [ebx + 0x30], ecx
// 00667116  894318               mov dword ptr [ebx + 0x18], eax
// 00667119  8d9080030000         lea edx, [eax + 0x380]
// 0066711f  8d8800040000         lea ecx, [eax + 0x400]
// 00667125  83c40c               add esp, 0xc
// 00667128  0580040000           add eax, 0x480
// 0066712d  895334               mov dword ptr [ebx + 0x34], edx
// 00667130  894b38               mov dword ptr [ebx + 0x38], ecx
// 00667133  89433c               mov dword ptr [ebx + 0x3c], eax
// 00667136  5f                   pop edi
// 00667137  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 0066713e  5b                   pop ebx
// 0066713f  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
