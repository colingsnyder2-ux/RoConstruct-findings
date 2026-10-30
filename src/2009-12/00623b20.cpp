// roc 2009-12 00623b20  unit: seg_00620000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623b20
//
// 00623b20  53                   push ebx
// 00623b21  57                   push edi
// 00623b22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00623b26  8b4704               mov eax, dword ptr [edi + 4]
// 00623b29  8b08                 mov ecx, dword ptr [eax]
// 00623b2b  6a68                 push 0x68
// 00623b2d  6a01                 push 1
// 00623b2f  57                   push edi
// 00623b30  ffd1                 call ecx
// 00623b32  8bd8                 mov ebx, eax
// 00623b34  83c40c               add esp, 0xc
// 00623b37  807c241000           cmp byte ptr [esp + 0x10], 0
// 00623b3c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 00623b42  c703303a6200         mov dword ptr [ebx], 0x623a30
// 00623b48  7466                 je 0x623bb0
// 00623b4a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 00623b4e  56                   push esi
// 00623b4f  8b7744               mov esi, dword ptr [edi + 0x44]
// 00623b52  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00623b5a  7e50                 jle 0x623bac
// 00623b5c  83c60c               add esi, 0xc
// 00623b5f  83c340               add ebx, 0x40
// 00623b62  55                   push ebp
// 00623b63  8b06                 mov eax, dword ptr [esi]
// 00623b65  8b5614               mov edx, dword ptr [esi + 0x14]
// 00623b68  8b6f04               mov ebp, dword ptr [edi + 4]
// 00623b6b  50                   push eax
// 00623b6c  50                   push eax
// 00623b6d  52                   push edx
// 00623b6e  e8fd80feff           call 0x60bc70
// 00623b73  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00623b76  83c408               add esp, 8
// 00623b79  50                   push eax
// 00623b7a  8b46fc               mov eax, dword ptr [esi - 4]
// 00623b7d  50                   push eax
// 00623b7e  51                   push ecx
// 00623b7f  e8ec80feff           call 0x60bc70
// 00623b84  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00623b87  83c408               add esp, 8
// 00623b8a  50                   push eax
// 00623b8b  6a00                 push 0
// 00623b8d  6a01                 push 1
// 00623b8f  57                   push edi
// 00623b90  ffd2                 call edx
// 00623b92  8903                 mov dword ptr [ebx], eax
// 00623b94  8b442430             mov eax, dword ptr [esp + 0x30]
// 00623b98  40                   inc eax
// 00623b99  83c418               add esp, 0x18
// 00623b9c  83c304               add ebx, 4
// 00623b9f  83c654               add esi, 0x54
// 00623ba2  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00623ba5  89442418             mov dword ptr [esp + 0x18], eax
// 00623ba9  7cb8                 jl 0x623b63
// 00623bab  5d                   pop ebp
// 00623bac  5e                   pop esi
// 00623bad  5f                   pop edi
// 00623bae  5b                   pop ebx
// 00623baf  c3                   ret 
// 00623bb0  8b4704               mov eax, dword ptr [edi + 4]
// 00623bb3  8b4804               mov ecx, dword ptr [eax + 4]
// 00623bb6  6800050000           push 0x500
// 00623bbb  6a01                 push 1
// 00623bbd  57                   push edi
// 00623bbe  ffd1                 call ecx
// 00623bc0  8d9080000000         lea edx, [eax + 0x80]
// 00623bc6  89531c               mov dword ptr [ebx + 0x1c], edx
// 00623bc9  8d8800010000         lea ecx, [eax + 0x100]
// 00623bcf  894b20               mov dword ptr [ebx + 0x20], ecx
// 00623bd2  8d9080010000         lea edx, [eax + 0x180]
// 00623bd8  8d8800020000         lea ecx, [eax + 0x200]
// 00623bde  895324               mov dword ptr [ebx + 0x24], edx
// 00623be1  894b28               mov dword ptr [ebx + 0x28], ecx
// 00623be4  8d9080020000         lea edx, [eax + 0x280]
// 00623bea  8d8800030000         lea ecx, [eax + 0x300]
// 00623bf0  89532c               mov dword ptr [ebx + 0x2c], edx
// 00623bf3  894b30               mov dword ptr [ebx + 0x30], ecx
// 00623bf6  894318               mov dword ptr [ebx + 0x18], eax
// 00623bf9  8d9080030000         lea edx, [eax + 0x380]
// 00623bff  8d8800040000         lea ecx, [eax + 0x400]
// 00623c05  83c40c               add esp, 0xc
// 00623c08  0580040000           add eax, 0x480
// 00623c0d  895334               mov dword ptr [ebx + 0x34], edx
// 00623c10  894b38               mov dword ptr [ebx + 0x38], ecx
// 00623c13  89433c               mov dword ptr [ebx + 0x3c], eax
// 00623c16  5f                   pop edi
// 00623c17  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 00623c1e  5b                   pop ebx
// 00623c1f  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
