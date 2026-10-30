// from server: 100% by auto
// roc 2010-06 00585380  unit: seg_00580000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585380
//
// 00585380  83ec2c               sub esp, 0x2c
// 00585383  8b442430             mov eax, dword ptr [esp + 0x30]
// 00585387  53                   push ebx
// 00585388  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0058538e  56                   push esi
// 0058538f  8b7044               mov esi, dword ptr [eax + 0x44]
// 00585392  57                   push edi
// 00585393  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 00585399  4b                   dec ebx
// 0058539a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0058539e  897c2428             mov dword ptr [esp + 0x28], edi
// 005853a2  895c2424             mov dword ptr [esp + 0x24], ebx
// 005853a6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005853ae  89742410             mov dword ptr [esp + 0x10], esi
// 005853b2  0f8ec5010000         jle 0x58557d
// 005853b8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005853bc  8d5740               lea edx, [edi + 0x40]
// 005853bf  55                   push ebp
// 005853c0  894c2424             mov dword ptr [esp + 0x24], ecx
// 005853c4  89542420             mov dword ptr [esp + 0x20], edx
// 005853c8  eb0e                 jmp 0x5853d8
// 005853ca  8d9b00000000         lea ebx, [ebx]
// 005853d0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005853d4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005853d8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005853db  8b6f08               mov ebp, dword ptr [edi + 8]
// 005853de  8b5004               mov edx, dword ptr [eax + 4]
// 005853e1  0fafe9               imul ebp, ecx
// 005853e4  8b5220               mov edx, dword ptr [edx + 0x20]
// 005853e7  6a01                 push 1
// 005853e9  51                   push ecx
// 005853ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005853ee  8b09                 mov ecx, dword ptr [ecx]
// 005853f0  55                   push ebp
// 005853f1  51                   push ecx
// 005853f2  50                   push eax
// 005853f3  ffd2                 call edx
// 005853f5  83c414               add esp, 0x14
// 005853f8  8bc8                 mov ecx, eax
// 005853fa  894c2418             mov dword ptr [esp + 0x18], ecx
// 005853fe  395f08               cmp dword ptr [edi + 8], ebx
// 00585401  7309                 jae 0x58540c
// 00585403  8b460c               mov eax, dword ptr [esi + 0xc]
// 00585406  89442410             mov dword ptr [esp + 0x10], eax
// 0058540a  eb16                 jmp 0x585422
// 0058540c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0058540f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585412  33d2                 xor edx, edx
// 00585414  f7f7                 div edi
// 00585416  89542410             mov dword ptr [esp + 0x10], edx
// 0058541a  85d2                 test edx, edx
// 0058541c  7504                 jne 0x585422
// 0058541e  897c2410             mov dword ptr [esp + 0x10], edi
// 00585422  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00585425  8b6e08               mov ebp, dword ptr [esi + 8]
// 00585428  33d2                 xor edx, edx
// 0058542a  8bc3                 mov eax, ebx
// 0058542c  f7f5                 div ebp
// 0058542e  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00585432  8bfa                 mov edi, edx
// 00585434  85ff                 test edi, edi
// 00585436  7e04                 jle 0x58543c
// 00585438  2bef                 sub ebp, edi
// 0058543a  8bfd                 mov edi, ebp
// 0058543c  33ed                 xor ebp, ebp
// 0058543e  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00585442  7e78                 jle 0x5854bc
// 00585444  eb0a                 jmp 0x585450
// 00585446  8da42400000000       lea esp, [esp]
// 0058544d  8d4900               lea ecx, [ecx]
// 00585450  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00585453  8b442440             mov eax, dword ptr [esp + 0x40]
// 00585457  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 0058545d  53                   push ebx
// 0058545e  6a00                 push 0
// 00585460  8d14ed00000000       lea edx, [ebp*8]
// 00585467  52                   push edx
// 00585468  8b542430             mov edx, dword ptr [esp + 0x30]
// 0058546c  8b12                 mov edx, dword ptr [edx]
// 0058546e  56                   push esi
// 0058546f  52                   push edx
// 00585470  8b542428             mov edx, dword ptr [esp + 0x28]
// 00585474  52                   push edx
// 00585475  50                   push eax
// 00585476  8b4104               mov eax, dword ptr [ecx + 4]
// 00585479  ffd0                 call eax
// 0058547b  83c41c               add esp, 0x1c
// 0058547e  85ff                 test edi, edi
// 00585480  7e2b                 jle 0x5854ad
// 00585482  8bcb                 mov ecx, ebx
// 00585484  8bd7                 mov edx, edi
// 00585486  c1e107               shl ecx, 7
// 00585489  c1e207               shl edx, 7
// 0058548c  03f1                 add esi, ecx
// 0058548e  52                   push edx
// 0058548f  56                   push esi
// 00585490  e84b7ffeff           call 0x56d3e0
// 00585495  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 00585499  83c408               add esp, 8
// 0058549c  85ff                 test edi, edi
// 0058549e  7e0d                 jle 0x5854ad
// 005854a0  8bc7                 mov eax, edi
// 005854a2  66890e               mov word ptr [esi], cx
// 005854a5  83ee80               sub esi, -0x80
// 005854a8  83e801               sub eax, 1
// 005854ab  75f5                 jne 0x5854a2
// 005854ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005854b1  45                   inc ebp
// 005854b2  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 005854b6  7c98                 jl 0x585450
// 005854b8  8b742414             mov esi, dword ptr [esp + 0x14]
// 005854bc  8b442428             mov eax, dword ptr [esp + 0x28]
// 005854c0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005854c4  394208               cmp dword ptr [edx + 8], eax
// 005854c7  0f8583000000         jne 0x585550
// 005854cd  03df                 add ebx, edi
// 005854cf  33d2                 xor edx, edx
// 005854d1  8bc3                 mov eax, ebx
// 005854d3  f774241c             div dword ptr [esp + 0x1c]
// 005854d7  89442438             mov dword ptr [esp + 0x38], eax
// 005854db  8b442410             mov eax, dword ptr [esp + 0x10]
// 005854df  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005854e2  8be8                 mov ebp, eax
// 005854e4  7d6a                 jge 0x585550
// 005854e6  c1e307               shl ebx, 7
// 005854e9  895c2434             mov dword ptr [esp + 0x34], ebx
// 005854ed  eb05                 jmp 0x5854f4
// 005854ef  90                   nop 
// 005854f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005854f4  8b442434             mov eax, dword ptr [esp + 0x34]
// 005854f8  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 005854fb  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 005854ff  50                   push eax
// 00585500  57                   push edi
// 00585501  e8da7efeff           call 0x56d3e0
// 00585506  8b442440             mov eax, dword ptr [esp + 0x40]
// 0058550a  83c408               add esp, 8
// 0058550d  85c0                 test eax, eax
// 0058550f  7639                 jbe 0x58554a
// 00585511  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00585515  c1e207               shl edx, 7
// 00585518  89442410             mov dword ptr [esp + 0x10], eax
// 0058551c  8d642400             lea esp, [esp]
// 00585520  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00585524  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 00585529  85c9                 test ecx, ecx
// 0058552b  7e0e                 jle 0x58553b
// 0058552d  8bc7                 mov eax, edi
// 0058552f  90                   nop 
// 00585530  668930               mov word ptr [eax], si
// 00585533  83e880               sub eax, -0x80
// 00585536  83e901               sub ecx, 1
// 00585539  75f5                 jne 0x585530
// 0058553b  03fa                 add edi, edx
// 0058553d  03da                 add ebx, edx
// 0058553f  836c241001           sub dword ptr [esp + 0x10], 1
// 00585544  75da                 jne 0x585520
// 00585546  8b742414             mov esi, dword ptr [esp + 0x14]
// 0058554a  45                   inc ebp
// 0058554b  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0058554e  7ca0                 jl 0x5854f0
// 00585550  8b442430             mov eax, dword ptr [esp + 0x30]
// 00585554  b904000000           mov ecx, 4
// 00585559  014c2420             add dword ptr [esp + 0x20], ecx
// 0058555d  014c2424             add dword ptr [esp + 0x24], ecx
// 00585561  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00585565  40                   inc eax
// 00585566  83c654               add esi, 0x54
// 00585569  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0058556c  89442430             mov dword ptr [esp + 0x30], eax
// 00585570  89742414             mov dword ptr [esp + 0x14], esi
// 00585574  8bc1                 mov eax, ecx
// 00585576  0f8c54feffff         jl 0x5853d0
// 0058557c  5d                   pop ebp
// 0058557d  5f                   pop edi
// 0058557e  5e                   pop esi
// 0058557f  5b                   pop ebx
// 00585580  83c42c               add esp, 0x2c
// 00585583  89442404             mov dword ptr [esp + 4], eax
// 00585587  e904fcffff           jmp 0x585190
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
