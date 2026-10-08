// from server: 100% by auto
// roc 2008-06 00537810  unit: seg_00530000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537810
//
// 00537810  53                   push ebx
// 00537811  57                   push edi
// 00537812  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00537816  8b4704               mov eax, dword ptr [edi + 4]
// 00537819  8b08                 mov ecx, dword ptr [eax]
// 0053781b  6a68                 push 0x68
// 0053781d  6a01                 push 1
// 0053781f  57                   push edi
// 00537820  ffd1                 call ecx
// 00537822  8bd8                 mov ebx, eax
// 00537824  83c40c               add esp, 0xc
// 00537827  807c241000           cmp byte ptr [esp + 0x10], 0
// 0053782c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 00537832  c70320775300         mov dword ptr [ebx], 0x537720
// 00537838  7466                 je 0x5378a0
// 0053783a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0053783e  56                   push esi
// 0053783f  8b7744               mov esi, dword ptr [edi + 0x44]
// 00537842  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053784a  7e50                 jle 0x53789c
// 0053784c  83c60c               add esi, 0xc
// 0053784f  83c340               add ebx, 0x40
// 00537852  55                   push ebp
// 00537853  8b06                 mov eax, dword ptr [esi]
// 00537855  8b5614               mov edx, dword ptr [esi + 0x14]
// 00537858  8b6f04               mov ebp, dword ptr [edi + 4]
// 0053785b  50                   push eax
// 0053785c  50                   push eax
// 0053785d  52                   push edx
// 0053785e  e8ade2feff           call 0x525b10
// 00537863  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00537866  83c408               add esp, 8
// 00537869  50                   push eax
// 0053786a  8b46fc               mov eax, dword ptr [esi - 4]
// 0053786d  50                   push eax
// 0053786e  51                   push ecx
// 0053786f  e89ce2feff           call 0x525b10
// 00537874  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00537877  83c408               add esp, 8
// 0053787a  50                   push eax
// 0053787b  6a00                 push 0
// 0053787d  6a01                 push 1
// 0053787f  57                   push edi
// 00537880  ffd2                 call edx
// 00537882  8903                 mov dword ptr [ebx], eax
// 00537884  8b442430             mov eax, dword ptr [esp + 0x30]
// 00537888  40                   inc eax
// 00537889  83c418               add esp, 0x18
// 0053788c  83c304               add ebx, 4
// 0053788f  83c654               add esi, 0x54
// 00537892  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00537895  89442418             mov dword ptr [esp + 0x18], eax
// 00537899  7cb8                 jl 0x537853
// 0053789b  5d                   pop ebp
// 0053789c  5e                   pop esi
// 0053789d  5f                   pop edi
// 0053789e  5b                   pop ebx
// 0053789f  c3                   ret 
// 005378a0  8b4704               mov eax, dword ptr [edi + 4]
// 005378a3  8b4804               mov ecx, dword ptr [eax + 4]
// 005378a6  6800050000           push 0x500
// 005378ab  6a01                 push 1
// 005378ad  57                   push edi
// 005378ae  ffd1                 call ecx
// 005378b0  8d9080000000         lea edx, [eax + 0x80]
// 005378b6  89531c               mov dword ptr [ebx + 0x1c], edx
// 005378b9  8d8800010000         lea ecx, [eax + 0x100]
// 005378bf  894b20               mov dword ptr [ebx + 0x20], ecx
// 005378c2  8d9080010000         lea edx, [eax + 0x180]
// 005378c8  8d8800020000         lea ecx, [eax + 0x200]
// 005378ce  895324               mov dword ptr [ebx + 0x24], edx
// 005378d1  894b28               mov dword ptr [ebx + 0x28], ecx
// 005378d4  8d9080020000         lea edx, [eax + 0x280]
// 005378da  8d8800030000         lea ecx, [eax + 0x300]
// 005378e0  89532c               mov dword ptr [ebx + 0x2c], edx
// 005378e3  894b30               mov dword ptr [ebx + 0x30], ecx
// 005378e6  894318               mov dword ptr [ebx + 0x18], eax
// 005378e9  8d9080030000         lea edx, [eax + 0x380]
// 005378ef  8d8800040000         lea ecx, [eax + 0x400]
// 005378f5  83c40c               add esp, 0xc
// 005378f8  0580040000           add eax, 0x480
// 005378fd  895334               mov dword ptr [ebx + 0x34], edx
// 00537900  894b38               mov dword ptr [ebx + 0x38], ecx
// 00537903  89433c               mov dword ptr [ebx + 0x3c], eax
// 00537906  5f                   pop edi
// 00537907  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 0053790e  5b                   pop ebx
// 0053790f  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
