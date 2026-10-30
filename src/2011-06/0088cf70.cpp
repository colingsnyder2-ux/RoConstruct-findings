// roc 2011-06 0088cf70  unit: CXTPRibbonTheme  size: 1500 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088cf70
//
// 0088cf70  6aff                 push -1
// 0088cf72  680191a000           push 0xa09101
// 0088cf77  64a100000000         mov eax, dword ptr fs:[0]
// 0088cf7d  50                   push eax
// 0088cf7e  81ec84000000         sub esp, 0x84
// 0088cf84  53                   push ebx
// 0088cf85  55                   push ebp
// 0088cf86  56                   push esi
// 0088cf87  57                   push edi
// 0088cf88  a12058c900           mov eax, dword ptr [0xc95820]
// 0088cf8d  33c4                 xor eax, esp
// 0088cf8f  50                   push eax
// 0088cf90  8d842498000000       lea eax, [esp + 0x98]
// 0088cf97  64a300000000         mov dword ptr fs:[0], eax
// 0088cf9d  8be9                 mov ebp, ecx
// 0088cf9f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0088cfa3  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 0088cfaa  8bcf                 mov ecx, edi
// 0088cfac  e8bf06f9ff           call 0x81d670
// 0088cfb1  8b8f00020000         mov ecx, dword ptr [edi + 0x200]
// 0088cfb7  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 0088cfbd  89442428             mov dword ptr [esp + 0x28], eax
// 0088cfc1  8b87fc010000         mov eax, dword ptr [edi + 0x1fc]
// 0088cfc7  89442430             mov dword ptr [esp + 0x30], eax
// 0088cfcb  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 0088cfd1  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088cfd5  8bcf                 mov ecx, edi
// 0088cfd7  89542438             mov dword ptr [esp + 0x38], edx
// 0088cfdb  8944243c             mov dword ptr [esp + 0x3c], eax
// 0088cfdf  e8ac960100           call 0x8a6690
// 0088cfe4  85c0                 test eax, eax
// 0088cfe6  0f85e8010000         jne 0x88d1d4
// 0088cfec  68f009ad00           push 0xad09f0
// 0088cff1  8bcd                 mov ecx, ebp
// 0088cff3  e898220000           call 0x88f290
// 0088cff8  8bd8                 mov ebx, eax
// 0088cffa  85db                 test ebx, ebx
// 0088cffc  0f842e050000         je 0x88d530
// 0088d002  33c9                 xor ecx, ecx
// 0088d004  398c24b0000000       cmp dword ptr [esp + 0xb0], ecx
// 0088d00b  6a02                 push 2
// 0088d00d  0f94c1               sete cl
// 0088d010  8d542418             lea edx, [esp + 0x18]
// 0088d014  8bf9                 mov edi, ecx
// 0088d016  57                   push edi
// 0088d017  52                   push edx
// 0088d018  8bcb                 mov ecx, ebx
// 0088d01a  e8f1060600           call 0x8ed710
// 0088d01f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088d023  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088d027  8b742430             mov esi, dword ptr [esp + 0x30]
// 0088d02b  8bc1                 mov eax, ecx
// 0088d02d  2bc2                 sub eax, edx
// 0088d02f  03c6                 add eax, esi
// 0088d031  89442448             mov dword ptr [esp + 0x48], eax
// 0088d035  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088d039  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088d03d  33c0                 xor eax, eax
// 0088d03f  68ff00ff00           push 0xff00ff
// 0088d044  89442464             mov dword ptr [esp + 0x64], eax
// 0088d048  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088d04c  8d442464             lea eax, [esp + 0x64]
// 0088d050  50                   push eax
// 0088d051  83ec10               sub esp, 0x10
// 0088d054  8bc4                 mov eax, esp
// 0088d056  8910                 mov dword ptr [eax], edx
// 0088d058  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088d05c  89742458             mov dword ptr [esp + 0x58], esi
// 0088d060  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0088d064  895004               mov dword ptr [eax + 4], edx
// 0088d067  894808               mov dword ptr [eax + 8], ecx
// 0088d06a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088d06e  8d542458             lea edx, [esp + 0x58]
// 0088d072  8974245c             mov dword ptr [esp + 0x5c], esi
// 0088d076  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 0088d07d  52                   push edx
// 0088d07e  89480c               mov dword ptr [eax + 0xc], ecx
// 0088d081  56                   push esi
// 0088d082  8bcb                 mov ecx, ebx
// 0088d084  c784248400000005000000 mov dword ptr [esp + 0x84], 5
// 0088d08f  c784248c00000003000000 mov dword ptr [esp + 0x8c], 3
// 0088d09a  e8b10b0600           call 0x8edc50
// 0088d09f  68e009ad00           push 0xad09e0
// 0088d0a4  8bcd                 mov ecx, ebp
// 0088d0a6  e8e5210000           call 0x88f290
// 0088d0ab  6a02                 push 2
// 0088d0ad  8bd8                 mov ebx, eax
// 0088d0af  57                   push edi
// 0088d0b0  8d442468             lea eax, [esp + 0x68]
// 0088d0b4  50                   push eax
// 0088d0b5  8bcb                 mov ecx, ebx
// 0088d0b7  e854060600           call 0x8ed710
// 0088d0bc  8b10                 mov edx, dword ptr [eax]
// 0088d0be  89542414             mov dword ptr [esp + 0x14], edx
// 0088d0c2  8b4804               mov ecx, dword ptr [eax + 4]
// 0088d0c5  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088d0c9  8b6808               mov ebp, dword ptr [eax + 8]
// 0088d0cc  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0088d0d0  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088d0d3  89442420             mov dword ptr [esp + 0x20], eax
// 0088d0d7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088d0db  8bca                 mov ecx, edx
// 0088d0dd  2bcd                 sub ecx, ebp
// 0088d0df  03c8                 add ecx, eax
// 0088d0e1  89442478             mov dword ptr [esp + 0x78], eax
// 0088d0e5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088d0e9  894c2470             mov dword ptr [esp + 0x70], ecx
// 0088d0ed  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088d0f1  8944247c             mov dword ptr [esp + 0x7c], eax
// 0088d0f5  33c0                 xor eax, eax
// 0088d0f7  83ec10               sub esp, 0x10
// 0088d0fa  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0088d101  8bcc                 mov ecx, esp
// 0088d103  8901                 mov dword ptr [ecx], eax
// 0088d105  b805000000           mov eax, 5
// 0088d10a  894104               mov dword ptr [ecx + 4], eax
// 0088d10d  33c0                 xor eax, eax
// 0088d10f  894108               mov dword ptr [ecx + 8], eax
// 0088d112  b803000000           mov eax, 3
// 0088d117  89410c               mov dword ptr [ecx + 0xc], eax
// 0088d11a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088d11e  83ec10               sub esp, 0x10
// 0088d121  8bcc                 mov ecx, esp
// 0088d123  8911                 mov dword ptr [ecx], edx
// 0088d125  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088d129  895104               mov dword ptr [ecx + 4], edx
// 0088d12c  896908               mov dword ptr [ecx + 8], ebp
// 0088d12f  89410c               mov dword ptr [ecx + 0xc], eax
// 0088d132  8d8c2490000000       lea ecx, [esp + 0x90]
// 0088d139  51                   push ecx
// 0088d13a  56                   push esi
// 0088d13b  8bcb                 mov ecx, ebx
// 0088d13d  e89efe0500           call 0x8ecfe0
// 0088d142  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088d146  68b409ad00           push 0xad09b4
// 0088d14b  e840210000           call 0x88f290
// 0088d150  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088d154  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0088d158  8bd8                 mov ebx, eax
// 0088d15a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088d15e  6a02                 push 2
// 0088d160  89442458             mov dword ptr [esp + 0x58], eax
// 0088d164  89542454             mov dword ptr [esp + 0x54], edx
// 0088d168  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088d16c  57                   push edi
// 0088d16d  8d442468             lea eax, [esp + 0x68]
// 0088d171  894c2460             mov dword ptr [esp + 0x60], ecx
// 0088d175  50                   push eax
// 0088d176  8bcb                 mov ecx, ebx
// 0088d178  89542468             mov dword ptr [esp + 0x68], edx
// 0088d17c  33ed                 xor ebp, ebp
// 0088d17e  e88d050600           call 0x8ed710
// 0088d183  83ec10               sub esp, 0x10
// 0088d186  8bcc                 mov ecx, esp
// 0088d188  8929                 mov dword ptr [ecx], ebp
// 0088d18a  ba05000000           mov edx, 5
// 0088d18f  895104               mov dword ptr [ecx + 4], edx
// 0088d192  33d2                 xor edx, edx
// 0088d194  895108               mov dword ptr [ecx + 8], edx
// 0088d197  83ec10               sub esp, 0x10
// 0088d19a  ba03000000           mov edx, 3
// 0088d19f  89510c               mov dword ptr [ecx + 0xc], edx
// 0088d1a2  8b10                 mov edx, dword ptr [eax]
// 0088d1a4  8bcc                 mov ecx, esp
// 0088d1a6  8911                 mov dword ptr [ecx], edx
// 0088d1a8  8b5004               mov edx, dword ptr [eax + 4]
// 0088d1ab  895104               mov dword ptr [ecx + 4], edx
// 0088d1ae  8b5008               mov edx, dword ptr [eax + 8]
// 0088d1b1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088d1b4  895108               mov dword ptr [ecx + 8], edx
// 0088d1b7  89410c               mov dword ptr [ecx + 0xc], eax
// 0088d1ba  8d4c2470             lea ecx, [esp + 0x70]
// 0088d1be  51                   push ecx
// 0088d1bf  56                   push esi
// 0088d1c0  8bcb                 mov ecx, ebx
// 0088d1c2  e819fe0500           call 0x8ecfe0
// 0088d1c7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088d1cb  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 0088d1d2  eb15                 jmp 0x88d1e9
// 0088d1d4  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 0088d1db  6a00                 push 0
// 0088d1dd  8d542434             lea edx, [esp + 0x34]
// 0088d1e1  52                   push edx
// 0088d1e2  8bce                 mov ecx, esi
// 0088d1e4  e837dcf7ff           call 0x80ae20
// 0088d1e9  8bcf                 mov ecx, edi
// 0088d1eb  e800970100           call 0x8a68f0
// 0088d1f0  85c0                 test eax, eax
// 0088d1f2  0f8509010000         jne 0x88d301
// 0088d1f8  39874c020000         cmp dword ptr [edi + 0x24c], eax
// 0088d1fe  0f84fd000000         je 0x88d301
// 0088d204  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 0088d20a  50                   push eax
// 0088d20b  e8a0aafcff           call 0x857cb0
// 0088d210  85c0                 test eax, eax
// 0088d212  0f8ee9000000         jle 0x88d301
// 0088d218  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 0088d21e  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 0088d224  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 0088d22a  89442414             mov dword ptr [esp + 0x14], eax
// 0088d22e  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 0088d234  89442420             mov dword ptr [esp + 0x20], eax
// 0088d238  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0088d23e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088d242  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088d246  8b5840               mov ebx, dword ptr [eax + 0x40]
// 0088d249  8bcf                 mov ecx, edi
// 0088d24b  e8808e0100           call 0x8a60d0
// 0088d250  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088d254  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088d258  03c3                 add eax, ebx
// 0088d25a  8944245c             mov dword ptr [esp + 0x5c], eax
// 0088d25e  8d442414             lea eax, [esp + 0x14]
// 0088d262  50                   push eax
// 0088d263  83c1f1               add ecx, -0xf
// 0088d266  57                   push edi
// 0088d267  894c2458             mov dword ptr [esp + 0x58], ecx
// 0088d26b  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0088d26f  89542460             mov dword ptr [esp + 0x60], edx
// 0088d273  e898caffff           call 0x889d10
// 0088d278  83c408               add esp, 8
// 0088d27b  85c0                 test eax, eax
// 0088d27d  b8c409ad00           mov eax, 0xad09c4
// 0088d282  7505                 jne 0x88d289
// 0088d284  b89c09ad00           mov eax, 0xad099c
// 0088d289  50                   push eax
// 0088d28a  8bcd                 mov ecx, ebp
// 0088d28c  e8ff1f0000           call 0x88f290
// 0088d291  8bd8                 mov ebx, eax
// 0088d293  85db                 test ebx, ebx
// 0088d295  746a                 je 0x88d301
// 0088d297  6a01                 push 1
// 0088d299  6a00                 push 0
// 0088d29b  8d4c2478             lea ecx, [esp + 0x78]
// 0088d29f  51                   push ecx
// 0088d2a0  8bcb                 mov ecx, ebx
// 0088d2a2  c7432c01000000       mov dword ptr [ebx + 0x2c], 1
// 0088d2a9  c744247410000000     mov dword ptr [esp + 0x74], 0x10
// 0088d2b1  e85a040600           call 0x8ed710
// 0088d2b6  83ec10               sub esp, 0x10
// 0088d2b9  8bcc                 mov ecx, esp
// 0088d2bb  ba10000000           mov edx, 0x10
// 0088d2c0  8911                 mov dword ptr [ecx], edx
// 0088d2c2  ba03000000           mov edx, 3
// 0088d2c7  895104               mov dword ptr [ecx + 4], edx
// 0088d2ca  8b542478             mov edx, dword ptr [esp + 0x78]
// 0088d2ce  895108               mov dword ptr [ecx + 8], edx
// 0088d2d1  83ec10               sub esp, 0x10
// 0088d2d4  ba03000000           mov edx, 3
// 0088d2d9  89510c               mov dword ptr [ecx + 0xc], edx
// 0088d2dc  8b10                 mov edx, dword ptr [eax]
// 0088d2de  8bcc                 mov ecx, esp
// 0088d2e0  8911                 mov dword ptr [ecx], edx
// 0088d2e2  8b5004               mov edx, dword ptr [eax + 4]
// 0088d2e5  895104               mov dword ptr [ecx + 4], edx
// 0088d2e8  8b5008               mov edx, dword ptr [eax + 8]
// 0088d2eb  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088d2ee  895108               mov dword ptr [ecx + 8], edx
// 0088d2f1  89410c               mov dword ptr [ecx + 0xc], eax
// 0088d2f4  8d4c2470             lea ecx, [esp + 0x70]
// 0088d2f8  51                   push ecx
// 0088d2f9  56                   push esi
// 0088d2fa  8bcb                 mov ecx, ebx
// 0088d2fc  e8dffc0500           call 0x8ecfe0
// 0088d301  83bf7402000000       cmp dword ptr [edi + 0x274], 0
// 0088d308  7567                 jne 0x88d371
// 0088d30a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088d30e  52                   push edx
// 0088d30f  8bcd                 mov ecx, ebp
// 0088d311  e88a390000           call 0x890ca0
// 0088d316  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088d31a  85c0                 test eax, eax
// 0088d31c  7453                 je 0x88d371
// 0088d31e  6a32                 push 0x32
// 0088d320  ff15e019a400         call dword ptr [0xa419e0]
// 0088d326  6a31                 push 0x31
// 0088d328  8bd8                 mov ebx, eax
// 0088d32a  ff15e019a400         call dword ptr [0xa419e0]
// 0088d330  8bc8                 mov ecx, eax
// 0088d332  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088d336  2bc3                 sub eax, ebx
// 0088d338  2b442434             sub eax, dword ptr [esp + 0x34]
// 0088d33c  99                   cdq 
// 0088d33d  2bc2                 sub eax, edx
// 0088d33f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088d343  83c20a               add edx, 0xa
// 0088d346  d1f8                 sar eax, 1
// 0088d348  89542440             mov dword ptr [esp + 0x40], edx
// 0088d34c  85f6                 test esi, esi
// 0088d34e  7504                 jne 0x88d354
// 0088d350  33d2                 xor edx, edx
// 0088d352  eb03                 jmp 0x88d357
// 0088d354  8b5604               mov edx, dword ptr [esi + 4]
// 0088d357  6a03                 push 3
// 0088d359  6a00                 push 0
// 0088d35b  6a00                 push 0
// 0088d35d  53                   push ebx
// 0088d35e  51                   push ecx
// 0088d35f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088d363  51                   push ecx
// 0088d364  50                   push eax
// 0088d365  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0088d369  50                   push eax
// 0088d36a  52                   push edx
// 0088d36b  ff15bc1aa400         call dword ptr [0xa41abc]
// 0088d371  8b8f0c020000         mov ecx, dword ptr [edi + 0x20c]
// 0088d377  8b9f84020000         mov ebx, dword ptr [edi + 0x284]
// 0088d37d  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 0088d383  8b8714020000         mov eax, dword ptr [edi + 0x214]
// 0088d389  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088d38d  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 0088d393  894c2420             mov dword ptr [esp + 0x20], ecx
// 0088d397  8bcb                 mov ecx, ebx
// 0088d399  89542418             mov dword ptr [esp + 0x18], edx
// 0088d39d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088d3a1  e81a1d0500           call 0x8df0c0
// 0088d3a6  85c0                 test eax, eax
// 0088d3a8  7410                 je 0x88d3ba
// 0088d3aa  8b5500               mov edx, dword ptr [ebp]
// 0088d3ad  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0088d3b3  53                   push ebx
// 0088d3b4  57                   push edi
// 0088d3b5  56                   push esi
// 0088d3b6  8bcd                 mov ecx, ebp
// 0088d3b8  ffd0                 call eax
// 0088d3ba  8d8db4050000         lea ecx, [ebp + 0x5b4]
// 0088d3c0  51                   push ecx
// 0088d3c1  56                   push esi
// 0088d3c2  8d8c2490000000       lea ecx, [esp + 0x90]
// 0088d3c9  e852fdfcff           call 0x85d120
// 0088d3ce  8d4c2424             lea ecx, [esp + 0x24]
// 0088d3d2  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 0088d3dd  ff15b42da400         call dword ptr [0xa42db4]
// 0088d3e3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088d3e7  8d542424             lea edx, [esp + 0x24]
// 0088d3eb  52                   push edx
// 0088d3ec  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 0088d3f4  e84dd2f7ff           call 0x80a646
// 0088d3f9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0088d3fd  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0088d401  8d442440             lea eax, [esp + 0x40]
// 0088d405  50                   push eax
// 0088d406  8d4c2428             lea ecx, [esp + 0x28]
// 0088d40a  ff15a826a400         call dword ptr [0xa426a8]
// 0088d410  50                   push eax
// 0088d411  8d4c242c             lea ecx, [esp + 0x2c]
// 0088d415  ff15c82da400         call dword ptr [0xa42dc8]
// 0088d41b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088d41e  50                   push eax
// 0088d41f  51                   push ecx
// 0088d420  ff153801a400         call dword ptr [0xa40138]
// 0088d426  8bc3                 mov eax, ebx
// 0088d428  2b442440             sub eax, dword ptr [esp + 0x40]
// 0088d42c  99                   cdq 
// 0088d42d  2bc2                 sub eax, edx
// 0088d42f  d1f8                 sar eax, 1
// 0088d431  7904                 jns 0x88d437
// 0088d433  33c0                 xor eax, eax
// 0088d435  eb36                 jmp 0x88d46d
// 0088d437  8d942480000000       lea edx, [esp + 0x80]
// 0088d43e  52                   push edx
// 0088d43f  8d4c2428             lea ecx, [esp + 0x28]
// 0088d443  ff15a826a400         call dword ptr [0xa426a8]
// 0088d449  50                   push eax
// 0088d44a  8d4c242c             lea ecx, [esp + 0x2c]
// 0088d44e  ff15c82da400         call dword ptr [0xa42dc8]
// 0088d454  50                   push eax
// 0088d455  8b4608               mov eax, dword ptr [esi + 8]
// 0088d458  50                   push eax
// 0088d459  ff153801a400         call dword ptr [0xa40138]
// 0088d45f  8bc3                 mov eax, ebx
// 0088d461  2b842480000000       sub eax, dword ptr [esp + 0x80]
// 0088d468  99                   cdq 
// 0088d469  2bc2                 sub eax, edx
// 0088d46b  d1f8                 sar eax, 1
// 0088d46d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088d471  01442414             add dword ptr [esp + 0x14], eax
// 0088d475  e89ef11300           call 0x9cc618
// 0088d47a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0088d47e  a900000001           test eax, 0x1000000
// 0088d483  7410                 je 0x88d495
// 0088d485  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0088d48b  8b4040               mov eax, dword ptr [eax + 0x40]
// 0088d48e  99                   cdq 
// 0088d48f  2bc2                 sub eax, edx
// 0088d491  d1f8                 sar eax, 1
// 0088d493  03d8                 add ebx, eax
// 0088d495  8bcf                 mov ecx, edi
// 0088d497  e8f4910100           call 0x8a6690
// 0088d49c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088d4a0  85c0                 test eax, eax
// 0088d4a2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0088d4a9  50                   push eax
// 0088d4aa  51                   push ecx
// 0088d4ab  752c                 jne 0x88d4d9
// 0088d4ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088d4b1  8b5500               mov edx, dword ptr [ebp]
// 0088d4b4  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 0088d4ba  83ec10               sub esp, 0x10
// 0088d4bd  8bc4                 mov eax, esp
// 0088d4bf  8908                 mov dword ptr [eax], ecx
// 0088d4c1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088d4c5  895804               mov dword ptr [eax + 4], ebx
// 0088d4c8  894808               mov dword ptr [eax + 8], ecx
// 0088d4cb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088d4cf  89480c               mov dword ptr [eax + 0xc], ecx
// 0088d4d2  56                   push esi
// 0088d4d3  8bcd                 mov ecx, ebp
// 0088d4d5  ffd2                 call edx
// 0088d4d7  eb36                 jmp 0x88d50f
// 0088d4d9  51                   push ecx
// 0088d4da  8d542430             lea edx, [esp + 0x30]
// 0088d4de  8bcc                 mov ecx, esp
// 0088d4e0  8964244c             mov dword ptr [esp + 0x4c], esp
// 0088d4e4  52                   push edx
// 0088d4e5  ff15e42da400         call dword ptr [0xa42de4]
// 0088d4eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088d4ef  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088d4f3  83ec10               sub esp, 0x10
// 0088d4f6  8bc4                 mov eax, esp
// 0088d4f8  8908                 mov dword ptr [eax], ecx
// 0088d4fa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088d4fe  895804               mov dword ptr [eax + 4], ebx
// 0088d501  895008               mov dword ptr [eax + 8], edx
// 0088d504  89480c               mov dword ptr [eax + 0xc], ecx
// 0088d507  56                   push esi
// 0088d508  8bcd                 mov ecx, ebp
// 0088d50a  e8b1f5ffff           call 0x88cac0
// 0088d50f  8d4c2424             lea ecx, [esp + 0x24]
// 0088d513  ff15082ea400         call dword ptr [0xa42e08]
// 0088d519  8d8c2488000000       lea ecx, [esp + 0x88]
// 0088d520  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 0088d52b  e870fcfcff           call 0x85d1a0
// 0088d530  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0088d537  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d53e  59                   pop ecx
// 0088d53f  5f                   pop edi
// 0088d540  5e                   pop esi
// 0088d541  5d                   pop ebp
// 0088d542  5b                   pop ebx
// 0088d543  81c490000000         add esp, 0x90
// 0088d549  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameCaption@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp