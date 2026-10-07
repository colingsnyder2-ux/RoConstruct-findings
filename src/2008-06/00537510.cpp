// roc 2008-06 00537510  unit: seg_00530000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537510
//
// 00537510  83ec2c               sub esp, 0x2c
// 00537513  8b442430             mov eax, dword ptr [esp + 0x30]
// 00537517  53                   push ebx
// 00537518  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0053751e  56                   push esi
// 0053751f  8b7044               mov esi, dword ptr [eax + 0x44]
// 00537522  57                   push edi
// 00537523  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 00537529  4b                   dec ebx
// 0053752a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0053752e  897c2428             mov dword ptr [esp + 0x28], edi
// 00537532  895c2424             mov dword ptr [esp + 0x24], ebx
// 00537536  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0053753e  89742410             mov dword ptr [esp + 0x10], esi
// 00537542  0f8ec5010000         jle 0x53770d
// 00537548  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0053754c  8d5740               lea edx, [edi + 0x40]
// 0053754f  55                   push ebp
// 00537550  894c2424             mov dword ptr [esp + 0x24], ecx
// 00537554  89542420             mov dword ptr [esp + 0x20], edx
// 00537558  eb0e                 jmp 0x537568
// 0053755a  8d9b00000000         lea ebx, [ebx]
// 00537560  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00537564  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00537568  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053756b  8b6f08               mov ebp, dword ptr [edi + 8]
// 0053756e  8b5004               mov edx, dword ptr [eax + 4]
// 00537571  0fafe9               imul ebp, ecx
// 00537574  8b5220               mov edx, dword ptr [edx + 0x20]
// 00537577  6a01                 push 1
// 00537579  51                   push ecx
// 0053757a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053757e  8b09                 mov ecx, dword ptr [ecx]
// 00537580  55                   push ebp
// 00537581  51                   push ecx
// 00537582  50                   push eax
// 00537583  ffd2                 call edx
// 00537585  83c414               add esp, 0x14
// 00537588  8bc8                 mov ecx, eax
// 0053758a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053758e  395f08               cmp dword ptr [edi + 8], ebx
// 00537591  7309                 jae 0x53759c
// 00537593  8b460c               mov eax, dword ptr [esi + 0xc]
// 00537596  89442410             mov dword ptr [esp + 0x10], eax
// 0053759a  eb16                 jmp 0x5375b2
// 0053759c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0053759f  8b4620               mov eax, dword ptr [esi + 0x20]
// 005375a2  33d2                 xor edx, edx
// 005375a4  f7f7                 div edi
// 005375a6  89542410             mov dword ptr [esp + 0x10], edx
// 005375aa  85d2                 test edx, edx
// 005375ac  7504                 jne 0x5375b2
// 005375ae  897c2410             mov dword ptr [esp + 0x10], edi
// 005375b2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005375b5  8b6e08               mov ebp, dword ptr [esi + 8]
// 005375b8  33d2                 xor edx, edx
// 005375ba  8bc3                 mov eax, ebx
// 005375bc  f7f5                 div ebp
// 005375be  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005375c2  8bfa                 mov edi, edx
// 005375c4  85ff                 test edi, edi
// 005375c6  7e04                 jle 0x5375cc
// 005375c8  2bef                 sub ebp, edi
// 005375ca  8bfd                 mov edi, ebp
// 005375cc  33ed                 xor ebp, ebp
// 005375ce  396c2410             cmp dword ptr [esp + 0x10], ebp
// 005375d2  7e78                 jle 0x53764c
// 005375d4  eb0a                 jmp 0x5375e0
// 005375d6  8da42400000000       lea esp, [esp]
// 005375dd  8d4900               lea ecx, [ecx]
// 005375e0  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 005375e3  8b442440             mov eax, dword ptr [esp + 0x40]
// 005375e7  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 005375ed  53                   push ebx
// 005375ee  6a00                 push 0
// 005375f0  8d14ed00000000       lea edx, [ebp*8]
// 005375f7  52                   push edx
// 005375f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 005375fc  8b12                 mov edx, dword ptr [edx]
// 005375fe  56                   push esi
// 005375ff  52                   push edx
// 00537600  8b542428             mov edx, dword ptr [esp + 0x28]
// 00537604  52                   push edx
// 00537605  50                   push eax
// 00537606  8b4104               mov eax, dword ptr [ecx + 4]
// 00537609  ffd0                 call eax
// 0053760b  83c41c               add esp, 0x1c
// 0053760e  85ff                 test edi, edi
// 00537610  7e2b                 jle 0x53763d
// 00537612  8bcb                 mov ecx, ebx
// 00537614  8bd7                 mov edx, edi
// 00537616  c1e107               shl ecx, 7
// 00537619  c1e207               shl edx, 7
// 0053761c  03f1                 add esi, ecx
// 0053761e  52                   push edx
// 0053761f  56                   push esi
// 00537620  e87be5feff           call 0x525ba0
// 00537625  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 00537629  83c408               add esp, 8
// 0053762c  85ff                 test edi, edi
// 0053762e  7e0d                 jle 0x53763d
// 00537630  8bc7                 mov eax, edi
// 00537632  66890e               mov word ptr [esi], cx
// 00537635  83ee80               sub esi, -0x80
// 00537638  83e801               sub eax, 1
// 0053763b  75f5                 jne 0x537632
// 0053763d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00537641  45                   inc ebp
// 00537642  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00537646  7c98                 jl 0x5375e0
// 00537648  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053764c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00537650  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00537654  394208               cmp dword ptr [edx + 8], eax
// 00537657  0f8583000000         jne 0x5376e0
// 0053765d  03df                 add ebx, edi
// 0053765f  33d2                 xor edx, edx
// 00537661  8bc3                 mov eax, ebx
// 00537663  f774241c             div dword ptr [esp + 0x1c]
// 00537667  89442438             mov dword ptr [esp + 0x38], eax
// 0053766b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053766f  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00537672  8be8                 mov ebp, eax
// 00537674  7d6a                 jge 0x5376e0
// 00537676  c1e307               shl ebx, 7
// 00537679  895c2434             mov dword ptr [esp + 0x34], ebx
// 0053767d  eb05                 jmp 0x537684
// 0053767f  90                   nop 
// 00537680  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00537684  8b442434             mov eax, dword ptr [esp + 0x34]
// 00537688  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 0053768b  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 0053768f  50                   push eax
// 00537690  57                   push edi
// 00537691  e80ae5feff           call 0x525ba0
// 00537696  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053769a  83c408               add esp, 8
// 0053769d  85c0                 test eax, eax
// 0053769f  7639                 jbe 0x5376da
// 005376a1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005376a5  c1e207               shl edx, 7
// 005376a8  89442410             mov dword ptr [esp + 0x10], eax
// 005376ac  8d642400             lea esp, [esp]
// 005376b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005376b4  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 005376b9  85c9                 test ecx, ecx
// 005376bb  7e0e                 jle 0x5376cb
// 005376bd  8bc7                 mov eax, edi
// 005376bf  90                   nop 
// 005376c0  668930               mov word ptr [eax], si
// 005376c3  83e880               sub eax, -0x80
// 005376c6  83e901               sub ecx, 1
// 005376c9  75f5                 jne 0x5376c0
// 005376cb  03fa                 add edi, edx
// 005376cd  03da                 add ebx, edx
// 005376cf  836c241001           sub dword ptr [esp + 0x10], 1
// 005376d4  75da                 jne 0x5376b0
// 005376d6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005376da  45                   inc ebp
// 005376db  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005376de  7ca0                 jl 0x537680
// 005376e0  8b442430             mov eax, dword ptr [esp + 0x30]
// 005376e4  b904000000           mov ecx, 4
// 005376e9  014c2420             add dword ptr [esp + 0x20], ecx
// 005376ed  014c2424             add dword ptr [esp + 0x24], ecx
// 005376f1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005376f5  40                   inc eax
// 005376f6  83c654               add esi, 0x54
// 005376f9  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005376fc  89442430             mov dword ptr [esp + 0x30], eax
// 00537700  89742414             mov dword ptr [esp + 0x14], esi
// 00537704  8bc1                 mov eax, ecx
// 00537706  0f8c54feffff         jl 0x537560
// 0053770c  5d                   pop ebp
// 0053770d  5f                   pop edi
// 0053770e  5e                   pop esi
// 0053770f  5b                   pop ebx
// 00537710  83c42c               add esp, 0x2c
// 00537713  89442404             mov dword ptr [esp + 4], eax
// 00537717  e904fcffff           jmp 0x537320
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
