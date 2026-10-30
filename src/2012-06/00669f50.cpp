// from server: 100% by auto
// roc 2012-06 00669f50  unit: seg_00660000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669f50
//
// 00669f50  83ec2c               sub esp, 0x2c
// 00669f53  53                   push ebx
// 00669f54  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00669f58  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 00669f5e  99                   cdq 
// 00669f5f  55                   push ebp
// 00669f60  56                   push esi
// 00669f61  8b742440             mov esi, dword ptr [esp + 0x40]
// 00669f65  f77e08               idiv dword ptr [esi + 8]
// 00669f68  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00669f6b  03c9                 add ecx, ecx
// 00669f6d  57                   push edi
// 00669f6e  03c9                 add ecx, ecx
// 00669f70  03c9                 add ecx, ecx
// 00669f72  894c2430             mov dword ptr [esp + 0x30], ecx
// 00669f76  8be8                 mov ebp, eax
// 00669f78  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 00669f7e  99                   cdq 
// 00669f7f  f77e0c               idiv dword ptr [esi + 0xc]
// 00669f82  8bf0                 mov esi, eax
// 00669f84  0faff5               imul esi, ebp
// 00669f87  89442428             mov dword ptr [esp + 0x28], eax
// 00669f8b  8bc6                 mov eax, esi
// 00669f8d  99                   cdq 
// 00669f8e  2bc2                 sub eax, edx
// 00669f90  8bf8                 mov edi, eax
// 00669f92  8bc5                 mov eax, ebp
// 00669f94  0fafc1               imul eax, ecx
// 00669f97  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 00669f9d  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 00669fa0  51                   push ecx
// 00669fa1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00669fa5  d1ff                 sar edi, 1
// 00669fa7  51                   push ecx
// 00669fa8  8974243c             mov dword ptr [esp + 0x3c], esi
// 00669fac  897c2440             mov dword ptr [esp + 0x40], edi
// 00669fb0  e8bbfeffff           call 0x669e70
// 00669fb5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00669fb9  33c9                 xor ecx, ecx
// 00669fbb  83c408               add esp, 8
// 00669fbe  394a0c               cmp dword ptr [edx + 0xc], ecx
// 00669fc1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00669fc5  0f8ee4000000         jle 0x66a0af
// 00669fcb  8b442448             mov eax, dword ptr [esp + 0x48]
// 00669fcf  89442414             mov dword ptr [esp + 0x14], eax
// 00669fd3  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00669fd7  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00669fda  89442420             mov dword ptr [esp + 0x20], eax
// 00669fde  8b442430             mov eax, dword ptr [esp + 0x30]
// 00669fe2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00669fea  85c0                 test eax, eax
// 00669fec  0f869f000000         jbe 0x66a091
// 00669ff2  89442424             mov dword ptr [esp + 0x24], eax
// 00669ff6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00669ffa  33c9                 xor ecx, ecx
// 00669ffc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066a000  85c0                 test eax, eax
// 0066a002  7e68                 jle 0x66a06c
// 0066a004  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066a008  89542440             mov dword ptr [esp + 0x40], edx
// 0066a00c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066a010  8b442440             mov eax, dword ptr [esp + 0x40]
// 0066a014  8b00                 mov eax, dword ptr [eax]
// 0066a016  03442410             add eax, dword ptr [esp + 0x10]
// 0066a01a  33d2                 xor edx, edx
// 0066a01c  33f6                 xor esi, esi
// 0066a01e  33ff                 xor edi, edi
// 0066a020  83fd02               cmp ebp, 2
// 0066a023  7c22                 jl 0x66a047
// 0066a025  8d4dfe               lea ecx, [ebp - 2]
// 0066a028  d1e9                 shr ecx, 1
// 0066a02a  41                   inc ecx
// 0066a02b  8d3c09               lea edi, [ecx + ecx]
// 0066a02e  8bff                 mov edi, edi
// 0066a030  0fb618               movzx ebx, byte ptr [eax]
// 0066a033  03d3                 add edx, ebx
// 0066a035  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0066a039  03f3                 add esi, ebx
// 0066a03b  83c002               add eax, 2
// 0066a03e  83e901               sub ecx, 1
// 0066a041  75ed                 jne 0x66a030
// 0066a043  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066a047  3bfd                 cmp edi, ebp
// 0066a049  7d05                 jge 0x66a050
// 0066a04b  0fb600               movzx eax, byte ptr [eax]
// 0066a04e  03c8                 add ecx, eax
// 0066a050  8344244004           add dword ptr [esp + 0x40], 4
// 0066a055  03f2                 add esi, edx
// 0066a057  03ce                 add ecx, esi
// 0066a059  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0066a05e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066a062  75ac                 jne 0x66a010
// 0066a064  8b742434             mov esi, dword ptr [esp + 0x34]
// 0066a068  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0066a06c  8d0439               lea eax, [ecx + edi]
// 0066a06f  99                   cdq 
// 0066a070  f7fe                 idiv esi
// 0066a072  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066a076  016c2410             add dword ptr [esp + 0x10], ebp
// 0066a07a  41                   inc ecx
// 0066a07b  836c242401           sub dword ptr [esp + 0x24], 1
// 0066a080  894c2420             mov dword ptr [esp + 0x20], ecx
// 0066a084  8841ff               mov byte ptr [ecx - 1], al
// 0066a087  0f8569ffffff         jne 0x669ff6
// 0066a08d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066a091  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066a095  8b542444             mov edx, dword ptr [esp + 0x44]
// 0066a099  03c0                 add eax, eax
// 0066a09b  03c0                 add eax, eax
// 0066a09d  01442414             add dword ptr [esp + 0x14], eax
// 0066a0a1  41                   inc ecx
// 0066a0a2  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0066a0a5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0066a0a9  0f8c24ffffff         jl 0x669fd3
// 0066a0af  5f                   pop edi
// 0066a0b0  5e                   pop esi
// 0066a0b1  5d                   pop ebp
// 0066a0b2  5b                   pop ebx
// 0066a0b3  83c42c               add esp, 0x2c
// 0066a0b6  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
