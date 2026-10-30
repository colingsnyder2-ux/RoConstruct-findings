// roc 2009-12 00874fb0  unit: CXTPRibbonTheme  size: 1500 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00874fb0
//
// 00874fb0  6aff                 push -1
// 00874fb2  6881009600           push 0x960081
// 00874fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00874fbd  50                   push eax
// 00874fbe  81ec84000000         sub esp, 0x84
// 00874fc4  53                   push ebx
// 00874fc5  55                   push ebp
// 00874fc6  56                   push esi
// 00874fc7  57                   push edi
// 00874fc8  a10052b600           mov eax, dword ptr [0xb65200]
// 00874fcd  33c4                 xor eax, esp
// 00874fcf  50                   push eax
// 00874fd0  8d842498000000       lea eax, [esp + 0x98]
// 00874fd7  64a300000000         mov dword ptr fs:[0], eax
// 00874fdd  8be9                 mov ebp, ecx
// 00874fdf  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00874fe3  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00874fea  8bcf                 mov ecx, edi
// 00874fec  e89f20f9ff           call 0x807090
// 00874ff1  8b8f00020000         mov ecx, dword ptr [edi + 0x200]
// 00874ff7  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 00874ffd  89442428             mov dword ptr [esp + 0x28], eax
// 00875001  8b87fc010000         mov eax, dword ptr [edi + 0x1fc]
// 00875007  89442430             mov dword ptr [esp + 0x30], eax
// 0087500b  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 00875011  894c2434             mov dword ptr [esp + 0x34], ecx
// 00875015  8bcf                 mov ecx, edi
// 00875017  89542438             mov dword ptr [esp + 0x38], edx
// 0087501b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087501f  e89c030200           call 0x8953c0
// 00875024  85c0                 test eax, eax
// 00875026  0f85e8010000         jne 0x875214
// 0087502c  689016a000           push 0xa01690
// 00875031  8bcd                 mov ecx, ebp
// 00875033  e8c89c0000           call 0x87ed00
// 00875038  8bd8                 mov ebx, eax
// 0087503a  85db                 test ebx, ebx
// 0087503c  0f842e050000         je 0x875570
// 00875042  33c9                 xor ecx, ecx
// 00875044  398c24b0000000       cmp dword ptr [esp + 0xb0], ecx
// 0087504b  6a02                 push 2
// 0087504d  0f94c1               sete cl
// 00875050  8d542418             lea edx, [esp + 0x18]
// 00875054  8bf9                 mov edi, ecx
// 00875056  57                   push edi
// 00875057  52                   push edx
// 00875058  8bcb                 mov ecx, ebx
// 0087505a  e861b80600           call 0x8e08c0
// 0087505f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00875063  8b542414             mov edx, dword ptr [esp + 0x14]
// 00875067  8b742430             mov esi, dword ptr [esp + 0x30]
// 0087506b  8bc1                 mov eax, ecx
// 0087506d  2bc2                 sub eax, edx
// 0087506f  03c6                 add eax, esi
// 00875071  89442448             mov dword ptr [esp + 0x48], eax
// 00875075  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00875079  8944244c             mov dword ptr [esp + 0x4c], eax
// 0087507d  33c0                 xor eax, eax
// 0087507f  68ff00ff00           push 0xff00ff
// 00875084  89442464             mov dword ptr [esp + 0x64], eax
// 00875088  8944246c             mov dword ptr [esp + 0x6c], eax
// 0087508c  8d442464             lea eax, [esp + 0x64]
// 00875090  50                   push eax
// 00875091  83ec10               sub esp, 0x10
// 00875094  8bc4                 mov eax, esp
// 00875096  8910                 mov dword ptr [eax], edx
// 00875098  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087509c  89742458             mov dword ptr [esp + 0x58], esi
// 008750a0  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008750a4  895004               mov dword ptr [eax + 4], edx
// 008750a7  894808               mov dword ptr [eax + 8], ecx
// 008750aa  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008750ae  8d542458             lea edx, [esp + 0x58]
// 008750b2  8974245c             mov dword ptr [esp + 0x5c], esi
// 008750b6  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 008750bd  52                   push edx
// 008750be  89480c               mov dword ptr [eax + 0xc], ecx
// 008750c1  56                   push esi
// 008750c2  8bcb                 mov ecx, ebx
// 008750c4  c784248400000005000000 mov dword ptr [esp + 0x84], 5
// 008750cf  c784248c00000003000000 mov dword ptr [esp + 0x8c], 3
// 008750da  e821bd0600           call 0x8e0e00
// 008750df  688016a000           push 0xa01680
// 008750e4  8bcd                 mov ecx, ebp
// 008750e6  e8159c0000           call 0x87ed00
// 008750eb  6a02                 push 2
// 008750ed  8bd8                 mov ebx, eax
// 008750ef  57                   push edi
// 008750f0  8d442468             lea eax, [esp + 0x68]
// 008750f4  50                   push eax
// 008750f5  8bcb                 mov ecx, ebx
// 008750f7  e8c4b70600           call 0x8e08c0
// 008750fc  8b10                 mov edx, dword ptr [eax]
// 008750fe  89542414             mov dword ptr [esp + 0x14], edx
// 00875102  8b4804               mov ecx, dword ptr [eax + 4]
// 00875105  894c2418             mov dword ptr [esp + 0x18], ecx
// 00875109  8b6808               mov ebp, dword ptr [eax + 8]
// 0087510c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00875110  8b400c               mov eax, dword ptr [eax + 0xc]
// 00875113  89442420             mov dword ptr [esp + 0x20], eax
// 00875117  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087511b  8bca                 mov ecx, edx
// 0087511d  2bcd                 sub ecx, ebp
// 0087511f  03c8                 add ecx, eax
// 00875121  89442478             mov dword ptr [esp + 0x78], eax
// 00875125  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00875129  894c2470             mov dword ptr [esp + 0x70], ecx
// 0087512d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00875131  8944247c             mov dword ptr [esp + 0x7c], eax
// 00875135  33c0                 xor eax, eax
// 00875137  83ec10               sub esp, 0x10
// 0087513a  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00875141  8bcc                 mov ecx, esp
// 00875143  8901                 mov dword ptr [ecx], eax
// 00875145  b805000000           mov eax, 5
// 0087514a  894104               mov dword ptr [ecx + 4], eax
// 0087514d  33c0                 xor eax, eax
// 0087514f  894108               mov dword ptr [ecx + 8], eax
// 00875152  b803000000           mov eax, 3
// 00875157  89410c               mov dword ptr [ecx + 0xc], eax
// 0087515a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087515e  83ec10               sub esp, 0x10
// 00875161  8bcc                 mov ecx, esp
// 00875163  8911                 mov dword ptr [ecx], edx
// 00875165  8b542438             mov edx, dword ptr [esp + 0x38]
// 00875169  895104               mov dword ptr [ecx + 4], edx
// 0087516c  896908               mov dword ptr [ecx + 8], ebp
// 0087516f  89410c               mov dword ptr [ecx + 0xc], eax
// 00875172  8d8c2490000000       lea ecx, [esp + 0x90]
// 00875179  51                   push ecx
// 0087517a  56                   push esi
// 0087517b  8bcb                 mov ecx, ebx
// 0087517d  e80eb00600           call 0x8e0190
// 00875182  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00875186  685416a000           push 0xa01654
// 0087518b  e8709b0000           call 0x87ed00
// 00875190  8b542448             mov edx, dword ptr [esp + 0x48]
// 00875194  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00875198  8bd8                 mov ebx, eax
// 0087519a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087519e  6a02                 push 2
// 008751a0  89442458             mov dword ptr [esp + 0x58], eax
// 008751a4  89542454             mov dword ptr [esp + 0x54], edx
// 008751a8  8b542440             mov edx, dword ptr [esp + 0x40]
// 008751ac  57                   push edi
// 008751ad  8d442468             lea eax, [esp + 0x68]
// 008751b1  894c2460             mov dword ptr [esp + 0x60], ecx
// 008751b5  50                   push eax
// 008751b6  8bcb                 mov ecx, ebx
// 008751b8  89542468             mov dword ptr [esp + 0x68], edx
// 008751bc  33ed                 xor ebp, ebp
// 008751be  e8fdb60600           call 0x8e08c0
// 008751c3  83ec10               sub esp, 0x10
// 008751c6  8bcc                 mov ecx, esp
// 008751c8  8929                 mov dword ptr [ecx], ebp
// 008751ca  ba05000000           mov edx, 5
// 008751cf  895104               mov dword ptr [ecx + 4], edx
// 008751d2  33d2                 xor edx, edx
// 008751d4  895108               mov dword ptr [ecx + 8], edx
// 008751d7  83ec10               sub esp, 0x10
// 008751da  ba03000000           mov edx, 3
// 008751df  89510c               mov dword ptr [ecx + 0xc], edx
// 008751e2  8b10                 mov edx, dword ptr [eax]
// 008751e4  8bcc                 mov ecx, esp
// 008751e6  8911                 mov dword ptr [ecx], edx
// 008751e8  8b5004               mov edx, dword ptr [eax + 4]
// 008751eb  895104               mov dword ptr [ecx + 4], edx
// 008751ee  8b5008               mov edx, dword ptr [eax + 8]
// 008751f1  8b400c               mov eax, dword ptr [eax + 0xc]
// 008751f4  895108               mov dword ptr [ecx + 8], edx
// 008751f7  89410c               mov dword ptr [ecx + 0xc], eax
// 008751fa  8d4c2470             lea ecx, [esp + 0x70]
// 008751fe  51                   push ecx
// 008751ff  56                   push esi
// 00875200  8bcb                 mov ecx, ebx
// 00875202  e889af0600           call 0x8e0190
// 00875207  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087520b  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00875212  eb15                 jmp 0x875229
// 00875214  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 0087521b  6a00                 push 0
// 0087521d  8d542434             lea edx, [esp + 0x34]
// 00875221  52                   push edx
// 00875222  8bce                 mov ecx, esi
// 00875224  e8d5f3f7ff           call 0x7f45fe
// 00875229  8bcf                 mov ecx, edi
// 0087522b  e8f0030200           call 0x895620
// 00875230  85c0                 test eax, eax
// 00875232  0f8509010000         jne 0x875341
// 00875238  39874c020000         cmp dword ptr [edi + 0x24c], eax
// 0087523e  0f84fd000000         je 0x875341
// 00875244  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 0087524a  50                   push eax
// 0087524b  e88010fdff           call 0x8462d0
// 00875250  85c0                 test eax, eax
// 00875252  0f8ee9000000         jle 0x875341
// 00875258  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 0087525e  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 00875264  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 0087526a  89442414             mov dword ptr [esp + 0x14], eax
// 0087526e  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 00875274  89442420             mov dword ptr [esp + 0x20], eax
// 00875278  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0087527e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00875282  8954241c             mov dword ptr [esp + 0x1c], edx
// 00875286  8b5840               mov ebx, dword ptr [eax + 0x40]
// 00875289  8bcf                 mov ecx, edi
// 0087528b  e870fb0100           call 0x894e00
// 00875290  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00875294  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00875298  03c3                 add eax, ebx
// 0087529a  8944245c             mov dword ptr [esp + 0x5c], eax
// 0087529e  8d442414             lea eax, [esp + 0x14]
// 008752a2  50                   push eax
// 008752a3  83c1f1               add ecx, -0xf
// 008752a6  57                   push edi
// 008752a7  894c2458             mov dword ptr [esp + 0x58], ecx
// 008752ab  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008752af  89542460             mov dword ptr [esp + 0x60], edx
// 008752b3  e898caffff           call 0x871d50
// 008752b8  83c408               add esp, 8
// 008752bb  85c0                 test eax, eax
// 008752bd  b86416a000           mov eax, 0xa01664
// 008752c2  7505                 jne 0x8752c9
// 008752c4  b83c16a000           mov eax, 0xa0163c
// 008752c9  50                   push eax
// 008752ca  8bcd                 mov ecx, ebp
// 008752cc  e82f9a0000           call 0x87ed00
// 008752d1  8bd8                 mov ebx, eax
// 008752d3  85db                 test ebx, ebx
// 008752d5  746a                 je 0x875341
// 008752d7  6a01                 push 1
// 008752d9  6a00                 push 0
// 008752db  8d4c2478             lea ecx, [esp + 0x78]
// 008752df  51                   push ecx
// 008752e0  8bcb                 mov ecx, ebx
// 008752e2  c7432c01000000       mov dword ptr [ebx + 0x2c], 1
// 008752e9  c744247410000000     mov dword ptr [esp + 0x74], 0x10
// 008752f1  e8cab50600           call 0x8e08c0
// 008752f6  83ec10               sub esp, 0x10
// 008752f9  8bcc                 mov ecx, esp
// 008752fb  ba10000000           mov edx, 0x10
// 00875300  8911                 mov dword ptr [ecx], edx
// 00875302  ba03000000           mov edx, 3
// 00875307  895104               mov dword ptr [ecx + 4], edx
// 0087530a  8b542478             mov edx, dword ptr [esp + 0x78]
// 0087530e  895108               mov dword ptr [ecx + 8], edx
// 00875311  83ec10               sub esp, 0x10
// 00875314  ba03000000           mov edx, 3
// 00875319  89510c               mov dword ptr [ecx + 0xc], edx
// 0087531c  8b10                 mov edx, dword ptr [eax]
// 0087531e  8bcc                 mov ecx, esp
// 00875320  8911                 mov dword ptr [ecx], edx
// 00875322  8b5004               mov edx, dword ptr [eax + 4]
// 00875325  895104               mov dword ptr [ecx + 4], edx
// 00875328  8b5008               mov edx, dword ptr [eax + 8]
// 0087532b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087532e  895108               mov dword ptr [ecx + 8], edx
// 00875331  89410c               mov dword ptr [ecx + 0xc], eax
// 00875334  8d4c2470             lea ecx, [esp + 0x70]
// 00875338  51                   push ecx
// 00875339  56                   push esi
// 0087533a  8bcb                 mov ecx, ebx
// 0087533c  e84fae0600           call 0x8e0190
// 00875341  83bf7402000000       cmp dword ptr [edi + 0x274], 0
// 00875348  7567                 jne 0x8753b1
// 0087534a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087534e  52                   push edx
// 0087534f  8bcd                 mov ecx, ebp
// 00875351  e8bab30000           call 0x880710
// 00875356  8944242c             mov dword ptr [esp + 0x2c], eax
// 0087535a  85c0                 test eax, eax
// 0087535c  7453                 je 0x8753b1
// 0087535e  6a32                 push 0x32
// 00875360  ff15dccb9800         call dword ptr [0x98cbdc]
// 00875366  6a31                 push 0x31
// 00875368  8bd8                 mov ebx, eax
// 0087536a  ff15dccb9800         call dword ptr [0x98cbdc]
// 00875370  8bc8                 mov ecx, eax
// 00875372  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00875376  2bc3                 sub eax, ebx
// 00875378  2b442434             sub eax, dword ptr [esp + 0x34]
// 0087537c  99                   cdq 
// 0087537d  2bc2                 sub eax, edx
// 0087537f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00875383  83c20a               add edx, 0xa
// 00875386  d1f8                 sar eax, 1
// 00875388  89542440             mov dword ptr [esp + 0x40], edx
// 0087538c  85f6                 test esi, esi
// 0087538e  7504                 jne 0x875394
// 00875390  33d2                 xor edx, edx
// 00875392  eb03                 jmp 0x875397
// 00875394  8b5604               mov edx, dword ptr [esi + 4]
// 00875397  6a03                 push 3
// 00875399  6a00                 push 0
// 0087539b  6a00                 push 0
// 0087539d  53                   push ebx
// 0087539e  51                   push ecx
// 0087539f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008753a3  51                   push ecx
// 008753a4  50                   push eax
// 008753a5  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008753a9  50                   push eax
// 008753aa  52                   push edx
// 008753ab  ff1514cb9800         call dword ptr [0x98cb14]
// 008753b1  8b8f0c020000         mov ecx, dword ptr [edi + 0x20c]
// 008753b7  8b9f84020000         mov ebx, dword ptr [edi + 0x284]
// 008753bd  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 008753c3  8b8714020000         mov eax, dword ptr [edi + 0x214]
// 008753c9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008753cd  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 008753d3  894c2420             mov dword ptr [esp + 0x20], ecx
// 008753d7  8bcb                 mov ecx, ebx
// 008753d9  89542418             mov dword ptr [esp + 0x18], edx
// 008753dd  8944241c             mov dword ptr [esp + 0x1c], eax
// 008753e1  e84a5ef3ff           call 0x7ab230
// 008753e6  85c0                 test eax, eax
// 008753e8  7410                 je 0x8753fa
// 008753ea  8b5500               mov edx, dword ptr [ebp]
// 008753ed  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008753f3  53                   push ebx
// 008753f4  57                   push edi
// 008753f5  56                   push esi
// 008753f6  8bcd                 mov ecx, ebp
// 008753f8  ffd0                 call eax
// 008753fa  8d8db4050000         lea ecx, [ebp + 0x5b4]
// 00875400  51                   push ecx
// 00875401  56                   push esi
// 00875402  8d8c2490000000       lea ecx, [esp + 0x90]
// 00875409  e85262fdff           call 0x84b660
// 0087540e  8d4c2424             lea ecx, [esp + 0x24]
// 00875412  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 0087541d  ff1574de9800         call dword ptr [0x98de74]
// 00875423  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00875427  8d542424             lea edx, [esp + 0x24]
// 0087542b  52                   push edx
// 0087542c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00875434  e80feaf7ff           call 0x7f3e48
// 00875439  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087543d  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00875441  8d442440             lea eax, [esp + 0x40]
// 00875445  50                   push eax
// 00875446  8d4c2428             lea ecx, [esp + 0x28]
// 0087544a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00875450  50                   push eax
// 00875451  8d4c242c             lea ecx, [esp + 0x2c]
// 00875455  ff1580de9800         call dword ptr [0x98de80]
// 0087545b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087545e  50                   push eax
// 0087545f  51                   push ecx
// 00875460  ff156cb19800         call dword ptr [0x98b16c]
// 00875466  8bc3                 mov eax, ebx
// 00875468  2b442440             sub eax, dword ptr [esp + 0x40]
// 0087546c  99                   cdq 
// 0087546d  2bc2                 sub eax, edx
// 0087546f  d1f8                 sar eax, 1
// 00875471  7904                 jns 0x875477
// 00875473  33c0                 xor eax, eax
// 00875475  eb36                 jmp 0x8754ad
// 00875477  8d942480000000       lea edx, [esp + 0x80]
// 0087547e  52                   push edx
// 0087547f  8d4c2428             lea ecx, [esp + 0x28]
// 00875483  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00875489  50                   push eax
// 0087548a  8d4c242c             lea ecx, [esp + 0x2c]
// 0087548e  ff1580de9800         call dword ptr [0x98de80]
// 00875494  50                   push eax
// 00875495  8b4608               mov eax, dword ptr [esi + 8]
// 00875498  50                   push eax
// 00875499  ff156cb19800         call dword ptr [0x98b16c]
// 0087549f  8bc3                 mov eax, ebx
// 008754a1  2b842480000000       sub eax, dword ptr [esp + 0x80]
// 008754a8  99                   cdq 
// 008754a9  2bc2                 sub eax, edx
// 008754ab  d1f8                 sar eax, 1
// 008754ad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008754b1  01442414             add dword ptr [esp + 0x14], eax
// 008754b5  e8b80f0b00           call 0x926472
// 008754ba  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008754be  a900000001           test eax, 0x1000000
// 008754c3  7410                 je 0x8754d5
// 008754c5  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 008754cb  8b4040               mov eax, dword ptr [eax + 0x40]
// 008754ce  99                   cdq 
// 008754cf  2bc2                 sub eax, edx
// 008754d1  d1f8                 sar eax, 1
// 008754d3  03d8                 add ebx, eax
// 008754d5  8bcf                 mov ecx, edi
// 008754d7  e8e4fe0100           call 0x8953c0
// 008754dc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008754e0  85c0                 test eax, eax
// 008754e2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008754e9  50                   push eax
// 008754ea  51                   push ecx
// 008754eb  752c                 jne 0x875519
// 008754ed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008754f1  8b5500               mov edx, dword ptr [ebp]
// 008754f4  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 008754fa  83ec10               sub esp, 0x10
// 008754fd  8bc4                 mov eax, esp
// 008754ff  8908                 mov dword ptr [eax], ecx
// 00875501  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00875505  895804               mov dword ptr [eax + 4], ebx
// 00875508  894808               mov dword ptr [eax + 8], ecx
// 0087550b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087550f  89480c               mov dword ptr [eax + 0xc], ecx
// 00875512  56                   push esi
// 00875513  8bcd                 mov ecx, ebp
// 00875515  ffd2                 call edx
// 00875517  eb36                 jmp 0x87554f
// 00875519  51                   push ecx
// 0087551a  8d542430             lea edx, [esp + 0x30]
// 0087551e  8bcc                 mov ecx, esp
// 00875520  8964244c             mov dword ptr [esp + 0x4c], esp
// 00875524  52                   push edx
// 00875525  ff1594de9800         call dword ptr [0x98de94]
// 0087552b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087552f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00875533  83ec10               sub esp, 0x10
// 00875536  8bc4                 mov eax, esp
// 00875538  8908                 mov dword ptr [eax], ecx
// 0087553a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0087553e  895804               mov dword ptr [eax + 4], ebx
// 00875541  895008               mov dword ptr [eax + 8], edx
// 00875544  89480c               mov dword ptr [eax + 0xc], ecx
// 00875547  56                   push esi
// 00875548  8bcd                 mov ecx, ebp
// 0087554a  e8b1f5ffff           call 0x874b00
// 0087554f  8d4c2424             lea ecx, [esp + 0x24]
// 00875553  ff15c0de9800         call dword ptr [0x98dec0]
// 00875559  8d8c2488000000       lea ecx, [esp + 0x88]
// 00875560  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 0087556b  e87061fdff           call 0x84b6e0
// 00875570  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00875577  64890d00000000       mov dword ptr fs:[0], ecx
// 0087557e  59                   pop ecx
// 0087557f  5f                   pop edi
// 00875580  5e                   pop esi
// 00875581  5d                   pop ebp
// 00875582  5b                   pop ebx
// 00875583  81c490000000         add esp, 0x90
// 00875589  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameCaption@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp