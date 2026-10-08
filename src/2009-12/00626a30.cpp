// roc 2009-12 00626a30  unit: seg_00620000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626a30
//
// 00626a30  83ec2c               sub esp, 0x2c
// 00626a33  53                   push ebx
// 00626a34  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00626a38  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 00626a3e  99                   cdq 
// 00626a3f  55                   push ebp
// 00626a40  56                   push esi
// 00626a41  8b742440             mov esi, dword ptr [esp + 0x40]
// 00626a45  f77e08               idiv dword ptr [esi + 8]
// 00626a48  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00626a4b  03c9                 add ecx, ecx
// 00626a4d  57                   push edi
// 00626a4e  03c9                 add ecx, ecx
// 00626a50  03c9                 add ecx, ecx
// 00626a52  894c2430             mov dword ptr [esp + 0x30], ecx
// 00626a56  8be8                 mov ebp, eax
// 00626a58  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 00626a5e  99                   cdq 
// 00626a5f  f77e0c               idiv dword ptr [esi + 0xc]
// 00626a62  8bf0                 mov esi, eax
// 00626a64  0faff5               imul esi, ebp
// 00626a67  89442428             mov dword ptr [esp + 0x28], eax
// 00626a6b  8bc6                 mov eax, esi
// 00626a6d  99                   cdq 
// 00626a6e  2bc2                 sub eax, edx
// 00626a70  8bf8                 mov edi, eax
// 00626a72  8bc5                 mov eax, ebp
// 00626a74  0fafc1               imul eax, ecx
// 00626a77  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 00626a7d  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 00626a80  51                   push ecx
// 00626a81  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00626a85  d1ff                 sar edi, 1
// 00626a87  51                   push ecx
// 00626a88  8974243c             mov dword ptr [esp + 0x3c], esi
// 00626a8c  897c2440             mov dword ptr [esp + 0x40], edi
// 00626a90  e8bbfeffff           call 0x626950
// 00626a95  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00626a99  33c9                 xor ecx, ecx
// 00626a9b  83c408               add esp, 8
// 00626a9e  394a0c               cmp dword ptr [edx + 0xc], ecx
// 00626aa1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00626aa5  0f8ee4000000         jle 0x626b8f
// 00626aab  8b442448             mov eax, dword ptr [esp + 0x48]
// 00626aaf  89442414             mov dword ptr [esp + 0x14], eax
// 00626ab3  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00626ab7  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00626aba  89442420             mov dword ptr [esp + 0x20], eax
// 00626abe  8b442430             mov eax, dword ptr [esp + 0x30]
// 00626ac2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00626aca  85c0                 test eax, eax
// 00626acc  0f869f000000         jbe 0x626b71
// 00626ad2  89442424             mov dword ptr [esp + 0x24], eax
// 00626ad6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00626ada  33c9                 xor ecx, ecx
// 00626adc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00626ae0  85c0                 test eax, eax
// 00626ae2  7e68                 jle 0x626b4c
// 00626ae4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00626ae8  89542440             mov dword ptr [esp + 0x40], edx
// 00626aec  8944241c             mov dword ptr [esp + 0x1c], eax
// 00626af0  8b442440             mov eax, dword ptr [esp + 0x40]
// 00626af4  8b00                 mov eax, dword ptr [eax]
// 00626af6  03442410             add eax, dword ptr [esp + 0x10]
// 00626afa  33d2                 xor edx, edx
// 00626afc  33f6                 xor esi, esi
// 00626afe  33ff                 xor edi, edi
// 00626b00  83fd02               cmp ebp, 2
// 00626b03  7c22                 jl 0x626b27
// 00626b05  8d4dfe               lea ecx, [ebp - 2]
// 00626b08  d1e9                 shr ecx, 1
// 00626b0a  41                   inc ecx
// 00626b0b  8d3c09               lea edi, [ecx + ecx]
// 00626b0e  8bff                 mov edi, edi
// 00626b10  0fb618               movzx ebx, byte ptr [eax]
// 00626b13  03d3                 add edx, ebx
// 00626b15  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00626b19  03f3                 add esi, ebx
// 00626b1b  83c002               add eax, 2
// 00626b1e  83e901               sub ecx, 1
// 00626b21  75ed                 jne 0x626b10
// 00626b23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00626b27  3bfd                 cmp edi, ebp
// 00626b29  7d05                 jge 0x626b30
// 00626b2b  0fb600               movzx eax, byte ptr [eax]
// 00626b2e  03c8                 add ecx, eax
// 00626b30  8344244004           add dword ptr [esp + 0x40], 4
// 00626b35  03f2                 add esi, edx
// 00626b37  03ce                 add ecx, esi
// 00626b39  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00626b3e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00626b42  75ac                 jne 0x626af0
// 00626b44  8b742434             mov esi, dword ptr [esp + 0x34]
// 00626b48  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00626b4c  8d0439               lea eax, [ecx + edi]
// 00626b4f  99                   cdq 
// 00626b50  f7fe                 idiv esi
// 00626b52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00626b56  016c2410             add dword ptr [esp + 0x10], ebp
// 00626b5a  41                   inc ecx
// 00626b5b  836c242401           sub dword ptr [esp + 0x24], 1
// 00626b60  894c2420             mov dword ptr [esp + 0x20], ecx
// 00626b64  8841ff               mov byte ptr [ecx - 1], al
// 00626b67  0f8569ffffff         jne 0x626ad6
// 00626b6d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00626b71  8b442428             mov eax, dword ptr [esp + 0x28]
// 00626b75  8b542444             mov edx, dword ptr [esp + 0x44]
// 00626b79  03c0                 add eax, eax
// 00626b7b  03c0                 add eax, eax
// 00626b7d  01442414             add dword ptr [esp + 0x14], eax
// 00626b81  41                   inc ecx
// 00626b82  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00626b85  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00626b89  0f8c24ffffff         jl 0x626ab3
// 00626b8f  5f                   pop edi
// 00626b90  5e                   pop esi
// 00626b91  5d                   pop ebp
// 00626b92  5b                   pop ebx
// 00626b93  83c42c               add esp, 0x2c
// 00626b96  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
