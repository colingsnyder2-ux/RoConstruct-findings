// from server: 100% by auto
// roc 2011-06 0057b930  unit: seg_00570000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b930
//
// 0057b930  53                   push ebx
// 0057b931  57                   push edi
// 0057b932  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057b936  8b4704               mov eax, dword ptr [edi + 4]
// 0057b939  8b08                 mov ecx, dword ptr [eax]
// 0057b93b  6a68                 push 0x68
// 0057b93d  6a01                 push 1
// 0057b93f  57                   push edi
// 0057b940  ffd1                 call ecx
// 0057b942  8bd8                 mov ebx, eax
// 0057b944  83c40c               add esp, 0xc
// 0057b947  807c241000           cmp byte ptr [esp + 0x10], 0
// 0057b94c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 0057b952  c70340b85700         mov dword ptr [ebx], 0x57b840
// 0057b958  7466                 je 0x57b9c0
// 0057b95a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0057b95e  56                   push esi
// 0057b95f  8b7744               mov esi, dword ptr [edi + 0x44]
// 0057b962  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057b96a  7e50                 jle 0x57b9bc
// 0057b96c  83c60c               add esi, 0xc
// 0057b96f  83c340               add ebx, 0x40
// 0057b972  55                   push ebp
// 0057b973  8b06                 mov eax, dword ptr [esi]
// 0057b975  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057b978  8b6f04               mov ebp, dword ptr [edi + 4]
// 0057b97b  50                   push eax
// 0057b97c  50                   push eax
// 0057b97d  52                   push edx
// 0057b97e  e82dc4feff           call 0x567db0
// 0057b983  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057b986  83c408               add esp, 8
// 0057b989  50                   push eax
// 0057b98a  8b46fc               mov eax, dword ptr [esi - 4]
// 0057b98d  50                   push eax
// 0057b98e  51                   push ecx
// 0057b98f  e81cc4feff           call 0x567db0
// 0057b994  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0057b997  83c408               add esp, 8
// 0057b99a  50                   push eax
// 0057b99b  6a00                 push 0
// 0057b99d  6a01                 push 1
// 0057b99f  57                   push edi
// 0057b9a0  ffd2                 call edx
// 0057b9a2  8903                 mov dword ptr [ebx], eax
// 0057b9a4  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057b9a8  40                   inc eax
// 0057b9a9  83c418               add esp, 0x18
// 0057b9ac  83c304               add ebx, 4
// 0057b9af  83c654               add esi, 0x54
// 0057b9b2  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 0057b9b5  89442418             mov dword ptr [esp + 0x18], eax
// 0057b9b9  7cb8                 jl 0x57b973
// 0057b9bb  5d                   pop ebp
// 0057b9bc  5e                   pop esi
// 0057b9bd  5f                   pop edi
// 0057b9be  5b                   pop ebx
// 0057b9bf  c3                   ret 
// 0057b9c0  8b4704               mov eax, dword ptr [edi + 4]
// 0057b9c3  8b4804               mov ecx, dword ptr [eax + 4]
// 0057b9c6  6800050000           push 0x500
// 0057b9cb  6a01                 push 1
// 0057b9cd  57                   push edi
// 0057b9ce  ffd1                 call ecx
// 0057b9d0  8d9080000000         lea edx, [eax + 0x80]
// 0057b9d6  89531c               mov dword ptr [ebx + 0x1c], edx
// 0057b9d9  8d8800010000         lea ecx, [eax + 0x100]
// 0057b9df  894b20               mov dword ptr [ebx + 0x20], ecx
// 0057b9e2  8d9080010000         lea edx, [eax + 0x180]
// 0057b9e8  8d8800020000         lea ecx, [eax + 0x200]
// 0057b9ee  895324               mov dword ptr [ebx + 0x24], edx
// 0057b9f1  894b28               mov dword ptr [ebx + 0x28], ecx
// 0057b9f4  8d9080020000         lea edx, [eax + 0x280]
// 0057b9fa  8d8800030000         lea ecx, [eax + 0x300]
// 0057ba00  89532c               mov dword ptr [ebx + 0x2c], edx
// 0057ba03  894b30               mov dword ptr [ebx + 0x30], ecx
// 0057ba06  894318               mov dword ptr [ebx + 0x18], eax
// 0057ba09  8d9080030000         lea edx, [eax + 0x380]
// 0057ba0f  8d8800040000         lea ecx, [eax + 0x400]
// 0057ba15  83c40c               add esp, 0xc
// 0057ba18  0580040000           add eax, 0x480
// 0057ba1d  895334               mov dword ptr [ebx + 0x34], edx
// 0057ba20  894b38               mov dword ptr [ebx + 0x38], ecx
// 0057ba23  89433c               mov dword ptr [ebx + 0x3c], eax
// 0057ba26  5f                   pop edi
// 0057ba27  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 0057ba2e  5b                   pop ebx
// 0057ba2f  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
