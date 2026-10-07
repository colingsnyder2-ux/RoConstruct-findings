// roc 2009-06 005a4a80  unit: seg_005a0000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4a80
//
// 005a4a80  83ec2c               sub esp, 0x2c
// 005a4a83  53                   push ebx
// 005a4a84  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 005a4a88  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 005a4a8e  99                   cdq 
// 005a4a8f  55                   push ebp
// 005a4a90  56                   push esi
// 005a4a91  8b742440             mov esi, dword ptr [esp + 0x40]
// 005a4a95  f77e08               idiv dword ptr [esi + 8]
// 005a4a98  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a4a9b  03c9                 add ecx, ecx
// 005a4a9d  57                   push edi
// 005a4a9e  03c9                 add ecx, ecx
// 005a4aa0  03c9                 add ecx, ecx
// 005a4aa2  894c2430             mov dword ptr [esp + 0x30], ecx
// 005a4aa6  8be8                 mov ebp, eax
// 005a4aa8  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 005a4aae  99                   cdq 
// 005a4aaf  f77e0c               idiv dword ptr [esi + 0xc]
// 005a4ab2  8bf0                 mov esi, eax
// 005a4ab4  0faff5               imul esi, ebp
// 005a4ab7  89442428             mov dword ptr [esp + 0x28], eax
// 005a4abb  8bc6                 mov eax, esi
// 005a4abd  99                   cdq 
// 005a4abe  2bc2                 sub eax, edx
// 005a4ac0  8bf8                 mov edi, eax
// 005a4ac2  8bc5                 mov eax, ebp
// 005a4ac4  0fafc1               imul eax, ecx
// 005a4ac7  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 005a4acd  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 005a4ad0  51                   push ecx
// 005a4ad1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005a4ad5  d1ff                 sar edi, 1
// 005a4ad7  51                   push ecx
// 005a4ad8  8974243c             mov dword ptr [esp + 0x3c], esi
// 005a4adc  897c2440             mov dword ptr [esp + 0x40], edi
// 005a4ae0  e8bbfeffff           call 0x5a49a0
// 005a4ae5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a4ae9  33c9                 xor ecx, ecx
// 005a4aeb  83c408               add esp, 8
// 005a4aee  394a0c               cmp dword ptr [edx + 0xc], ecx
// 005a4af1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a4af5  0f8ee4000000         jle 0x5a4bdf
// 005a4afb  8b442448             mov eax, dword ptr [esp + 0x48]
// 005a4aff  89442414             mov dword ptr [esp + 0x14], eax
// 005a4b03  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a4b07  8b048a               mov eax, dword ptr [edx + ecx*4]
// 005a4b0a  89442420             mov dword ptr [esp + 0x20], eax
// 005a4b0e  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a4b12  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a4b1a  85c0                 test eax, eax
// 005a4b1c  0f869f000000         jbe 0x5a4bc1
// 005a4b22  89442424             mov dword ptr [esp + 0x24], eax
// 005a4b26  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4b2a  33c9                 xor ecx, ecx
// 005a4b2c  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a4b30  85c0                 test eax, eax
// 005a4b32  7e68                 jle 0x5a4b9c
// 005a4b34  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a4b38  89542440             mov dword ptr [esp + 0x40], edx
// 005a4b3c  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4b40  8b442440             mov eax, dword ptr [esp + 0x40]
// 005a4b44  8b00                 mov eax, dword ptr [eax]
// 005a4b46  03442410             add eax, dword ptr [esp + 0x10]
// 005a4b4a  33d2                 xor edx, edx
// 005a4b4c  33f6                 xor esi, esi
// 005a4b4e  33ff                 xor edi, edi
// 005a4b50  83fd02               cmp ebp, 2
// 005a4b53  7c22                 jl 0x5a4b77
// 005a4b55  8d4dfe               lea ecx, [ebp - 2]
// 005a4b58  d1e9                 shr ecx, 1
// 005a4b5a  41                   inc ecx
// 005a4b5b  8d3c09               lea edi, [ecx + ecx]
// 005a4b5e  8bff                 mov edi, edi
// 005a4b60  0fb618               movzx ebx, byte ptr [eax]
// 005a4b63  03d3                 add edx, ebx
// 005a4b65  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a4b69  03f3                 add esi, ebx
// 005a4b6b  83c002               add eax, 2
// 005a4b6e  83e901               sub ecx, 1
// 005a4b71  75ed                 jne 0x5a4b60
// 005a4b73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a4b77  3bfd                 cmp edi, ebp
// 005a4b79  7d05                 jge 0x5a4b80
// 005a4b7b  0fb600               movzx eax, byte ptr [eax]
// 005a4b7e  03c8                 add ecx, eax
// 005a4b80  8344244004           add dword ptr [esp + 0x40], 4
// 005a4b85  03f2                 add esi, edx
// 005a4b87  03ce                 add ecx, esi
// 005a4b89  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005a4b8e  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a4b92  75ac                 jne 0x5a4b40
// 005a4b94  8b742434             mov esi, dword ptr [esp + 0x34]
// 005a4b98  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005a4b9c  8d0439               lea eax, [ecx + edi]
// 005a4b9f  99                   cdq 
// 005a4ba0  f7fe                 idiv esi
// 005a4ba2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a4ba6  016c2410             add dword ptr [esp + 0x10], ebp
// 005a4baa  41                   inc ecx
// 005a4bab  836c242401           sub dword ptr [esp + 0x24], 1
// 005a4bb0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a4bb4  8841ff               mov byte ptr [ecx - 1], al
// 005a4bb7  0f8569ffffff         jne 0x5a4b26
// 005a4bbd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4bc1  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4bc5  8b542444             mov edx, dword ptr [esp + 0x44]
// 005a4bc9  03c0                 add eax, eax
// 005a4bcb  03c0                 add eax, eax
// 005a4bcd  01442414             add dword ptr [esp + 0x14], eax
// 005a4bd1  41                   inc ecx
// 005a4bd2  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 005a4bd5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a4bd9  0f8c24ffffff         jl 0x5a4b03
// 005a4bdf  5f                   pop edi
// 005a4be0  5e                   pop esi
// 005a4be1  5d                   pop ebp
// 005a4be2  5b                   pop ebx
// 005a4be3  83c42c               add esp, 0x2c
// 005a4be6  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
