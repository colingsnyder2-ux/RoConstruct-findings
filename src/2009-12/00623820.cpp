// roc 2009-12 00623820  unit: seg_00620000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623820
//
// 00623820  83ec2c               sub esp, 0x2c
// 00623823  8b442430             mov eax, dword ptr [esp + 0x30]
// 00623827  53                   push ebx
// 00623828  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0062382e  56                   push esi
// 0062382f  8b7044               mov esi, dword ptr [eax + 0x44]
// 00623832  57                   push edi
// 00623833  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 00623839  4b                   dec ebx
// 0062383a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0062383e  897c2428             mov dword ptr [esp + 0x28], edi
// 00623842  895c2424             mov dword ptr [esp + 0x24], ebx
// 00623846  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0062384e  89742410             mov dword ptr [esp + 0x10], esi
// 00623852  0f8ec5010000         jle 0x623a1d
// 00623858  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0062385c  8d5740               lea edx, [edi + 0x40]
// 0062385f  55                   push ebp
// 00623860  894c2424             mov dword ptr [esp + 0x24], ecx
// 00623864  89542420             mov dword ptr [esp + 0x20], edx
// 00623868  eb0e                 jmp 0x623878
// 0062386a  8d9b00000000         lea ebx, [ebx]
// 00623870  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00623874  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00623878  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0062387b  8b6f08               mov ebp, dword ptr [edi + 8]
// 0062387e  8b5004               mov edx, dword ptr [eax + 4]
// 00623881  0fafe9               imul ebp, ecx
// 00623884  8b5220               mov edx, dword ptr [edx + 0x20]
// 00623887  6a01                 push 1
// 00623889  51                   push ecx
// 0062388a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062388e  8b09                 mov ecx, dword ptr [ecx]
// 00623890  55                   push ebp
// 00623891  51                   push ecx
// 00623892  50                   push eax
// 00623893  ffd2                 call edx
// 00623895  83c414               add esp, 0x14
// 00623898  8bc8                 mov ecx, eax
// 0062389a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062389e  395f08               cmp dword ptr [edi + 8], ebx
// 006238a1  7309                 jae 0x6238ac
// 006238a3  8b460c               mov eax, dword ptr [esi + 0xc]
// 006238a6  89442410             mov dword ptr [esp + 0x10], eax
// 006238aa  eb16                 jmp 0x6238c2
// 006238ac  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006238af  8b4620               mov eax, dword ptr [esi + 0x20]
// 006238b2  33d2                 xor edx, edx
// 006238b4  f7f7                 div edi
// 006238b6  89542410             mov dword ptr [esp + 0x10], edx
// 006238ba  85d2                 test edx, edx
// 006238bc  7504                 jne 0x6238c2
// 006238be  897c2410             mov dword ptr [esp + 0x10], edi
// 006238c2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 006238c5  8b6e08               mov ebp, dword ptr [esi + 8]
// 006238c8  33d2                 xor edx, edx
// 006238ca  8bc3                 mov eax, ebx
// 006238cc  f7f5                 div ebp
// 006238ce  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006238d2  8bfa                 mov edi, edx
// 006238d4  85ff                 test edi, edi
// 006238d6  7e04                 jle 0x6238dc
// 006238d8  2bef                 sub ebp, edi
// 006238da  8bfd                 mov edi, ebp
// 006238dc  33ed                 xor ebp, ebp
// 006238de  396c2410             cmp dword ptr [esp + 0x10], ebp
// 006238e2  7e78                 jle 0x62395c
// 006238e4  eb0a                 jmp 0x6238f0
// 006238e6  8da42400000000       lea esp, [esp]
// 006238ed  8d4900               lea ecx, [ecx]
// 006238f0  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 006238f3  8b442440             mov eax, dword ptr [esp + 0x40]
// 006238f7  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 006238fd  53                   push ebx
// 006238fe  6a00                 push 0
// 00623900  8d14ed00000000       lea edx, [ebp*8]
// 00623907  52                   push edx
// 00623908  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062390c  8b12                 mov edx, dword ptr [edx]
// 0062390e  56                   push esi
// 0062390f  52                   push edx
// 00623910  8b542428             mov edx, dword ptr [esp + 0x28]
// 00623914  52                   push edx
// 00623915  50                   push eax
// 00623916  8b4104               mov eax, dword ptr [ecx + 4]
// 00623919  ffd0                 call eax
// 0062391b  83c41c               add esp, 0x1c
// 0062391e  85ff                 test edi, edi
// 00623920  7e2b                 jle 0x62394d
// 00623922  8bcb                 mov ecx, ebx
// 00623924  8bd7                 mov edx, edi
// 00623926  c1e107               shl ecx, 7
// 00623929  c1e207               shl edx, 7
// 0062392c  03f1                 add esi, ecx
// 0062392e  52                   push edx
// 0062392f  56                   push esi
// 00623930  e8cb83feff           call 0x60bd00
// 00623935  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 00623939  83c408               add esp, 8
// 0062393c  85ff                 test edi, edi
// 0062393e  7e0d                 jle 0x62394d
// 00623940  8bc7                 mov eax, edi
// 00623942  66890e               mov word ptr [esi], cx
// 00623945  83ee80               sub esi, -0x80
// 00623948  83e801               sub eax, 1
// 0062394b  75f5                 jne 0x623942
// 0062394d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00623951  45                   inc ebp
// 00623952  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00623956  7c98                 jl 0x6238f0
// 00623958  8b742414             mov esi, dword ptr [esp + 0x14]
// 0062395c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00623960  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00623964  394208               cmp dword ptr [edx + 8], eax
// 00623967  0f8583000000         jne 0x6239f0
// 0062396d  03df                 add ebx, edi
// 0062396f  33d2                 xor edx, edx
// 00623971  8bc3                 mov eax, ebx
// 00623973  f774241c             div dword ptr [esp + 0x1c]
// 00623977  89442438             mov dword ptr [esp + 0x38], eax
// 0062397b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062397f  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00623982  8be8                 mov ebp, eax
// 00623984  7d6a                 jge 0x6239f0
// 00623986  c1e307               shl ebx, 7
// 00623989  895c2434             mov dword ptr [esp + 0x34], ebx
// 0062398d  eb05                 jmp 0x623994
// 0062398f  90                   nop 
// 00623990  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00623994  8b442434             mov eax, dword ptr [esp + 0x34]
// 00623998  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 0062399b  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 0062399f  50                   push eax
// 006239a0  57                   push edi
// 006239a1  e85a83feff           call 0x60bd00
// 006239a6  8b442440             mov eax, dword ptr [esp + 0x40]
// 006239aa  83c408               add esp, 8
// 006239ad  85c0                 test eax, eax
// 006239af  7639                 jbe 0x6239ea
// 006239b1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006239b5  c1e207               shl edx, 7
// 006239b8  89442410             mov dword ptr [esp + 0x10], eax
// 006239bc  8d642400             lea esp, [esp]
// 006239c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006239c4  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 006239c9  85c9                 test ecx, ecx
// 006239cb  7e0e                 jle 0x6239db
// 006239cd  8bc7                 mov eax, edi
// 006239cf  90                   nop 
// 006239d0  668930               mov word ptr [eax], si
// 006239d3  83e880               sub eax, -0x80
// 006239d6  83e901               sub ecx, 1
// 006239d9  75f5                 jne 0x6239d0
// 006239db  03fa                 add edi, edx
// 006239dd  03da                 add ebx, edx
// 006239df  836c241001           sub dword ptr [esp + 0x10], 1
// 006239e4  75da                 jne 0x6239c0
// 006239e6  8b742414             mov esi, dword ptr [esp + 0x14]
// 006239ea  45                   inc ebp
// 006239eb  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 006239ee  7ca0                 jl 0x623990
// 006239f0  8b442430             mov eax, dword ptr [esp + 0x30]
// 006239f4  b904000000           mov ecx, 4
// 006239f9  014c2420             add dword ptr [esp + 0x20], ecx
// 006239fd  014c2424             add dword ptr [esp + 0x24], ecx
// 00623a01  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00623a05  40                   inc eax
// 00623a06  83c654               add esi, 0x54
// 00623a09  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 00623a0c  89442430             mov dword ptr [esp + 0x30], eax
// 00623a10  89742414             mov dword ptr [esp + 0x14], esi
// 00623a14  8bc1                 mov eax, ecx
// 00623a16  0f8c54feffff         jl 0x623870
// 00623a1c  5d                   pop ebp
// 00623a1d  5f                   pop edi
// 00623a1e  5e                   pop esi
// 00623a1f  5b                   pop ebx
// 00623a20  83c42c               add esp, 0x2c
// 00623a23  89442404             mov dword ptr [esp + 4], eax
// 00623a27  e904fcffff           jmp 0x623630
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
