// from server: 100% by auto
// roc 2008-06 0053a7a0  unit: seg_00530000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a7a0
//
// 0053a7a0  83ec2c               sub esp, 0x2c
// 0053a7a3  53                   push ebx
// 0053a7a4  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0053a7a8  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 0053a7ae  99                   cdq 
// 0053a7af  55                   push ebp
// 0053a7b0  56                   push esi
// 0053a7b1  8b742440             mov esi, dword ptr [esp + 0x40]
// 0053a7b5  f77e08               idiv dword ptr [esi + 8]
// 0053a7b8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053a7bb  03c9                 add ecx, ecx
// 0053a7bd  57                   push edi
// 0053a7be  03c9                 add ecx, ecx
// 0053a7c0  03c9                 add ecx, ecx
// 0053a7c2  894c2430             mov dword ptr [esp + 0x30], ecx
// 0053a7c6  8be8                 mov ebp, eax
// 0053a7c8  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 0053a7ce  99                   cdq 
// 0053a7cf  f77e0c               idiv dword ptr [esi + 0xc]
// 0053a7d2  8bf0                 mov esi, eax
// 0053a7d4  0faff5               imul esi, ebp
// 0053a7d7  89442428             mov dword ptr [esp + 0x28], eax
// 0053a7db  8bc6                 mov eax, esi
// 0053a7dd  99                   cdq 
// 0053a7de  2bc2                 sub eax, edx
// 0053a7e0  8bf8                 mov edi, eax
// 0053a7e2  8bc5                 mov eax, ebp
// 0053a7e4  0fafc1               imul eax, ecx
// 0053a7e7  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 0053a7ed  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 0053a7f0  51                   push ecx
// 0053a7f1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0053a7f5  d1ff                 sar edi, 1
// 0053a7f7  51                   push ecx
// 0053a7f8  8974243c             mov dword ptr [esp + 0x3c], esi
// 0053a7fc  897c2440             mov dword ptr [esp + 0x40], edi
// 0053a800  e8bbfeffff           call 0x53a6c0
// 0053a805  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0053a809  33c9                 xor ecx, ecx
// 0053a80b  83c408               add esp, 8
// 0053a80e  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0053a811  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053a815  0f8ee4000000         jle 0x53a8ff
// 0053a81b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0053a81f  89442414             mov dword ptr [esp + 0x14], eax
// 0053a823  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0053a827  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0053a82a  89442420             mov dword ptr [esp + 0x20], eax
// 0053a82e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053a832  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053a83a  85c0                 test eax, eax
// 0053a83c  0f869f000000         jbe 0x53a8e1
// 0053a842  89442424             mov dword ptr [esp + 0x24], eax
// 0053a846  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053a84a  33c9                 xor ecx, ecx
// 0053a84c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053a850  85c0                 test eax, eax
// 0053a852  7e68                 jle 0x53a8bc
// 0053a854  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053a858  89542440             mov dword ptr [esp + 0x40], edx
// 0053a85c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a860  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053a864  8b00                 mov eax, dword ptr [eax]
// 0053a866  03442410             add eax, dword ptr [esp + 0x10]
// 0053a86a  33d2                 xor edx, edx
// 0053a86c  33f6                 xor esi, esi
// 0053a86e  33ff                 xor edi, edi
// 0053a870  83fd02               cmp ebp, 2
// 0053a873  7c22                 jl 0x53a897
// 0053a875  8d4dfe               lea ecx, [ebp - 2]
// 0053a878  d1e9                 shr ecx, 1
// 0053a87a  41                   inc ecx
// 0053a87b  8d3c09               lea edi, [ecx + ecx]
// 0053a87e  8bff                 mov edi, edi
// 0053a880  0fb618               movzx ebx, byte ptr [eax]
// 0053a883  03d3                 add edx, ebx
// 0053a885  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0053a889  03f3                 add esi, ebx
// 0053a88b  83c002               add eax, 2
// 0053a88e  83e901               sub ecx, 1
// 0053a891  75ed                 jne 0x53a880
// 0053a893  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053a897  3bfd                 cmp edi, ebp
// 0053a899  7d05                 jge 0x53a8a0
// 0053a89b  0fb600               movzx eax, byte ptr [eax]
// 0053a89e  03c8                 add ecx, eax
// 0053a8a0  8344244004           add dword ptr [esp + 0x40], 4
// 0053a8a5  03f2                 add esi, edx
// 0053a8a7  03ce                 add ecx, esi
// 0053a8a9  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0053a8ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053a8b2  75ac                 jne 0x53a860
// 0053a8b4  8b742434             mov esi, dword ptr [esp + 0x34]
// 0053a8b8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0053a8bc  8d0439               lea eax, [ecx + edi]
// 0053a8bf  99                   cdq 
// 0053a8c0  f7fe                 idiv esi
// 0053a8c2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053a8c6  016c2410             add dword ptr [esp + 0x10], ebp
// 0053a8ca  41                   inc ecx
// 0053a8cb  836c242401           sub dword ptr [esp + 0x24], 1
// 0053a8d0  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053a8d4  8841ff               mov byte ptr [ecx - 1], al
// 0053a8d7  0f8569ffffff         jne 0x53a846
// 0053a8dd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053a8e1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053a8e5  8b542444             mov edx, dword ptr [esp + 0x44]
// 0053a8e9  03c0                 add eax, eax
// 0053a8eb  03c0                 add eax, eax
// 0053a8ed  01442414             add dword ptr [esp + 0x14], eax
// 0053a8f1  41                   inc ecx
// 0053a8f2  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0053a8f5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053a8f9  0f8c24ffffff         jl 0x53a823
// 0053a8ff  5f                   pop edi
// 0053a900  5e                   pop esi
// 0053a901  5d                   pop ebp
// 0053a902  5b                   pop ebx
// 0053a903  83c42c               add esp, 0x2c
// 0053a906  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
