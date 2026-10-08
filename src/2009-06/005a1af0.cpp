// from server: 100% by auto
// roc 2009-06 005a1af0  unit: seg_005a0000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1af0
//
// 005a1af0  53                   push ebx
// 005a1af1  57                   push edi
// 005a1af2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a1af6  8b4704               mov eax, dword ptr [edi + 4]
// 005a1af9  8b08                 mov ecx, dword ptr [eax]
// 005a1afb  6a68                 push 0x68
// 005a1afd  6a01                 push 1
// 005a1aff  57                   push edi
// 005a1b00  ffd1                 call ecx
// 005a1b02  8bd8                 mov ebx, eax
// 005a1b04  83c40c               add esp, 0xc
// 005a1b07  807c241000           cmp byte ptr [esp + 0x10], 0
// 005a1b0c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 005a1b12  c703001a5a00         mov dword ptr [ebx], 0x5a1a00
// 005a1b18  7466                 je 0x5a1b80
// 005a1b1a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 005a1b1e  56                   push esi
// 005a1b1f  8b7744               mov esi, dword ptr [edi + 0x44]
// 005a1b22  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a1b2a  7e50                 jle 0x5a1b7c
// 005a1b2c  83c60c               add esi, 0xc
// 005a1b2f  83c340               add ebx, 0x40
// 005a1b32  55                   push ebp
// 005a1b33  8b06                 mov eax, dword ptr [esi]
// 005a1b35  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a1b38  8b6f04               mov ebp, dword ptr [edi + 4]
// 005a1b3b  50                   push eax
// 005a1b3c  50                   push eax
// 005a1b3d  52                   push edx
// 005a1b3e  e8dd82feff           call 0x589e20
// 005a1b43  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a1b46  83c408               add esp, 8
// 005a1b49  50                   push eax
// 005a1b4a  8b46fc               mov eax, dword ptr [esi - 4]
// 005a1b4d  50                   push eax
// 005a1b4e  51                   push ecx
// 005a1b4f  e8cc82feff           call 0x589e20
// 005a1b54  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005a1b57  83c408               add esp, 8
// 005a1b5a  50                   push eax
// 005a1b5b  6a00                 push 0
// 005a1b5d  6a01                 push 1
// 005a1b5f  57                   push edi
// 005a1b60  ffd2                 call edx
// 005a1b62  8903                 mov dword ptr [ebx], eax
// 005a1b64  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a1b68  40                   inc eax
// 005a1b69  83c418               add esp, 0x18
// 005a1b6c  83c304               add ebx, 4
// 005a1b6f  83c654               add esi, 0x54
// 005a1b72  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 005a1b75  89442418             mov dword ptr [esp + 0x18], eax
// 005a1b79  7cb8                 jl 0x5a1b33
// 005a1b7b  5d                   pop ebp
// 005a1b7c  5e                   pop esi
// 005a1b7d  5f                   pop edi
// 005a1b7e  5b                   pop ebx
// 005a1b7f  c3                   ret 
// 005a1b80  8b4704               mov eax, dword ptr [edi + 4]
// 005a1b83  8b4804               mov ecx, dword ptr [eax + 4]
// 005a1b86  6800050000           push 0x500
// 005a1b8b  6a01                 push 1
// 005a1b8d  57                   push edi
// 005a1b8e  ffd1                 call ecx
// 005a1b90  8d9080000000         lea edx, [eax + 0x80]
// 005a1b96  89531c               mov dword ptr [ebx + 0x1c], edx
// 005a1b99  8d8800010000         lea ecx, [eax + 0x100]
// 005a1b9f  894b20               mov dword ptr [ebx + 0x20], ecx
// 005a1ba2  8d9080010000         lea edx, [eax + 0x180]
// 005a1ba8  8d8800020000         lea ecx, [eax + 0x200]
// 005a1bae  895324               mov dword ptr [ebx + 0x24], edx
// 005a1bb1  894b28               mov dword ptr [ebx + 0x28], ecx
// 005a1bb4  8d9080020000         lea edx, [eax + 0x280]
// 005a1bba  8d8800030000         lea ecx, [eax + 0x300]
// 005a1bc0  89532c               mov dword ptr [ebx + 0x2c], edx
// 005a1bc3  894b30               mov dword ptr [ebx + 0x30], ecx
// 005a1bc6  894318               mov dword ptr [ebx + 0x18], eax
// 005a1bc9  8d9080030000         lea edx, [eax + 0x380]
// 005a1bcf  8d8800040000         lea ecx, [eax + 0x400]
// 005a1bd5  83c40c               add esp, 0xc
// 005a1bd8  0580040000           add eax, 0x480
// 005a1bdd  895334               mov dword ptr [ebx + 0x34], edx
// 005a1be0  894b38               mov dword ptr [ebx + 0x38], ecx
// 005a1be3  89433c               mov dword ptr [ebx + 0x3c], eax
// 005a1be6  5f                   pop edi
// 005a1be7  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 005a1bee  5b                   pop ebx
// 005a1bef  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
