// roc 2012-06 00666d40  unit: seg_00660000  size: 524 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666d40
//
// 00666d40  83ec2c               sub esp, 0x2c
// 00666d43  8b442430             mov eax, dword ptr [esp + 0x30]
// 00666d47  53                   push ebx
// 00666d48  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 00666d4e  56                   push esi
// 00666d4f  8b7044               mov esi, dword ptr [eax + 0x44]
// 00666d52  57                   push edi
// 00666d53  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 00666d59  4b                   dec ebx
// 00666d5a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00666d5e  897c2428             mov dword ptr [esp + 0x28], edi
// 00666d62  895c2424             mov dword ptr [esp + 0x24], ebx
// 00666d66  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00666d6e  89742410             mov dword ptr [esp + 0x10], esi
// 00666d72  0f8ec5010000         jle 0x666f3d
// 00666d78  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00666d7c  8d5740               lea edx, [edi + 0x40]
// 00666d7f  55                   push ebp
// 00666d80  894c2424             mov dword ptr [esp + 0x24], ecx
// 00666d84  89542420             mov dword ptr [esp + 0x20], edx
// 00666d88  eb0e                 jmp 0x666d98
// 00666d8a  8d9b00000000         lea ebx, [ebx]
// 00666d90  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00666d94  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00666d98  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00666d9b  8b6f08               mov ebp, dword ptr [edi + 8]
// 00666d9e  8b5004               mov edx, dword ptr [eax + 4]
// 00666da1  0fafe9               imul ebp, ecx
// 00666da4  8b5220               mov edx, dword ptr [edx + 0x20]
// 00666da7  6a01                 push 1
// 00666da9  51                   push ecx
// 00666daa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00666dae  8b09                 mov ecx, dword ptr [ecx]
// 00666db0  55                   push ebp
// 00666db1  51                   push ecx
// 00666db2  50                   push eax
// 00666db3  ffd2                 call edx
// 00666db5  83c414               add esp, 0x14
// 00666db8  8bc8                 mov ecx, eax
// 00666dba  894c2418             mov dword ptr [esp + 0x18], ecx
// 00666dbe  395f08               cmp dword ptr [edi + 8], ebx
// 00666dc1  7309                 jae 0x666dcc
// 00666dc3  8b460c               mov eax, dword ptr [esi + 0xc]
// 00666dc6  89442410             mov dword ptr [esp + 0x10], eax
// 00666dca  eb16                 jmp 0x666de2
// 00666dcc  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00666dcf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00666dd2  33d2                 xor edx, edx
// 00666dd4  f7f7                 div edi
// 00666dd6  89542410             mov dword ptr [esp + 0x10], edx
// 00666dda  85d2                 test edx, edx
// 00666ddc  7504                 jne 0x666de2
// 00666dde  897c2410             mov dword ptr [esp + 0x10], edi
// 00666de2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00666de5  8b6e08               mov ebp, dword ptr [esi + 8]
// 00666de8  33d2                 xor edx, edx
// 00666dea  8bc3                 mov eax, ebx
// 00666dec  f7f5                 div ebp
// 00666dee  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00666df2  8bfa                 mov edi, edx
// 00666df4  85ff                 test edi, edi
// 00666df6  7e04                 jle 0x666dfc
// 00666df8  2bef                 sub ebp, edi
// 00666dfa  8bfd                 mov edi, ebp
// 00666dfc  33ed                 xor ebp, ebp
// 00666dfe  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00666e02  7e78                 jle 0x666e7c
// 00666e04  eb0a                 jmp 0x666e10
// 00666e06  8da42400000000       lea esp, [esp]
// 00666e0d  8d4900               lea ecx, [ecx]
// 00666e10  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00666e13  8b442440             mov eax, dword ptr [esp + 0x40]
// 00666e17  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00666e1d  53                   push ebx
// 00666e1e  6a00                 push 0
// 00666e20  8d14ed00000000       lea edx, [ebp*8]
// 00666e27  52                   push edx
// 00666e28  8b542430             mov edx, dword ptr [esp + 0x30]
// 00666e2c  8b12                 mov edx, dword ptr [edx]
// 00666e2e  56                   push esi
// 00666e2f  52                   push edx
// 00666e30  8b542428             mov edx, dword ptr [esp + 0x28]
// 00666e34  52                   push edx
// 00666e35  50                   push eax
// 00666e36  8b4104               mov eax, dword ptr [ecx + 4]
// 00666e39  ffd0                 call eax
// 00666e3b  83c41c               add esp, 0x1c
// 00666e3e  85ff                 test edi, edi
// 00666e40  7e2b                 jle 0x666e6d
// 00666e42  8bcb                 mov ecx, ebx
// 00666e44  8bd7                 mov edx, edi
// 00666e46  c1e107               shl ecx, 7
// 00666e49  c1e207               shl edx, 7
// 00666e4c  03f1                 add esi, ecx
// 00666e4e  52                   push edx
// 00666e4f  56                   push esi
// 00666e50  e8fbc6feff           call 0x653550
// 00666e55  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 00666e59  83c408               add esp, 8
// 00666e5c  85ff                 test edi, edi
// 00666e5e  7e0d                 jle 0x666e6d
// 00666e60  8bc7                 mov eax, edi
// 00666e62  66890e               mov word ptr [esi], cx
// 00666e65  83ee80               sub esi, -0x80
// 00666e68  83e801               sub eax, 1
// 00666e6b  75f5                 jne 0x666e62
// 00666e6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00666e71  45                   inc ebp
// 00666e72  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00666e76  7c98                 jl 0x666e10
// 00666e78  8b742414             mov esi, dword ptr [esp + 0x14]
// 00666e7c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00666e80  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00666e84  394208               cmp dword ptr [edx + 8], eax
// 00666e87  0f8583000000         jne 0x666f10
// 00666e8d  03df                 add ebx, edi
// 00666e8f  33d2                 xor edx, edx
// 00666e91  8bc3                 mov eax, ebx
// 00666e93  f774241c             div dword ptr [esp + 0x1c]
// 00666e97  89442438             mov dword ptr [esp + 0x38], eax
// 00666e9b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666e9f  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00666ea2  8be8                 mov ebp, eax
// 00666ea4  7d6a                 jge 0x666f10
// 00666ea6  c1e307               shl ebx, 7
// 00666ea9  895c2434             mov dword ptr [esp + 0x34], ebx
// 00666ead  eb05                 jmp 0x666eb4
// 00666eaf  90                   nop 
// 00666eb0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00666eb4  8b442434             mov eax, dword ptr [esp + 0x34]
// 00666eb8  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 00666ebb  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 00666ebf  50                   push eax
// 00666ec0  57                   push edi
// 00666ec1  e88ac6feff           call 0x653550
// 00666ec6  8b442440             mov eax, dword ptr [esp + 0x40]
// 00666eca  83c408               add esp, 8
// 00666ecd  85c0                 test eax, eax
// 00666ecf  7639                 jbe 0x666f0a
// 00666ed1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00666ed5  c1e207               shl edx, 7
// 00666ed8  89442410             mov dword ptr [esp + 0x10], eax
// 00666edc  8d642400             lea esp, [esp]
// 00666ee0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00666ee4  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 00666ee9  85c9                 test ecx, ecx
// 00666eeb  7e0e                 jle 0x666efb
// 00666eed  8bc7                 mov eax, edi
// 00666eef  90                   nop 
// 00666ef0  668930               mov word ptr [eax], si
// 00666ef3  83e880               sub eax, -0x80
// 00666ef6  83e901               sub ecx, 1
// 00666ef9  75f5                 jne 0x666ef0
// 00666efb  03fa                 add edi, edx
// 00666efd  03da                 add ebx, edx
// 00666eff  836c241001           sub dword ptr [esp + 0x10], 1
// 00666f04  75da                 jne 0x666ee0
// 00666f06  8b742414             mov esi, dword ptr [esp + 0x14]
// 00666f0a  45                   inc ebp
// 00666f0b  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00666f0e  7ca0                 jl 0x666eb0
// 00666f10  8b442430             mov eax, dword ptr [esp + 0x30]
// 00666f14  b904000000           mov ecx, 4
// 00666f19  014c2420             add dword ptr [esp + 0x20], ecx
// 00666f1d  014c2424             add dword ptr [esp + 0x24], ecx
// 00666f21  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00666f25  40                   inc eax
// 00666f26  83c654               add esi, 0x54
// 00666f29  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 00666f2c  89442430             mov dword ptr [esp + 0x30], eax
// 00666f30  89742414             mov dword ptr [esp + 0x14], esi
// 00666f34  8bc1                 mov eax, ecx
// 00666f36  0f8c54feffff         jl 0x666d90
// 00666f3c  5d                   pop ebp
// 00666f3d  5f                   pop edi
// 00666f3e  5e                   pop esi
// 00666f3f  5b                   pop ebx
// 00666f40  83c42c               add esp, 0x2c
// 00666f43  89442404             mov dword ptr [esp + 4], eax
// 00666f47  e904fcffff           jmp 0x666b50
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
