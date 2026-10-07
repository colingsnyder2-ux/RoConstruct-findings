// roc 2011-06 0057e840  unit: seg_00570000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e840
//
// 0057e840  83ec2c               sub esp, 0x2c
// 0057e843  53                   push ebx
// 0057e844  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057e848  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 0057e84e  99                   cdq 
// 0057e84f  55                   push ebp
// 0057e850  56                   push esi
// 0057e851  8b742440             mov esi, dword ptr [esp + 0x40]
// 0057e855  f77e08               idiv dword ptr [esi + 8]
// 0057e858  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057e85b  03c9                 add ecx, ecx
// 0057e85d  57                   push edi
// 0057e85e  03c9                 add ecx, ecx
// 0057e860  03c9                 add ecx, ecx
// 0057e862  894c2430             mov dword ptr [esp + 0x30], ecx
// 0057e866  8be8                 mov ebp, eax
// 0057e868  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 0057e86e  99                   cdq 
// 0057e86f  f77e0c               idiv dword ptr [esi + 0xc]
// 0057e872  8bf0                 mov esi, eax
// 0057e874  0faff5               imul esi, ebp
// 0057e877  89442428             mov dword ptr [esp + 0x28], eax
// 0057e87b  8bc6                 mov eax, esi
// 0057e87d  99                   cdq 
// 0057e87e  2bc2                 sub eax, edx
// 0057e880  8bf8                 mov edi, eax
// 0057e882  8bc5                 mov eax, ebp
// 0057e884  0fafc1               imul eax, ecx
// 0057e887  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 0057e88d  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 0057e890  51                   push ecx
// 0057e891  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057e895  d1ff                 sar edi, 1
// 0057e897  51                   push ecx
// 0057e898  8974243c             mov dword ptr [esp + 0x3c], esi
// 0057e89c  897c2440             mov dword ptr [esp + 0x40], edi
// 0057e8a0  e8bbfeffff           call 0x57e760
// 0057e8a5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0057e8a9  33c9                 xor ecx, ecx
// 0057e8ab  83c408               add esp, 8
// 0057e8ae  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0057e8b1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057e8b5  0f8ee4000000         jle 0x57e99f
// 0057e8bb  8b442448             mov eax, dword ptr [esp + 0x48]
// 0057e8bf  89442414             mov dword ptr [esp + 0x14], eax
// 0057e8c3  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0057e8c7  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0057e8ca  89442420             mov dword ptr [esp + 0x20], eax
// 0057e8ce  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057e8d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057e8da  85c0                 test eax, eax
// 0057e8dc  0f869f000000         jbe 0x57e981
// 0057e8e2  89442424             mov dword ptr [esp + 0x24], eax
// 0057e8e6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e8ea  33c9                 xor ecx, ecx
// 0057e8ec  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057e8f0  85c0                 test eax, eax
// 0057e8f2  7e68                 jle 0x57e95c
// 0057e8f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057e8f8  89542440             mov dword ptr [esp + 0x40], edx
// 0057e8fc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e900  8b442440             mov eax, dword ptr [esp + 0x40]
// 0057e904  8b00                 mov eax, dword ptr [eax]
// 0057e906  03442410             add eax, dword ptr [esp + 0x10]
// 0057e90a  33d2                 xor edx, edx
// 0057e90c  33f6                 xor esi, esi
// 0057e90e  33ff                 xor edi, edi
// 0057e910  83fd02               cmp ebp, 2
// 0057e913  7c22                 jl 0x57e937
// 0057e915  8d4dfe               lea ecx, [ebp - 2]
// 0057e918  d1e9                 shr ecx, 1
// 0057e91a  41                   inc ecx
// 0057e91b  8d3c09               lea edi, [ecx + ecx]
// 0057e91e  8bff                 mov edi, edi
// 0057e920  0fb618               movzx ebx, byte ptr [eax]
// 0057e923  03d3                 add edx, ebx
// 0057e925  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057e929  03f3                 add esi, ebx
// 0057e92b  83c002               add eax, 2
// 0057e92e  83e901               sub ecx, 1
// 0057e931  75ed                 jne 0x57e920
// 0057e933  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057e937  3bfd                 cmp edi, ebp
// 0057e939  7d05                 jge 0x57e940
// 0057e93b  0fb600               movzx eax, byte ptr [eax]
// 0057e93e  03c8                 add ecx, eax
// 0057e940  8344244004           add dword ptr [esp + 0x40], 4
// 0057e945  03f2                 add esi, edx
// 0057e947  03ce                 add ecx, esi
// 0057e949  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057e94e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057e952  75ac                 jne 0x57e900
// 0057e954  8b742434             mov esi, dword ptr [esp + 0x34]
// 0057e958  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0057e95c  8d0439               lea eax, [ecx + edi]
// 0057e95f  99                   cdq 
// 0057e960  f7fe                 idiv esi
// 0057e962  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057e966  016c2410             add dword ptr [esp + 0x10], ebp
// 0057e96a  41                   inc ecx
// 0057e96b  836c242401           sub dword ptr [esp + 0x24], 1
// 0057e970  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057e974  8841ff               mov byte ptr [ecx - 1], al
// 0057e977  0f8569ffffff         jne 0x57e8e6
// 0057e97d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057e981  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e985  8b542444             mov edx, dword ptr [esp + 0x44]
// 0057e989  03c0                 add eax, eax
// 0057e98b  03c0                 add eax, eax
// 0057e98d  01442414             add dword ptr [esp + 0x14], eax
// 0057e991  41                   inc ecx
// 0057e992  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0057e995  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057e999  0f8c24ffffff         jl 0x57e8c3
// 0057e99f  5f                   pop edi
// 0057e9a0  5e                   pop esi
// 0057e9a1  5d                   pop ebp
// 0057e9a2  5b                   pop ebx
// 0057e9a3  83c42c               add esp, 0x2c
// 0057e9a6  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
