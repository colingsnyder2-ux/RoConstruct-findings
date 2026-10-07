// roc 2010-06 00588590  unit: seg_00580000  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588590
//
// 00588590  83ec2c               sub esp, 0x2c
// 00588593  53                   push ebx
// 00588594  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00588598  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 0058859e  99                   cdq 
// 0058859f  55                   push ebp
// 005885a0  56                   push esi
// 005885a1  8b742440             mov esi, dword ptr [esp + 0x40]
// 005885a5  f77e08               idiv dword ptr [esi + 8]
// 005885a8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005885ab  03c9                 add ecx, ecx
// 005885ad  57                   push edi
// 005885ae  03c9                 add ecx, ecx
// 005885b0  03c9                 add ecx, ecx
// 005885b2  894c2430             mov dword ptr [esp + 0x30], ecx
// 005885b6  8be8                 mov ebp, eax
// 005885b8  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 005885be  99                   cdq 
// 005885bf  f77e0c               idiv dword ptr [esi + 0xc]
// 005885c2  8bf0                 mov esi, eax
// 005885c4  0faff5               imul esi, ebp
// 005885c7  89442428             mov dword ptr [esp + 0x28], eax
// 005885cb  8bc6                 mov eax, esi
// 005885cd  99                   cdq 
// 005885ce  2bc2                 sub eax, edx
// 005885d0  8bf8                 mov edi, eax
// 005885d2  8bc5                 mov eax, ebp
// 005885d4  0fafc1               imul eax, ecx
// 005885d7  8b8bdc000000         mov ecx, dword ptr [ebx + 0xdc]
// 005885dd  8b5b1c               mov ebx, dword ptr [ebx + 0x1c]
// 005885e0  51                   push ecx
// 005885e1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005885e5  d1ff                 sar edi, 1
// 005885e7  51                   push ecx
// 005885e8  8974243c             mov dword ptr [esp + 0x3c], esi
// 005885ec  897c2440             mov dword ptr [esp + 0x40], edi
// 005885f0  e8bbfeffff           call 0x5884b0
// 005885f5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005885f9  33c9                 xor ecx, ecx
// 005885fb  83c408               add esp, 8
// 005885fe  394a0c               cmp dword ptr [edx + 0xc], ecx
// 00588601  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00588605  0f8ee4000000         jle 0x5886ef
// 0058860b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0058860f  89442414             mov dword ptr [esp + 0x14], eax
// 00588613  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00588617  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0058861a  89442420             mov dword ptr [esp + 0x20], eax
// 0058861e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00588622  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058862a  85c0                 test eax, eax
// 0058862c  0f869f000000         jbe 0x5886d1
// 00588632  89442424             mov dword ptr [esp + 0x24], eax
// 00588636  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058863a  33c9                 xor ecx, ecx
// 0058863c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00588640  85c0                 test eax, eax
// 00588642  7e68                 jle 0x5886ac
// 00588644  8b542414             mov edx, dword ptr [esp + 0x14]
// 00588648  89542440             mov dword ptr [esp + 0x40], edx
// 0058864c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00588650  8b442440             mov eax, dword ptr [esp + 0x40]
// 00588654  8b00                 mov eax, dword ptr [eax]
// 00588656  03442410             add eax, dword ptr [esp + 0x10]
// 0058865a  33d2                 xor edx, edx
// 0058865c  33f6                 xor esi, esi
// 0058865e  33ff                 xor edi, edi
// 00588660  83fd02               cmp ebp, 2
// 00588663  7c22                 jl 0x588687
// 00588665  8d4dfe               lea ecx, [ebp - 2]
// 00588668  d1e9                 shr ecx, 1
// 0058866a  41                   inc ecx
// 0058866b  8d3c09               lea edi, [ecx + ecx]
// 0058866e  8bff                 mov edi, edi
// 00588670  0fb618               movzx ebx, byte ptr [eax]
// 00588673  03d3                 add edx, ebx
// 00588675  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00588679  03f3                 add esi, ebx
// 0058867b  83c002               add eax, 2
// 0058867e  83e901               sub ecx, 1
// 00588681  75ed                 jne 0x588670
// 00588683  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00588687  3bfd                 cmp edi, ebp
// 00588689  7d05                 jge 0x588690
// 0058868b  0fb600               movzx eax, byte ptr [eax]
// 0058868e  03c8                 add ecx, eax
// 00588690  8344244004           add dword ptr [esp + 0x40], 4
// 00588695  03f2                 add esi, edx
// 00588697  03ce                 add ecx, esi
// 00588699  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0058869e  894c2418             mov dword ptr [esp + 0x18], ecx
// 005886a2  75ac                 jne 0x588650
// 005886a4  8b742434             mov esi, dword ptr [esp + 0x34]
// 005886a8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005886ac  8d0439               lea eax, [ecx + edi]
// 005886af  99                   cdq 
// 005886b0  f7fe                 idiv esi
// 005886b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005886b6  016c2410             add dword ptr [esp + 0x10], ebp
// 005886ba  41                   inc ecx
// 005886bb  836c242401           sub dword ptr [esp + 0x24], 1
// 005886c0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005886c4  8841ff               mov byte ptr [ecx - 1], al
// 005886c7  0f8569ffffff         jne 0x588636
// 005886cd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005886d1  8b442428             mov eax, dword ptr [esp + 0x28]
// 005886d5  8b542444             mov edx, dword ptr [esp + 0x44]
// 005886d9  03c0                 add eax, eax
// 005886db  03c0                 add eax, eax
// 005886dd  01442414             add dword ptr [esp + 0x14], eax
// 005886e1  41                   inc ecx
// 005886e2  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 005886e5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005886e9  0f8c24ffffff         jl 0x588613
// 005886ef  5f                   pop edi
// 005886f0  5e                   pop esi
// 005886f1  5d                   pop ebp
// 005886f2  5b                   pop ebx
// 005886f3  83c42c               add esp, 0x2c
// 005886f6  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
