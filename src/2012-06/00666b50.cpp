// from server: 100% by auto
// roc 2012-06 00666b50  unit: seg_00660000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666b50
//
// 00666b50  83ec2c               sub esp, 0x2c
// 00666b53  53                   push ebx
// 00666b54  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00666b58  55                   push ebp
// 00666b59  56                   push esi
// 00666b5a  57                   push edi
// 00666b5b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 00666b61  33f6                 xor esi, esi
// 00666b63  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 00666b69  897c2420             mov dword ptr [esp + 0x20], edi
// 00666b6d  7e4a                 jle 0x666bb9
// 00666b6f  8d83e8000000         lea eax, [ebx + 0xe8]
// 00666b75  89442410             mov dword ptr [esp + 0x10], eax
// 00666b79  8da42400000000       lea esp, [esp]
// 00666b80  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00666b84  8b01                 mov eax, dword ptr [ecx]
// 00666b86  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00666b89  8b6f08               mov ebp, dword ptr [edi + 8]
// 00666b8c  8b4004               mov eax, dword ptr [eax + 4]
// 00666b8f  0fafe9               imul ebp, ecx
// 00666b92  8b5304               mov edx, dword ptr [ebx + 4]
// 00666b95  8b5220               mov edx, dword ptr [edx + 0x20]
// 00666b98  6a00                 push 0
// 00666b9a  51                   push ecx
// 00666b9b  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 00666b9f  55                   push ebp
// 00666ba0  51                   push ecx
// 00666ba1  53                   push ebx
// 00666ba2  ffd2                 call edx
// 00666ba4  8344242404           add dword ptr [esp + 0x24], 4
// 00666ba9  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 00666bad  46                   inc esi
// 00666bae  83c414               add esp, 0x14
// 00666bb1  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 00666bb7  7cc7                 jl 0x666b80
// 00666bb9  8b7710               mov esi, dword ptr [edi + 0x10]
// 00666bbc  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00666bbf  89742424             mov dword ptr [esp + 0x24], esi
// 00666bc3  0f8d04010000         jge 0x666ccd
// 00666bc9  8da42400000000       lea esp, [esp]
// 00666bd0  8b470c               mov eax, dword ptr [edi + 0xc]
// 00666bd3  89442410             mov dword ptr [esp + 0x10], eax
// 00666bd7  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 00666bdd  0f83d5000000         jae 0x666cb8
// 00666be3  33d2                 xor edx, edx
// 00666be5  33ed                 xor ebp, ebp
// 00666be7  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 00666bed  8954241c             mov dword ptr [esp + 0x1c], edx
// 00666bf1  0f8e95000000         jle 0x666c8c
// 00666bf7  8d83e8000000         lea eax, [ebx + 0xe8]
// 00666bfd  89442414             mov dword ptr [esp + 0x14], eax
// 00666c01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00666c05  8b39                 mov edi, dword ptr [ecx]
// 00666c07  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666c0a  8bc1                 mov eax, ecx
// 00666c0c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00666c11  837f3800             cmp dword ptr [edi + 0x38], 0
// 00666c15  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00666c1d  7e53                 jle 0x666c72
// 00666c1f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00666c23  c1e007               shl eax, 7
// 00666c26  89442428             mov dword ptr [esp + 0x28], eax
// 00666c2a  8d1cb2               lea ebx, [edx + esi*4]
// 00666c2d  8d4900               lea ecx, [ecx]
// 00666c30  8b03                 mov eax, dword ptr [ebx]
// 00666c32  03442428             add eax, dword ptr [esp + 0x28]
// 00666c36  33d2                 xor edx, edx
// 00666c38  85c9                 test ecx, ecx
// 00666c3a  7e19                 jle 0x666c55
// 00666c3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00666c40  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 00666c44  8906                 mov dword ptr [esi], eax
// 00666c46  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666c49  42                   inc edx
// 00666c4a  45                   inc ebp
// 00666c4b  83c604               add esi, 4
// 00666c4e  83e880               sub eax, -0x80
// 00666c51  3bd1                 cmp edx, ecx
// 00666c53  7cef                 jl 0x666c44
// 00666c55  8b442418             mov eax, dword ptr [esp + 0x18]
// 00666c59  40                   inc eax
// 00666c5a  83c304               add ebx, 4
// 00666c5d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00666c60  89442418             mov dword ptr [esp + 0x18], eax
// 00666c64  7cca                 jl 0x666c30
// 00666c66  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00666c6a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00666c6e  8b742424             mov esi, dword ptr [esp + 0x24]
// 00666c72  8344241404           add dword ptr [esp + 0x14], 4
// 00666c77  42                   inc edx
// 00666c78  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 00666c7e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00666c82  0f8c79ffffff         jl 0x666c01
// 00666c88  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00666c8c  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 00666c92  8d4718               lea eax, [edi + 0x18]
// 00666c95  50                   push eax
// 00666c96  8b4204               mov eax, dword ptr [edx + 4]
// 00666c99  53                   push ebx
// 00666c9a  ffd0                 call eax
// 00666c9c  83c408               add esp, 8
// 00666c9f  84c0                 test al, al
// 00666ca1  7455                 je 0x666cf8
// 00666ca3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666ca7  40                   inc eax
// 00666ca8  89442410             mov dword ptr [esp + 0x10], eax
// 00666cac  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 00666cb2  0f822bffffff         jb 0x666be3
// 00666cb8  46                   inc esi
// 00666cb9  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00666cc0  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00666cc3  89742424             mov dword ptr [esp + 0x24], esi
// 00666cc7  0f8c03ffffff         jl 0x666bd0
// 00666ccd  b901000000           mov ecx, 1
// 00666cd2  014f08               add dword ptr [edi + 8], ecx
// 00666cd5  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 00666cdb  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 00666ce1  7e29                 jle 0x666d0c
// 00666ce3  5f                   pop edi
// 00666ce4  894814               mov dword ptr [eax + 0x14], ecx
// 00666ce7  5e                   pop esi
// 00666ce8  33c9                 xor ecx, ecx
// 00666cea  5d                   pop ebp
// 00666ceb  89480c               mov dword ptr [eax + 0xc], ecx
// 00666cee  894810               mov dword ptr [eax + 0x10], ecx
// 00666cf1  b001                 mov al, 1
// 00666cf3  5b                   pop ebx
// 00666cf4  83c42c               add esp, 0x2c
// 00666cf7  c3                   ret 
// 00666cf8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00666cfc  897710               mov dword ptr [edi + 0x10], esi
// 00666cff  894f0c               mov dword ptr [edi + 0xc], ecx
// 00666d02  5f                   pop edi
// 00666d03  5e                   pop esi
// 00666d04  5d                   pop ebp
// 00666d05  32c0                 xor al, al
// 00666d07  5b                   pop ebx
// 00666d08  83c42c               add esp, 0x2c
// 00666d0b  c3                   ret 
// 00666d0c  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 00666d12  2bd1                 sub edx, ecx
// 00666d14  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 00666d1a  395008               cmp dword ptr [eax + 8], edx
// 00666d1d  7305                 jae 0x666d24
// 00666d1f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00666d22  eb03                 jmp 0x666d27
// 00666d24  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00666d27  5f                   pop edi
// 00666d28  5e                   pop esi
// 00666d29  33c9                 xor ecx, ecx
// 00666d2b  5d                   pop ebp
// 00666d2c  895014               mov dword ptr [eax + 0x14], edx
// 00666d2f  89480c               mov dword ptr [eax + 0xc], ecx
// 00666d32  894810               mov dword ptr [eax + 0x10], ecx
// 00666d35  b001                 mov al, 1
// 00666d37  5b                   pop ebx
// 00666d38  83c42c               add esp, 0x2c
// 00666d3b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
