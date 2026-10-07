// roc 2011-06 0057b630  unit: seg_00570000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b630
//
// 0057b630  83ec2c               sub esp, 0x2c
// 0057b633  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057b637  53                   push ebx
// 0057b638  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0057b63e  56                   push esi
// 0057b63f  8b7044               mov esi, dword ptr [eax + 0x44]
// 0057b642  57                   push edi
// 0057b643  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 0057b649  4b                   dec ebx
// 0057b64a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0057b64e  897c2428             mov dword ptr [esp + 0x28], edi
// 0057b652  895c2424             mov dword ptr [esp + 0x24], ebx
// 0057b656  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057b65e  89742410             mov dword ptr [esp + 0x10], esi
// 0057b662  0f8ec5010000         jle 0x57b82d
// 0057b668  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057b66c  8d5740               lea edx, [edi + 0x40]
// 0057b66f  55                   push ebp
// 0057b670  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057b674  89542420             mov dword ptr [esp + 0x20], edx
// 0057b678  eb0e                 jmp 0x57b688
// 0057b67a  8d9b00000000         lea ebx, [ebx]
// 0057b680  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0057b684  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057b688  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057b68b  8b6f08               mov ebp, dword ptr [edi + 8]
// 0057b68e  8b5004               mov edx, dword ptr [eax + 4]
// 0057b691  0fafe9               imul ebp, ecx
// 0057b694  8b5220               mov edx, dword ptr [edx + 0x20]
// 0057b697  6a01                 push 1
// 0057b699  51                   push ecx
// 0057b69a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057b69e  8b09                 mov ecx, dword ptr [ecx]
// 0057b6a0  55                   push ebp
// 0057b6a1  51                   push ecx
// 0057b6a2  50                   push eax
// 0057b6a3  ffd2                 call edx
// 0057b6a5  83c414               add esp, 0x14
// 0057b6a8  8bc8                 mov ecx, eax
// 0057b6aa  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057b6ae  395f08               cmp dword ptr [edi + 8], ebx
// 0057b6b1  7309                 jae 0x57b6bc
// 0057b6b3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057b6b6  89442410             mov dword ptr [esp + 0x10], eax
// 0057b6ba  eb16                 jmp 0x57b6d2
// 0057b6bc  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0057b6bf  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057b6c2  33d2                 xor edx, edx
// 0057b6c4  f7f7                 div edi
// 0057b6c6  89542410             mov dword ptr [esp + 0x10], edx
// 0057b6ca  85d2                 test edx, edx
// 0057b6cc  7504                 jne 0x57b6d2
// 0057b6ce  897c2410             mov dword ptr [esp + 0x10], edi
// 0057b6d2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0057b6d5  8b6e08               mov ebp, dword ptr [esi + 8]
// 0057b6d8  33d2                 xor edx, edx
// 0057b6da  8bc3                 mov eax, ebx
// 0057b6dc  f7f5                 div ebp
// 0057b6de  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057b6e2  8bfa                 mov edi, edx
// 0057b6e4  85ff                 test edi, edi
// 0057b6e6  7e04                 jle 0x57b6ec
// 0057b6e8  2bef                 sub ebp, edi
// 0057b6ea  8bfd                 mov edi, ebp
// 0057b6ec  33ed                 xor ebp, ebp
// 0057b6ee  396c2410             cmp dword ptr [esp + 0x10], ebp
// 0057b6f2  7e78                 jle 0x57b76c
// 0057b6f4  eb0a                 jmp 0x57b700
// 0057b6f6  8da42400000000       lea esp, [esp]
// 0057b6fd  8d4900               lea ecx, [ecx]
// 0057b700  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0057b703  8b442440             mov eax, dword ptr [esp + 0x40]
// 0057b707  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 0057b70d  53                   push ebx
// 0057b70e  6a00                 push 0
// 0057b710  8d14ed00000000       lea edx, [ebp*8]
// 0057b717  52                   push edx
// 0057b718  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057b71c  8b12                 mov edx, dword ptr [edx]
// 0057b71e  56                   push esi
// 0057b71f  52                   push edx
// 0057b720  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057b724  52                   push edx
// 0057b725  50                   push eax
// 0057b726  8b4104               mov eax, dword ptr [ecx + 4]
// 0057b729  ffd0                 call eax
// 0057b72b  83c41c               add esp, 0x1c
// 0057b72e  85ff                 test edi, edi
// 0057b730  7e2b                 jle 0x57b75d
// 0057b732  8bcb                 mov ecx, ebx
// 0057b734  8bd7                 mov edx, edi
// 0057b736  c1e107               shl ecx, 7
// 0057b739  c1e207               shl edx, 7
// 0057b73c  03f1                 add esi, ecx
// 0057b73e  52                   push edx
// 0057b73f  56                   push esi
// 0057b740  e8fbc6feff           call 0x567e40
// 0057b745  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 0057b749  83c408               add esp, 8
// 0057b74c  85ff                 test edi, edi
// 0057b74e  7e0d                 jle 0x57b75d
// 0057b750  8bc7                 mov eax, edi
// 0057b752  66890e               mov word ptr [esi], cx
// 0057b755  83ee80               sub esi, -0x80
// 0057b758  83e801               sub eax, 1
// 0057b75b  75f5                 jne 0x57b752
// 0057b75d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057b761  45                   inc ebp
// 0057b762  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0057b766  7c98                 jl 0x57b700
// 0057b768  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057b76c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057b770  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057b774  394208               cmp dword ptr [edx + 8], eax
// 0057b777  0f8583000000         jne 0x57b800
// 0057b77d  03df                 add ebx, edi
// 0057b77f  33d2                 xor edx, edx
// 0057b781  8bc3                 mov eax, ebx
// 0057b783  f774241c             div dword ptr [esp + 0x1c]
// 0057b787  89442438             mov dword ptr [esp + 0x38], eax
// 0057b78b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b78f  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0057b792  8be8                 mov ebp, eax
// 0057b794  7d6a                 jge 0x57b800
// 0057b796  c1e307               shl ebx, 7
// 0057b799  895c2434             mov dword ptr [esp + 0x34], ebx
// 0057b79d  eb05                 jmp 0x57b7a4
// 0057b79f  90                   nop 
// 0057b7a0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057b7a4  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057b7a8  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 0057b7ab  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 0057b7af  50                   push eax
// 0057b7b0  57                   push edi
// 0057b7b1  e88ac6feff           call 0x567e40
// 0057b7b6  8b442440             mov eax, dword ptr [esp + 0x40]
// 0057b7ba  83c408               add esp, 8
// 0057b7bd  85c0                 test eax, eax
// 0057b7bf  7639                 jbe 0x57b7fa
// 0057b7c1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057b7c5  c1e207               shl edx, 7
// 0057b7c8  89442410             mov dword ptr [esp + 0x10], eax
// 0057b7cc  8d642400             lea esp, [esp]
// 0057b7d0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057b7d4  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 0057b7d9  85c9                 test ecx, ecx
// 0057b7db  7e0e                 jle 0x57b7eb
// 0057b7dd  8bc7                 mov eax, edi
// 0057b7df  90                   nop 
// 0057b7e0  668930               mov word ptr [eax], si
// 0057b7e3  83e880               sub eax, -0x80
// 0057b7e6  83e901               sub ecx, 1
// 0057b7e9  75f5                 jne 0x57b7e0
// 0057b7eb  03fa                 add edi, edx
// 0057b7ed  03da                 add ebx, edx
// 0057b7ef  836c241001           sub dword ptr [esp + 0x10], 1
// 0057b7f4  75da                 jne 0x57b7d0
// 0057b7f6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057b7fa  45                   inc ebp
// 0057b7fb  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0057b7fe  7ca0                 jl 0x57b7a0
// 0057b800  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057b804  b904000000           mov ecx, 4
// 0057b809  014c2420             add dword ptr [esp + 0x20], ecx
// 0057b80d  014c2424             add dword ptr [esp + 0x24], ecx
// 0057b811  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057b815  40                   inc eax
// 0057b816  83c654               add esi, 0x54
// 0057b819  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0057b81c  89442430             mov dword ptr [esp + 0x30], eax
// 0057b820  89742414             mov dword ptr [esp + 0x14], esi
// 0057b824  8bc1                 mov eax, ecx
// 0057b826  0f8c54feffff         jl 0x57b680
// 0057b82c  5d                   pop ebp
// 0057b82d  5f                   pop edi
// 0057b82e  5e                   pop esi
// 0057b82f  5b                   pop ebx
// 0057b830  83c42c               add esp, 0x2c
// 0057b833  89442404             mov dword ptr [esp + 4], eax
// 0057b837  e904fcffff           jmp 0x57b440
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
