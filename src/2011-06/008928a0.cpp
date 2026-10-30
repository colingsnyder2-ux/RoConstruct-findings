// roc 2011-06 008928a0  unit: CXTPControlGalleryOffice2007Theme  size: 3974 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008928a0
//
// 008928a0  81ecec000000         sub esp, 0xec
// 008928a6  53                   push ebx
// 008928a7  55                   push ebp
// 008928a8  56                   push esi
// 008928a9  8bb42400010000       mov esi, dword ptr [esp + 0x100]
// 008928b0  57                   push edi
// 008928b1  8bf9                 mov edi, ecx
// 008928b3  8bce                 mov ecx, esi
// 008928b5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008928b9  e8c2180600           call 0x8f4180
// 008928be  83f805               cmp eax, 5
// 008928c1  7422                 je 0x8928e5
// 008928c3  83f806               cmp eax, 6
// 008928c6  741d                 je 0x8928e5
// 008928c8  8b842400010000       mov eax, dword ptr [esp + 0x100]
// 008928cf  56                   push esi
// 008928d0  50                   push eax
// 008928d1  8bcf                 mov ecx, edi
// 008928d3  e8f80affff           call 0x8833d0
// 008928d8  5f                   pop edi
// 008928d9  5e                   pop esi
// 008928da  5d                   pop ebp
// 008928db  5b                   pop ebx
// 008928dc  81c4ec000000         add esp, 0xec
// 008928e2  c20800               ret 8
// 008928e5  33c9                 xor ecx, ecx
// 008928e7  83f805               cmp eax, 5
// 008928ea  8b4660               mov eax, dword ptr [esi + 0x60]
// 008928ed  0f94c1               sete cl
// 008928f0  33db                 xor ebx, ebx
// 008928f2  8be9                 mov ebp, ecx
// 008928f4  896c2410             mov dword ptr [esp + 0x10], ebp
// 008928f8  3bc3                 cmp eax, ebx
// 008928fa  7411                 je 0x89290d
// 008928fc  8b5658               mov edx, dword ptr [esi + 0x58]
// 008928ff  89542420             mov dword ptr [esp + 0x20], edx
// 00892903  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0089290b  eb0f                 jmp 0x89291c
// 0089290d  8b4658               mov eax, dword ptr [esi + 0x58]
// 00892910  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00892918  89442434             mov dword ptr [esp + 0x34], eax
// 0089291c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089291f  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 00892922  85c9                 test ecx, ecx
// 00892924  0f8eef0e0000         jle 0x893819
// 0089292a  8b5608               mov edx, dword ptr [esi + 8]
// 0089292d  2b560c               sub edx, dword ptr [esi + 0xc]
// 00892930  2b5604               sub edx, dword ptr [esi + 4]
// 00892933  42                   inc edx
// 00892934  85d2                 test edx, edx
// 00892936  7e14                 jle 0x89294c
// 00892938  8b06                 mov eax, dword ptr [esi]
// 0089293a  8b5004               mov edx, dword ptr [eax + 4]
// 0089293d  8bce                 mov ecx, esi
// 0089293f  ffd2                 call edx
// 00892941  85c0                 test eax, eax
// 00892943  7407                 je 0x89294c
// 00892945  bf01000000           mov edi, 1
// 0089294a  eb02                 jmp 0x89294e
// 0089294c  33ff                 xor edi, edi
// 0089294e  8b5634               mov edx, dword ptr [esi + 0x34]
// 00892951  8b4638               mov eax, dword ptr [esi + 0x38]
// 00892954  8bca                 mov ecx, edx
// 00892956  2bc8                 sub ecx, eax
// 00892958  2b4628               sub eax, dword ptr [esi + 0x28]
// 0089295b  897c2414             mov dword ptr [esp + 0x14], edi
// 0089295f  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00892966  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 0089296d  3bfb                 cmp edi, ebx
// 0089296f  7405                 je 0x892976
// 00892971  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 00892974  7e0e                 jle 0x892984
// 00892976  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 0089297d  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00892984  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00892988  8b782c               mov edi, dword ptr [eax + 0x2c]
// 0089298b  68b414ad00           push 0xad14b4
// 00892990  8bcf                 mov ecx, edi
// 00892992  897c243c             mov dword ptr [esp + 0x3c], edi
// 00892996  e8f5c8ffff           call 0x88f290
// 0089299b  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 008929a2  3bc3                 cmp eax, ebx
// 008929a4  0f846f0e0000         je 0x893819
// 008929aa  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 008929ad  0f842c070000         je 0x8930df
// 008929b3  b89014ad00           mov eax, 0xad1490
// 008929b8  3beb                 cmp ebp, ebx
// 008929ba  7505                 jne 0x8929c1
// 008929bc  b86c14ad00           mov eax, 0xad146c
// 008929c1  50                   push eax
// 008929c2  8bcf                 mov ecx, edi
// 008929c4  e8c7c8ffff           call 0x88f290
// 008929c9  89442418             mov dword ptr [esp + 0x18], eax
// 008929cd  3bc3                 cmp eax, ebx
// 008929cf  0f84440e0000         je 0x893819
// 008929d5  8b2d681ca400         mov ebp, dword ptr [0xa41c68]
// 008929db  8d5e48               lea ebx, [esi + 0x48]
// 008929de  53                   push ebx
// 008929df  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008929e6  51                   push ecx
// 008929e7  ffd5                 call ebp
// 008929e9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008929ed  6a02                 push 2
// 008929ef  6a00                 push 0
// 008929f1  8d9424d4000000       lea edx, [esp + 0xd4]
// 008929f8  bf01000000           mov edi, 1
// 008929fd  52                   push edx
// 008929fe  897c2438             mov dword ptr [esp + 0x38], edi
// 00892a02  e809ad0500           call 0x8ed710
// 00892a07  83ec10               sub esp, 0x10
// 00892a0a  8bcc                 mov ecx, esp
// 00892a0c  8939                 mov dword ptr [ecx], edi
// 00892a0e  33d2                 xor edx, edx
// 00892a10  895104               mov dword ptr [ecx + 4], edx
// 00892a13  8bd7                 mov edx, edi
// 00892a15  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 00892a1c  895108               mov dword ptr [ecx + 8], edx
// 00892a1f  33d2                 xor edx, edx
// 00892a21  89510c               mov dword ptr [ecx + 0xc], edx
// 00892a24  8b10                 mov edx, dword ptr [eax]
// 00892a26  83ec10               sub esp, 0x10
// 00892a29  8bcc                 mov ecx, esp
// 00892a2b  8911                 mov dword ptr [ecx], edx
// 00892a2d  8b5004               mov edx, dword ptr [eax + 4]
// 00892a30  895104               mov dword ptr [ecx + 4], edx
// 00892a33  8b5008               mov edx, dword ptr [eax + 8]
// 00892a36  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892a39  895108               mov dword ptr [ecx + 8], edx
// 00892a3c  89410c               mov dword ptr [ecx + 0xc], eax
// 00892a3f  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00892a46  51                   push ecx
// 00892a47  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00892a4b  57                   push edi
// 00892a4c  e88fa50500           call 0x8ecfe0
// 00892a51  53                   push ebx
// 00892a52  8d942490000000       lea edx, [esp + 0x90]
// 00892a59  52                   push edx
// 00892a5a  ffd5                 call ebp
// 00892a5c  6a00                 push 0
// 00892a5e  6aff                 push -1
// 00892a60  8d842494000000       lea eax, [esp + 0x94]
// 00892a67  50                   push eax
// 00892a68  ff15e41ba400         call dword ptr [0xa41be4]
// 00892a6e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00892a73  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00892a7a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00892a81  8b5628               mov edx, dword ptr [esi + 0x28]
// 00892a84  894c2450             mov dword ptr [esp + 0x50], ecx
// 00892a88  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00892a8f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00892a93  8944245c             mov dword ptr [esp + 0x5c], eax
// 00892a97  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00892a9a  894c2454             mov dword ptr [esp + 0x54], ecx
// 00892a9e  894c2464             mov dword ptr [esp + 0x64], ecx
// 00892aa2  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00892aa9  89442460             mov dword ptr [esp + 0x60], eax
// 00892aad  89542458             mov dword ptr [esp + 0x58], edx
// 00892ab1  894c2468             mov dword ptr [esp + 0x68], ecx
// 00892ab5  b84414ad00           mov eax, 0xad1444
// 00892aba  7505                 jne 0x892ac1
// 00892abc  b81c14ad00           mov eax, 0xad141c
// 00892ac1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00892ac5  50                   push eax
// 00892ac6  e8c5c7ffff           call 0x88f290
// 00892acb  33db                 xor ebx, ebx
// 00892acd  8944241c             mov dword ptr [esp + 0x1c], eax
// 00892ad1  3bc3                 cmp eax, ebx
// 00892ad3  0f84400d0000         je 0x893819
// 00892ad9  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00892add  7509                 jne 0x892ae8
// 00892adf  895c2410             mov dword ptr [esp + 0x10], ebx
// 00892ae3  e997000000           jmp 0x892b7f
// 00892ae8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00892aec  83f93c               cmp ecx, 0x3c
// 00892aef  750a                 jne 0x892afb
// 00892af1  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00892af9  eb29                 jmp 0x892b24
// 00892afb  8b442434             mov eax, dword ptr [esp + 0x34]
// 00892aff  83f83c               cmp eax, 0x3c
// 00892b02  750a                 jne 0x892b0e
// 00892b04  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00892b0c  eb16                 jmp 0x892b24
// 00892b0e  3bc3                 cmp eax, ebx
// 00892b10  7f0a                 jg 0x892b1c
// 00892b12  3bcb                 cmp ecx, ebx
// 00892b14  7f06                 jg 0x892b1c
// 00892b16  895c2410             mov dword ptr [esp + 0x10], ebx
// 00892b1a  eb63                 jmp 0x892b7f
// 00892b1c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00892b24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00892b28  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00892b2c  6a04                 push 4
// 00892b2e  52                   push edx
// 00892b2f  8d8424d4000000       lea eax, [esp + 0xd4]
// 00892b36  be03000000           mov esi, 3
// 00892b3b  50                   push eax
// 00892b3c  8bee                 mov ebp, esi
// 00892b3e  e8cdab0500           call 0x8ed710
// 00892b43  83ec10               sub esp, 0x10
// 00892b46  8bcc                 mov ecx, esp
// 00892b48  8931                 mov dword ptr [ecx], esi
// 00892b4a  896904               mov dword ptr [ecx + 4], ebp
// 00892b4d  8bd6                 mov edx, esi
// 00892b4f  895108               mov dword ptr [ecx + 8], edx
// 00892b52  89510c               mov dword ptr [ecx + 0xc], edx
// 00892b55  8b10                 mov edx, dword ptr [eax]
// 00892b57  83ec10               sub esp, 0x10
// 00892b5a  8bcc                 mov ecx, esp
// 00892b5c  8911                 mov dword ptr [ecx], edx
// 00892b5e  8b5004               mov edx, dword ptr [eax + 4]
// 00892b61  895104               mov dword ptr [ecx + 4], edx
// 00892b64  8b5008               mov edx, dword ptr [eax + 8]
// 00892b67  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892b6a  895108               mov dword ptr [ecx + 8], edx
// 00892b6d  89410c               mov dword ptr [ecx + 0xc], eax
// 00892b70  8d4c246c             lea ecx, [esp + 0x6c]
// 00892b74  51                   push ecx
// 00892b75  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00892b79  57                   push edi
// 00892b7a  e861a40500           call 0x8ecfe0
// 00892b7f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00892b83  8b442454             mov eax, dword ptr [esp + 0x54]
// 00892b87  8d4410f7             lea eax, [eax + edx - 9]
// 00892b8b  99                   cdq 
// 00892b8c  2bc2                 sub eax, edx
// 00892b8e  8b542450             mov edx, dword ptr [esp + 0x50]
// 00892b92  8bc8                 mov ecx, eax
// 00892b94  8b442458             mov eax, dword ptr [esp + 0x58]
// 00892b98  8d4410f7             lea eax, [eax + edx - 9]
// 00892b9c  be09000000           mov esi, 9
// 00892ba1  99                   cdq 
// 00892ba2  8bee                 mov ebp, esi
// 00892ba4  55                   push ebp
// 00892ba5  2bc2                 sub eax, edx
// 00892ba7  56                   push esi
// 00892ba8  d1f8                 sar eax, 1
// 00892baa  d1f9                 sar ecx, 1
// 00892bac  50                   push eax
// 00892bad  51                   push ecx
// 00892bae  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00892bb5  e886a2bdff           call 0x46ce40
// 00892bba  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00892bbe  7505                 jne 0x892bc5
// 00892bc0  8d46fb               lea eax, [esi - 5]
// 00892bc3  eb0a                 jmp 0x892bcf
// 00892bc5  33c0                 xor eax, eax
// 00892bc7  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00892bcb  0f95c0               setne al
// 00892bce  40                   inc eax
// 00892bcf  50                   push eax
// 00892bd0  33c9                 xor ecx, ecx
// 00892bd2  83ec10               sub esp, 0x10
// 00892bd5  8bc4                 mov eax, esp
// 00892bd7  8908                 mov dword ptr [eax], ecx
// 00892bd9  894804               mov dword ptr [eax + 4], ecx
// 00892bdc  8bce                 mov ecx, esi
// 00892bde  894808               mov dword ptr [eax + 8], ecx
// 00892be1  89480c               mov dword ptr [eax + 0xc], ecx
// 00892be4  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00892beb  51                   push ecx
// 00892bec  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00892bf0  895c2440             mov dword ptr [esp + 0x40], ebx
// 00892bf4  895c2444             mov dword ptr [esp + 0x44], ebx
// 00892bf8  895c2448             mov dword ptr [esp + 0x48], ebx
// 00892bfc  e85ffcffff           call 0x892860
// 00892c01  83c418               add esp, 0x18
// 00892c04  68ff00ff00           push 0xff00ff
// 00892c09  8d542428             lea edx, [esp + 0x28]
// 00892c0d  52                   push edx
// 00892c0e  8b10                 mov edx, dword ptr [eax]
// 00892c10  83ec10               sub esp, 0x10
// 00892c13  8bcc                 mov ecx, esp
// 00892c15  8911                 mov dword ptr [ecx], edx
// 00892c17  8b5004               mov edx, dword ptr [eax + 4]
// 00892c1a  895104               mov dword ptr [ecx + 4], edx
// 00892c1d  8b5008               mov edx, dword ptr [eax + 8]
// 00892c20  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892c23  895108               mov dword ptr [ecx + 8], edx
// 00892c26  89410c               mov dword ptr [ecx + 0xc], eax
// 00892c29  8d8c2404010000       lea ecx, [esp + 0x104]
// 00892c30  51                   push ecx
// 00892c31  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00892c38  57                   push edi
// 00892c39  e812b00500           call 0x8edc50
// 00892c3e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00892c42  7509                 jne 0x892c4d
// 00892c44  895c2410             mov dword ptr [esp + 0x10], ebx
// 00892c48  e99f000000           jmp 0x892cec
// 00892c4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00892c51  83f93d               cmp ecx, 0x3d
// 00892c54  750a                 jne 0x892c60
// 00892c56  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00892c5e  eb29                 jmp 0x892c89
// 00892c60  8b442434             mov eax, dword ptr [esp + 0x34]
// 00892c64  83f83d               cmp eax, 0x3d
// 00892c67  750a                 jne 0x892c73
// 00892c69  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00892c71  eb16                 jmp 0x892c89
// 00892c73  3bc3                 cmp eax, ebx
// 00892c75  7f0a                 jg 0x892c81
// 00892c77  3bcb                 cmp ecx, ebx
// 00892c79  7f06                 jg 0x892c81
// 00892c7b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00892c7f  eb6b                 jmp 0x892cec
// 00892c81  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00892c89  8b542410             mov edx, dword ptr [esp + 0x10]
// 00892c8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00892c91  6a04                 push 4
// 00892c93  bb03000000           mov ebx, 3
// 00892c98  52                   push edx
// 00892c99  8d8424d4000000       lea eax, [esp + 0xd4]
// 00892ca0  50                   push eax
// 00892ca1  8bf3                 mov esi, ebx
// 00892ca3  8beb                 mov ebp, ebx
// 00892ca5  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00892ca9  e862aa0500           call 0x8ed710
// 00892cae  83ec10               sub esp, 0x10
// 00892cb1  8bcc                 mov ecx, esp
// 00892cb3  8931                 mov dword ptr [ecx], esi
// 00892cb5  896904               mov dword ptr [ecx + 4], ebp
// 00892cb8  895908               mov dword ptr [ecx + 8], ebx
// 00892cbb  83ec10               sub esp, 0x10
// 00892cbe  8bd3                 mov edx, ebx
// 00892cc0  89510c               mov dword ptr [ecx + 0xc], edx
// 00892cc3  8b10                 mov edx, dword ptr [eax]
// 00892cc5  8bcc                 mov ecx, esp
// 00892cc7  8911                 mov dword ptr [ecx], edx
// 00892cc9  8b5004               mov edx, dword ptr [eax + 4]
// 00892ccc  895104               mov dword ptr [ecx + 4], edx
// 00892ccf  8b5008               mov edx, dword ptr [eax + 8]
// 00892cd2  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892cd5  895108               mov dword ptr [ecx + 8], edx
// 00892cd8  89410c               mov dword ptr [ecx + 0xc], eax
// 00892cdb  8d4c247c             lea ecx, [esp + 0x7c]
// 00892cdf  51                   push ecx
// 00892ce0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00892ce4  57                   push edi
// 00892ce5  e8f6a20500           call 0x8ecfe0
// 00892cea  33db                 xor ebx, ebx
// 00892cec  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00892cf0  8b442464             mov eax, dword ptr [esp + 0x64]
// 00892cf4  8d4410f7             lea eax, [eax + edx - 9]
// 00892cf8  99                   cdq 
// 00892cf9  2bc2                 sub eax, edx
// 00892cfb  8b542460             mov edx, dword ptr [esp + 0x60]
// 00892cff  8bc8                 mov ecx, eax
// 00892d01  8b442468             mov eax, dword ptr [esp + 0x68]
// 00892d05  8d4410f7             lea eax, [eax + edx - 9]
// 00892d09  be09000000           mov esi, 9
// 00892d0e  99                   cdq 
// 00892d0f  8bee                 mov ebp, esi
// 00892d11  55                   push ebp
// 00892d12  2bc2                 sub eax, edx
// 00892d14  56                   push esi
// 00892d15  d1f8                 sar eax, 1
// 00892d17  d1f9                 sar ecx, 1
// 00892d19  50                   push eax
// 00892d1a  51                   push ecx
// 00892d1b  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00892d22  e819a1bdff           call 0x46ce40
// 00892d27  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00892d2b  7505                 jne 0x892d32
// 00892d2d  8d46ff               lea eax, [esi - 1]
// 00892d30  eb0c                 jmp 0x892d3e
// 00892d32  33c0                 xor eax, eax
// 00892d34  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00892d38  0f95c0               setne al
// 00892d3b  83c005               add eax, 5
// 00892d3e  50                   push eax
// 00892d3f  33c9                 xor ecx, ecx
// 00892d41  83ec10               sub esp, 0x10
// 00892d44  8bc4                 mov eax, esp
// 00892d46  8908                 mov dword ptr [eax], ecx
// 00892d48  894804               mov dword ptr [eax + 4], ecx
// 00892d4b  8bce                 mov ecx, esi
// 00892d4d  894808               mov dword ptr [eax + 8], ecx
// 00892d50  89480c               mov dword ptr [eax + 0xc], ecx
// 00892d53  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00892d5a  51                   push ecx
// 00892d5b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00892d5f  895c2440             mov dword ptr [esp + 0x40], ebx
// 00892d63  895c2444             mov dword ptr [esp + 0x44], ebx
// 00892d67  895c2448             mov dword ptr [esp + 0x48], ebx
// 00892d6b  e8f0faffff           call 0x892860
// 00892d70  83c418               add esp, 0x18
// 00892d73  68ff00ff00           push 0xff00ff
// 00892d78  8d542428             lea edx, [esp + 0x28]
// 00892d7c  52                   push edx
// 00892d7d  8b10                 mov edx, dword ptr [eax]
// 00892d7f  83ec10               sub esp, 0x10
// 00892d82  8bcc                 mov ecx, esp
// 00892d84  8911                 mov dword ptr [ecx], edx
// 00892d86  8b5004               mov edx, dword ptr [eax + 4]
// 00892d89  895104               mov dword ptr [ecx + 4], edx
// 00892d8c  8b5008               mov edx, dword ptr [eax + 8]
// 00892d8f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892d92  895108               mov dword ptr [ecx + 8], edx
// 00892d95  89410c               mov dword ptr [ecx + 0xc], eax
// 00892d98  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00892d9f  51                   push ecx
// 00892da0  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00892da7  57                   push edi
// 00892da8  e8a3ae0500           call 0x8edc50
// 00892dad  8b442458             mov eax, dword ptr [esp + 0x58]
// 00892db1  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00892db8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00892dbf  8b35641ca400         mov esi, dword ptr [0xa41c64]
// 00892dc5  89442440             mov dword ptr [esp + 0x40], eax
// 00892dc9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00892dcd  8b542460             mov edx, dword ptr [esp + 0x60]
// 00892dd1  8d44243c             lea eax, [esp + 0x3c]
// 00892dd5  50                   push eax
// 00892dd6  894c2448             mov dword ptr [esp + 0x48], ecx
// 00892dda  8954244c             mov dword ptr [esp + 0x4c], edx
// 00892dde  ffd6                 call esi
// 00892de0  85c0                 test eax, eax
// 00892de2  0f85310a0000         jne 0x893819
// 00892de8  8b542440             mov edx, dword ptr [esp + 0x40]
// 00892dec  8bac24c4000000       mov ebp, dword ptr [esp + 0xc4]
// 00892df3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00892df7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00892dfb  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00892e02  03d5                 add edx, ebp
// 00892e04  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00892e08  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00892e0c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00892e10  896c2474             mov dword ptr [esp + 0x74], ebp
// 00892e14  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00892e1b  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 00892e22  89542470             mov dword ptr [esp + 0x70], edx
// 00892e26  03d5                 add edx, ebp
// 00892e28  41                   inc ecx
// 00892e29  89542478             mov dword ptr [esp + 0x78], edx
// 00892e2d  89542428             mov dword ptr [esp + 0x28], edx
// 00892e31  48                   dec eax
// 00892e32  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00892e39  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00892e3d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00892e41  8d9424ac000000       lea edx, [esp + 0xac]
// 00892e48  52                   push edx
// 00892e49  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00892e50  89442428             mov dword ptr [esp + 0x28], eax
// 00892e54  894c2434             mov dword ptr [esp + 0x34], ecx
// 00892e58  ffd6                 call esi
// 00892e5a  85c0                 test eax, eax
// 00892e5c  7576                 jne 0x892ed4
// 00892e5e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00892e62  7470                 je 0x892ed4
// 00892e64  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 00892e69  7569                 jne 0x892ed4
// 00892e6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00892e6f  6a02                 push 2
// 00892e71  be01000000           mov esi, 1
// 00892e76  56                   push esi
// 00892e77  8d8424d4000000       lea eax, [esp + 0xd4]
// 00892e7e  33db                 xor ebx, ebx
// 00892e80  50                   push eax
// 00892e81  8bee                 mov ebp, esi
// 00892e83  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00892e8a  e881a80500           call 0x8ed710
// 00892e8f  83ec10               sub esp, 0x10
// 00892e92  8bcc                 mov ecx, esp
// 00892e94  8931                 mov dword ptr [ecx], esi
// 00892e96  895904               mov dword ptr [ecx + 4], ebx
// 00892e99  896908               mov dword ptr [ecx + 8], ebp
// 00892e9c  83ec10               sub esp, 0x10
// 00892e9f  8bd3                 mov edx, ebx
// 00892ea1  89510c               mov dword ptr [ecx + 0xc], edx
// 00892ea4  8b10                 mov edx, dword ptr [eax]
// 00892ea6  8bcc                 mov ecx, esp
// 00892ea8  8911                 mov dword ptr [ecx], edx
// 00892eaa  8b5004               mov edx, dword ptr [eax + 4]
// 00892ead  895104               mov dword ptr [ecx + 4], edx
// 00892eb0  8b5008               mov edx, dword ptr [eax + 8]
// 00892eb3  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892eb6  895108               mov dword ptr [ecx + 8], edx
// 00892eb9  89410c               mov dword ptr [ecx + 0xc], eax
// 00892ebc  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00892ec3  51                   push ecx
// 00892ec4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00892ec8  57                   push edi
// 00892ec9  e812a10500           call 0x8ecfe0
// 00892ece  8b35641ca400         mov esi, dword ptr [0xa41c64]
// 00892ed4  8d54246c             lea edx, [esp + 0x6c]
// 00892ed8  52                   push edx
// 00892ed9  ffd6                 call esi
// 00892edb  85c0                 test eax, eax
// 00892edd  0f857a010000         jne 0x89305d
// 00892ee3  39442414             cmp dword ptr [esp + 0x14], eax
// 00892ee7  7504                 jne 0x892eed
// 00892ee9  33ed                 xor ebp, ebp
// 00892eeb  eb2e                 jmp 0x892f1b
// 00892eed  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00892ef1  83f940               cmp ecx, 0x40
// 00892ef4  7505                 jne 0x892efb
// 00892ef6  8d69c3               lea ebp, [ecx - 0x3d]
// 00892ef9  eb1f                 jmp 0x892f1a
// 00892efb  8b442434             mov eax, dword ptr [esp + 0x34]
// 00892eff  83f840               cmp eax, 0x40
// 00892f02  7505                 jne 0x892f09
// 00892f04  8d68c2               lea ebp, [eax - 0x3e]
// 00892f07  eb11                 jmp 0x892f1a
// 00892f09  85c0                 test eax, eax
// 00892f0b  7f08                 jg 0x892f15
// 00892f0d  85c9                 test ecx, ecx
// 00892f0f  7f04                 jg 0x892f15
// 00892f11  33ed                 xor ebp, ebp
// 00892f13  eb06                 jmp 0x892f1b
// 00892f15  bd01000000           mov ebp, 1
// 00892f1a  4d                   dec ebp
// 00892f1b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00892f1f  68f813ad00           push 0xad13f8
// 00892f24  e867c3ffff           call 0x88f290
// 00892f29  8bf0                 mov esi, eax
// 00892f2b  85f6                 test esi, esi
// 00892f2d  0f84e6080000         je 0x893819
// 00892f33  6a03                 push 3
// 00892f35  55                   push ebp
// 00892f36  8d8424d4000000       lea eax, [esp + 0xd4]
// 00892f3d  bb05000000           mov ebx, 5
// 00892f42  50                   push eax
// 00892f43  8bce                 mov ecx, esi
// 00892f45  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00892f4c  e8bfa70500           call 0x8ed710
// 00892f51  83ec10               sub esp, 0x10
// 00892f54  8bcc                 mov ecx, esp
// 00892f56  8919                 mov dword ptr [ecx], ebx
// 00892f58  8bd3                 mov edx, ebx
// 00892f5a  895104               mov dword ptr [ecx + 4], edx
// 00892f5d  895108               mov dword ptr [ecx + 8], edx
// 00892f60  89510c               mov dword ptr [ecx + 0xc], edx
// 00892f63  8b10                 mov edx, dword ptr [eax]
// 00892f65  83ec10               sub esp, 0x10
// 00892f68  8bcc                 mov ecx, esp
// 00892f6a  8911                 mov dword ptr [ecx], edx
// 00892f6c  8b5004               mov edx, dword ptr [eax + 4]
// 00892f6f  895104               mov dword ptr [ecx + 4], edx
// 00892f72  8b5008               mov edx, dword ptr [eax + 8]
// 00892f75  8b400c               mov eax, dword ptr [eax + 0xc]
// 00892f78  895108               mov dword ptr [ecx + 8], edx
// 00892f7b  89410c               mov dword ptr [ecx + 0xc], eax
// 00892f7e  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00892f85  51                   push ecx
// 00892f86  57                   push edi
// 00892f87  8bce                 mov ecx, esi
// 00892f89  e852a00500           call 0x8ecfe0
// 00892f8e  8b542478             mov edx, dword ptr [esp + 0x78]
// 00892f92  2b542470             sub edx, dword ptr [esp + 0x70]
// 00892f96  83fa0a               cmp edx, 0xa
// 00892f99  0f8ebe000000         jle 0x89305d
// 00892f9f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00892fa3  68cc13ad00           push 0xad13cc
// 00892fa8  e8e3c2ffff           call 0x88f290
// 00892fad  8bd8                 mov ebx, eax
// 00892faf  8d8424c4000000       lea eax, [esp + 0xc4]
// 00892fb6  50                   push eax
// 00892fb7  8d4c2470             lea ecx, [esp + 0x70]
// 00892fbb  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00892fc6  e8f530b9ff           call 0x4260c0
// 00892fcb  8b7004               mov esi, dword ptr [eax + 4]
// 00892fce  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00892fd5  51                   push ecx
// 00892fd6  8d4c2470             lea ecx, [esp + 0x70]
// 00892fda  83ee04               sub esi, 4
// 00892fdd  e8de30b9ff           call 0x4260c0
// 00892fe2  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00892fe9  8b00                 mov eax, dword ptr [eax]
// 00892feb  52                   push edx
// 00892fec  b908000000           mov ecx, 8
// 00892ff1  51                   push ecx
// 00892ff2  83e803               sub eax, 3
// 00892ff5  56                   push esi
// 00892ff6  50                   push eax
// 00892ff7  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00892ffe  e83d9ebdff           call 0x46ce40
// 00893003  6a03                 push 3
// 00893005  55                   push ebp
// 00893006  8d8424d4000000       lea eax, [esp + 0xd4]
// 0089300d  33f6                 xor esi, esi
// 0089300f  50                   push eax
// 00893010  8bcb                 mov ecx, ebx
// 00893012  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 00893019  e8f2a60500           call 0x8ed710
// 0089301e  83ec10               sub esp, 0x10
// 00893021  8bcc                 mov ecx, esp
// 00893023  8931                 mov dword ptr [ecx], esi
// 00893025  33d2                 xor edx, edx
// 00893027  895104               mov dword ptr [ecx + 4], edx
// 0089302a  895108               mov dword ptr [ecx + 8], edx
// 0089302d  83ec10               sub esp, 0x10
// 00893030  8bd6                 mov edx, esi
// 00893032  89510c               mov dword ptr [ecx + 0xc], edx
// 00893035  8b10                 mov edx, dword ptr [eax]
// 00893037  8bcc                 mov ecx, esp
// 00893039  8911                 mov dword ptr [ecx], edx
// 0089303b  8b5004               mov edx, dword ptr [eax + 4]
// 0089303e  895104               mov dword ptr [ecx + 4], edx
// 00893041  8b5008               mov edx, dword ptr [eax + 8]
// 00893044  8b400c               mov eax, dword ptr [eax + 0xc]
// 00893047  895108               mov dword ptr [ecx + 8], edx
// 0089304a  89410c               mov dword ptr [ecx + 0xc], eax
// 0089304d  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00893054  51                   push ecx
// 00893055  57                   push edi
// 00893056  8bcb                 mov ecx, ebx
// 00893058  e8839f0500           call 0x8ecfe0
// 0089305d  8d542424             lea edx, [esp + 0x24]
// 00893061  52                   push edx
// 00893062  ff15641ca400         call dword ptr [0xa41c64]
// 00893068  85c0                 test eax, eax
// 0089306a  0f85a9070000         jne 0x893819
// 00893070  33db                 xor ebx, ebx
// 00893072  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00893076  0f849d070000         je 0x893819
// 0089307c  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 00893081  0f8592070000         jne 0x893819
// 00893087  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089308b  6a02                 push 2
// 0089308d  be01000000           mov esi, 1
// 00893092  56                   push esi
// 00893093  8d8424d4000000       lea eax, [esp + 0xd4]
// 0089309a  50                   push eax
// 0089309b  8bee                 mov ebp, esi
// 0089309d  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 008930a4  e867a60500           call 0x8ed710
// 008930a9  83ec10               sub esp, 0x10
// 008930ac  8bcc                 mov ecx, esp
// 008930ae  8931                 mov dword ptr [ecx], esi
// 008930b0  895904               mov dword ptr [ecx + 4], ebx
// 008930b3  896908               mov dword ptr [ecx + 8], ebp
// 008930b6  8bd3                 mov edx, ebx
// 008930b8  89510c               mov dword ptr [ecx + 0xc], edx
// 008930bb  8b10                 mov edx, dword ptr [eax]
// 008930bd  83ec10               sub esp, 0x10
// 008930c0  8bcc                 mov ecx, esp
// 008930c2  8911                 mov dword ptr [ecx], edx
// 008930c4  8b5004               mov edx, dword ptr [eax + 4]
// 008930c7  895104               mov dword ptr [ecx + 4], edx
// 008930ca  8b5008               mov edx, dword ptr [eax + 8]
// 008930cd  8b400c               mov eax, dword ptr [eax + 0xc]
// 008930d0  895108               mov dword ptr [ecx + 8], edx
// 008930d3  89410c               mov dword ptr [ecx + 0xc], eax
// 008930d6  8d4c2444             lea ecx, [esp + 0x44]
// 008930da  e92f070000           jmp 0x89380e
// 008930df  b8a813ad00           mov eax, 0xad13a8
// 008930e4  3beb                 cmp ebp, ebx
// 008930e6  7505                 jne 0x8930ed
// 008930e8  b88413ad00           mov eax, 0xad1384
// 008930ed  50                   push eax
// 008930ee  8bcf                 mov ecx, edi
// 008930f0  e89bc1ffff           call 0x88f290
// 008930f5  89442418             mov dword ptr [esp + 0x18], eax
// 008930f9  3bc3                 cmp eax, ebx
// 008930fb  751f                 jne 0x89311c
// 008930fd  8b942400010000       mov edx, dword ptr [esp + 0x100]
// 00893104  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00893108  56                   push esi
// 00893109  52                   push edx
// 0089310a  e8c102ffff           call 0x8833d0
// 0089310f  5f                   pop edi
// 00893110  5e                   pop esi
// 00893111  5d                   pop ebp
// 00893112  5b                   pop ebx
// 00893113  81c4ec000000         add esp, 0xec
// 00893119  c20800               ret 8
// 0089311c  8b2d681ca400         mov ebp, dword ptr [0xa41c68]
// 00893122  8d5e48               lea ebx, [esi + 0x48]
// 00893125  53                   push ebx
// 00893126  8d8424e0000000       lea eax, [esp + 0xe0]
// 0089312d  50                   push eax
// 0089312e  ffd5                 call ebp
// 00893130  6a02                 push 2
// 00893132  33ff                 xor edi, edi
// 00893134  57                   push edi
// 00893135  8d4c242c             lea ecx, [esp + 0x2c]
// 00893139  51                   push ecx
// 0089313a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089313e  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 00893149  e8c2a50500           call 0x8ed710
// 0089314e  83ec10               sub esp, 0x10
// 00893151  8bcc                 mov ecx, esp
// 00893153  8939                 mov dword ptr [ecx], edi
// 00893155  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 0089315c  ba01000000           mov edx, 1
// 00893161  895104               mov dword ptr [ecx + 4], edx
// 00893164  33d2                 xor edx, edx
// 00893166  895108               mov dword ptr [ecx + 8], edx
// 00893169  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00893170  89510c               mov dword ptr [ecx + 0xc], edx
// 00893173  8b10                 mov edx, dword ptr [eax]
// 00893175  83ec10               sub esp, 0x10
// 00893178  8bcc                 mov ecx, esp
// 0089317a  8911                 mov dword ptr [ecx], edx
// 0089317c  8b5004               mov edx, dword ptr [eax + 4]
// 0089317f  895104               mov dword ptr [ecx + 4], edx
// 00893182  8b5008               mov edx, dword ptr [eax + 8]
// 00893185  8b400c               mov eax, dword ptr [eax + 0xc]
// 00893188  895108               mov dword ptr [ecx + 8], edx
// 0089318b  89410c               mov dword ptr [ecx + 0xc], eax
// 0089318e  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00893195  51                   push ecx
// 00893196  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089319a  57                   push edi
// 0089319b  e8409e0500           call 0x8ecfe0
// 008931a0  53                   push ebx
// 008931a1  8d942490000000       lea edx, [esp + 0x90]
// 008931a8  52                   push edx
// 008931a9  ffd5                 call ebp
// 008931ab  6aff                 push -1
// 008931ad  6a00                 push 0
// 008931af  8d842494000000       lea eax, [esp + 0x94]
// 008931b6  50                   push eax
// 008931b7  ff15e41ba400         call dword ptr [0xa41be4]
// 008931bd  837c241000           cmp dword ptr [esp + 0x10], 0
// 008931c2  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008931c9  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008931d0  8b5628               mov edx, dword ptr [esi + 0x28]
// 008931d3  89442470             mov dword ptr [esp + 0x70], eax
// 008931d7  89442460             mov dword ptr [esp + 0x60], eax
// 008931db  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008931e2  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008931e6  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008931ed  89542474             mov dword ptr [esp + 0x74], edx
// 008931f1  8b562c               mov edx, dword ptr [esi + 0x2c]
// 008931f4  89442464             mov dword ptr [esp + 0x64], eax
// 008931f8  894c2478             mov dword ptr [esp + 0x78], ecx
// 008931fc  8954245c             mov dword ptr [esp + 0x5c], edx
// 00893200  894c2468             mov dword ptr [esp + 0x68], ecx
// 00893204  b85813ad00           mov eax, 0xad1358
// 00893209  7505                 jne 0x893210
// 0089320b  b82c13ad00           mov eax, 0xad132c
// 00893210  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00893214  50                   push eax
// 00893215  e876c0ffff           call 0x88f290
// 0089321a  33f6                 xor esi, esi
// 0089321c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893220  3bc6                 cmp eax, esi
// 00893222  0f84f1050000         je 0x893819
// 00893228  39742414             cmp dword ptr [esp + 0x14], esi
// 0089322c  7509                 jne 0x893237
// 0089322e  89742410             mov dword ptr [esp + 0x10], esi
// 00893232  e99a000000           jmp 0x8932d1
// 00893237  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089323b  83f93c               cmp ecx, 0x3c
// 0089323e  750a                 jne 0x89324a
// 00893240  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00893248  eb29                 jmp 0x893273
// 0089324a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089324e  83f83c               cmp eax, 0x3c
// 00893251  750a                 jne 0x89325d
// 00893253  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0089325b  eb16                 jmp 0x893273
// 0089325d  3bc6                 cmp eax, esi
// 0089325f  7f0a                 jg 0x89326b
// 00893261  3bce                 cmp ecx, esi
// 00893263  7f06                 jg 0x89326b
// 00893265  89742410             mov dword ptr [esp + 0x10], esi
// 00893269  eb66                 jmp 0x8932d1
// 0089326b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00893273  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00893277  6a04                 push 4
// 00893279  51                   push ecx
// 0089327a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089327e  8d942484000000       lea edx, [esp + 0x84]
// 00893285  bb03000000           mov ebx, 3
// 0089328a  52                   push edx
// 0089328b  8beb                 mov ebp, ebx
// 0089328d  e87ea40500           call 0x8ed710
// 00893292  83ec10               sub esp, 0x10
// 00893295  8bcc                 mov ecx, esp
// 00893297  8919                 mov dword ptr [ecx], ebx
// 00893299  896904               mov dword ptr [ecx + 4], ebp
// 0089329c  8bd3                 mov edx, ebx
// 0089329e  895108               mov dword ptr [ecx + 8], edx
// 008932a1  89510c               mov dword ptr [ecx + 0xc], edx
// 008932a4  8b10                 mov edx, dword ptr [eax]
// 008932a6  83ec10               sub esp, 0x10
// 008932a9  8bcc                 mov ecx, esp
// 008932ab  8911                 mov dword ptr [ecx], edx
// 008932ad  8b5004               mov edx, dword ptr [eax + 4]
// 008932b0  895104               mov dword ptr [ecx + 4], edx
// 008932b3  8b5008               mov edx, dword ptr [eax + 8]
// 008932b6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008932b9  895108               mov dword ptr [ecx + 8], edx
// 008932bc  89410c               mov dword ptr [ecx + 0xc], eax
// 008932bf  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008932c6  51                   push ecx
// 008932c7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008932cb  57                   push edi
// 008932cc  e80f9d0500           call 0x8ecfe0
// 008932d1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008932d5  8b442474             mov eax, dword ptr [esp + 0x74]
// 008932d9  8d4410f7             lea eax, [eax + edx - 9]
// 008932dd  99                   cdq 
// 008932de  2bc2                 sub eax, edx
// 008932e0  8b542470             mov edx, dword ptr [esp + 0x70]
// 008932e4  8bc8                 mov ecx, eax
// 008932e6  8b442478             mov eax, dword ptr [esp + 0x78]
// 008932ea  8d4410f7             lea eax, [eax + edx - 9]
// 008932ee  bb09000000           mov ebx, 9
// 008932f3  99                   cdq 
// 008932f4  8beb                 mov ebp, ebx
// 008932f6  55                   push ebp
// 008932f7  2bc2                 sub eax, edx
// 008932f9  53                   push ebx
// 008932fa  d1f8                 sar eax, 1
// 008932fc  d1f9                 sar ecx, 1
// 008932fe  50                   push eax
// 008932ff  51                   push ecx
// 00893300  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00893307  e8349bbdff           call 0x46ce40
// 0089330c  39742414             cmp dword ptr [esp + 0x14], esi
// 00893310  7505                 jne 0x893317
// 00893312  8d4303               lea eax, [ebx + 3]
// 00893315  eb0c                 jmp 0x893323
// 00893317  33c0                 xor eax, eax
// 00893319  39742410             cmp dword ptr [esp + 0x10], esi
// 0089331d  0f95c0               setne al
// 00893320  83c009               add eax, 9
// 00893323  50                   push eax
// 00893324  33c9                 xor ecx, ecx
// 00893326  83ec10               sub esp, 0x10
// 00893329  8bc4                 mov eax, esp
// 0089332b  8908                 mov dword ptr [eax], ecx
// 0089332d  894804               mov dword ptr [eax + 4], ecx
// 00893330  8bcb                 mov ecx, ebx
// 00893332  894808               mov dword ptr [eax + 8], ecx
// 00893335  89480c               mov dword ptr [eax + 0xc], ecx
// 00893338  8d8c2490000000       lea ecx, [esp + 0x90]
// 0089333f  51                   push ecx
// 00893340  8974243c             mov dword ptr [esp + 0x3c], esi
// 00893344  89742440             mov dword ptr [esp + 0x40], esi
// 00893348  89742444             mov dword ptr [esp + 0x44], esi
// 0089334c  89742448             mov dword ptr [esp + 0x48], esi
// 00893350  e80bf5ffff           call 0x892860
// 00893355  83c418               add esp, 0x18
// 00893358  68ff00ff00           push 0xff00ff
// 0089335d  8d542428             lea edx, [esp + 0x28]
// 00893361  52                   push edx
// 00893362  8b10                 mov edx, dword ptr [eax]
// 00893364  83ec10               sub esp, 0x10
// 00893367  8bcc                 mov ecx, esp
// 00893369  8911                 mov dword ptr [ecx], edx
// 0089336b  8b5004               mov edx, dword ptr [eax + 4]
// 0089336e  895104               mov dword ptr [ecx + 4], edx
// 00893371  8b5008               mov edx, dword ptr [eax + 8]
// 00893374  8b400c               mov eax, dword ptr [eax + 0xc]
// 00893377  895108               mov dword ptr [ecx + 8], edx
// 0089337a  89410c               mov dword ptr [ecx + 0xc], eax
// 0089337d  8d8c2404010000       lea ecx, [esp + 0x104]
// 00893384  51                   push ecx
// 00893385  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 0089338c  57                   push edi
// 0089338d  e8bea80500           call 0x8edc50
// 00893392  39742414             cmp dword ptr [esp + 0x14], esi
// 00893396  7509                 jne 0x8933a1
// 00893398  89742410             mov dword ptr [esp + 0x10], esi
// 0089339c  e9a2000000           jmp 0x893443
// 008933a1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008933a5  83f93d               cmp ecx, 0x3d
// 008933a8  750a                 jne 0x8933b4
// 008933aa  c744241003000000     mov dword ptr [esp + 0x10], 3
// 008933b2  eb29                 jmp 0x8933dd
// 008933b4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008933b8  83f83d               cmp eax, 0x3d
// 008933bb  750a                 jne 0x8933c7
// 008933bd  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008933c5  eb16                 jmp 0x8933dd
// 008933c7  3bc6                 cmp eax, esi
// 008933c9  7f0a                 jg 0x8933d5
// 008933cb  3bce                 cmp ecx, esi
// 008933cd  7f06                 jg 0x8933d5
// 008933cf  89742410             mov dword ptr [esp + 0x10], esi
// 008933d3  eb6e                 jmp 0x893443
// 008933d5  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008933dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 008933e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008933e5  6a04                 push 4
// 008933e7  bd03000000           mov ebp, 3
// 008933ec  52                   push edx
// 008933ed  8d8424e4000000       lea eax, [esp + 0xe4]
// 008933f4  50                   push eax
// 008933f5  8bdd                 mov ebx, ebp
// 008933f7  8bf5                 mov esi, ebp
// 008933f9  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00893400  e80ba30500           call 0x8ed710
// 00893405  83ec10               sub esp, 0x10
// 00893408  8bcc                 mov ecx, esp
// 0089340a  8919                 mov dword ptr [ecx], ebx
// 0089340c  897104               mov dword ptr [ecx + 4], esi
// 0089340f  896908               mov dword ptr [ecx + 8], ebp
// 00893412  83ec10               sub esp, 0x10
// 00893415  8bd5                 mov edx, ebp
// 00893417  89510c               mov dword ptr [ecx + 0xc], edx
// 0089341a  8b10                 mov edx, dword ptr [eax]
// 0089341c  8bcc                 mov ecx, esp
// 0089341e  8911                 mov dword ptr [ecx], edx
// 00893420  8b5004               mov edx, dword ptr [eax + 4]
// 00893423  895104               mov dword ptr [ecx + 4], edx
// 00893426  8b5008               mov edx, dword ptr [eax + 8]
// 00893429  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089342c  895108               mov dword ptr [ecx + 8], edx
// 0089342f  89410c               mov dword ptr [ecx + 0xc], eax
// 00893432  8d4c247c             lea ecx, [esp + 0x7c]
// 00893436  51                   push ecx
// 00893437  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089343b  57                   push edi
// 0089343c  e89f9b0500           call 0x8ecfe0
// 00893441  33f6                 xor esi, esi
// 00893443  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00893447  8b442464             mov eax, dword ptr [esp + 0x64]
// 0089344b  8d4410f7             lea eax, [eax + edx - 9]
// 0089344f  99                   cdq 
// 00893450  2bc2                 sub eax, edx
// 00893452  8b542460             mov edx, dword ptr [esp + 0x60]
// 00893456  8bc8                 mov ecx, eax
// 00893458  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089345c  8d4410f7             lea eax, [eax + edx - 9]
// 00893460  bb09000000           mov ebx, 9
// 00893465  99                   cdq 
// 00893466  8beb                 mov ebp, ebx
// 00893468  55                   push ebp
// 00893469  2bc2                 sub eax, edx
// 0089346b  53                   push ebx
// 0089346c  d1f8                 sar eax, 1
// 0089346e  d1f9                 sar ecx, 1
// 00893470  50                   push eax
// 00893471  51                   push ecx
// 00893472  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00893479  e8c299bdff           call 0x46ce40
// 0089347e  39742414             cmp dword ptr [esp + 0x14], esi
// 00893482  7505                 jne 0x893489
// 00893484  8d4307               lea eax, [ebx + 7]
// 00893487  eb0c                 jmp 0x893495
// 00893489  33c0                 xor eax, eax
// 0089348b  39742410             cmp dword ptr [esp + 0x10], esi
// 0089348f  0f95c0               setne al
// 00893492  83c00d               add eax, 0xd
// 00893495  50                   push eax
// 00893496  33c9                 xor ecx, ecx
// 00893498  83ec10               sub esp, 0x10
// 0089349b  8bc4                 mov eax, esp
// 0089349d  8908                 mov dword ptr [eax], ecx
// 0089349f  894804               mov dword ptr [eax + 4], ecx
// 008934a2  8bcb                 mov ecx, ebx
// 008934a4  894808               mov dword ptr [eax + 8], ecx
// 008934a7  89480c               mov dword ptr [eax + 0xc], ecx
// 008934aa  8d8c2490000000       lea ecx, [esp + 0x90]
// 008934b1  51                   push ecx
// 008934b2  8974243c             mov dword ptr [esp + 0x3c], esi
// 008934b6  89742440             mov dword ptr [esp + 0x40], esi
// 008934ba  89742444             mov dword ptr [esp + 0x44], esi
// 008934be  89742448             mov dword ptr [esp + 0x48], esi
// 008934c2  e899f3ffff           call 0x892860
// 008934c7  83c418               add esp, 0x18
// 008934ca  68ff00ff00           push 0xff00ff
// 008934cf  8d542428             lea edx, [esp + 0x28]
// 008934d3  52                   push edx
// 008934d4  8b10                 mov edx, dword ptr [eax]
// 008934d6  83ec10               sub esp, 0x10
// 008934d9  8bcc                 mov ecx, esp
// 008934db  8911                 mov dword ptr [ecx], edx
// 008934dd  8b5004               mov edx, dword ptr [eax + 4]
// 008934e0  895104               mov dword ptr [ecx + 4], edx
// 008934e3  8b5008               mov edx, dword ptr [eax + 8]
// 008934e6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008934e9  895108               mov dword ptr [ecx + 8], edx
// 008934ec  89410c               mov dword ptr [ecx + 0xc], eax
// 008934ef  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 008934f6  51                   push ecx
// 008934f7  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 008934fe  57                   push edi
// 008934ff  e84ca70500           call 0x8edc50
// 00893504  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0089350b  8b542474             mov edx, dword ptr [esp + 0x74]
// 0089350f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00893513  8b1d641ca400         mov ebx, dword ptr [0xa41c64]
// 00893519  89442450             mov dword ptr [esp + 0x50], eax
// 0089351d  8954244c             mov dword ptr [esp + 0x4c], edx
// 00893521  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00893528  8d44244c             lea eax, [esp + 0x4c]
// 0089352c  50                   push eax
// 0089352d  894c2458             mov dword ptr [esp + 0x58], ecx
// 00893531  8954245c             mov dword ptr [esp + 0x5c], edx
// 00893535  ffd3                 call ebx
// 00893537  85c0                 test eax, eax
// 00893539  0f85da020000         jne 0x893819
// 0089353f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00893543  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00893547  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0089354e  894c2424             mov dword ptr [esp + 0x24], ecx
// 00893552  03ca                 add ecx, edx
// 00893554  8b542458             mov edx, dword ptr [esp + 0x58]
// 00893558  8d45ff               lea eax, [ebp - 1]
// 0089355b  896c2440             mov dword ptr [esp + 0x40], ebp
// 0089355f  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00893566  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0089356a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089356e  03cd                 add ecx, ebp
// 00893570  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00893574  894c2444             mov dword ptr [esp + 0x44], ecx
// 00893578  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 0089357f  89442428             mov dword ptr [esp + 0x28], eax
// 00893583  42                   inc edx
// 00893584  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 0089358b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089358f  8d4c2424             lea ecx, [esp + 0x24]
// 00893593  51                   push ecx
// 00893594  89542434             mov dword ptr [esp + 0x34], edx
// 00893598  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0089359c  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 008935a3  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 008935aa  ffd3                 call ebx
// 008935ac  85c0                 test eax, eax
// 008935ae  756a                 jne 0x89361a
// 008935b0  39742414             cmp dword ptr [esp + 0x14], esi
// 008935b4  7464                 je 0x89361a
// 008935b6  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 008935bb  755d                 jne 0x89361a
// 008935bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008935c1  6a02                 push 2
// 008935c3  8d5801               lea ebx, [eax + 1]
// 008935c6  53                   push ebx
// 008935c7  8d942484000000       lea edx, [esp + 0x84]
// 008935ce  52                   push edx
// 008935cf  33f6                 xor esi, esi
// 008935d1  33ed                 xor ebp, ebp
// 008935d3  e838a10500           call 0x8ed710
// 008935d8  83ec10               sub esp, 0x10
// 008935db  8bcc                 mov ecx, esp
// 008935dd  8931                 mov dword ptr [ecx], esi
// 008935df  895904               mov dword ptr [ecx + 4], ebx
// 008935e2  896908               mov dword ptr [ecx + 8], ebp
// 008935e5  83ec10               sub esp, 0x10
// 008935e8  8bd3                 mov edx, ebx
// 008935ea  89510c               mov dword ptr [ecx + 0xc], edx
// 008935ed  8b10                 mov edx, dword ptr [eax]
// 008935ef  8bcc                 mov ecx, esp
// 008935f1  8911                 mov dword ptr [ecx], edx
// 008935f3  8b5004               mov edx, dword ptr [eax + 4]
// 008935f6  895104               mov dword ptr [ecx + 4], edx
// 008935f9  8b5008               mov edx, dword ptr [eax + 8]
// 008935fc  8b400c               mov eax, dword ptr [eax + 0xc]
// 008935ff  895108               mov dword ptr [ecx + 8], edx
// 00893602  89410c               mov dword ptr [ecx + 0xc], eax
// 00893605  8d4c2444             lea ecx, [esp + 0x44]
// 00893609  51                   push ecx
// 0089360a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089360e  57                   push edi
// 0089360f  e8cc990500           call 0x8ecfe0
// 00893614  8b1d641ca400         mov ebx, dword ptr [0xa41c64]
// 0089361a  8d54243c             lea edx, [esp + 0x3c]
// 0089361e  52                   push edx
// 0089361f  ffd3                 call ebx
// 00893621  85c0                 test eax, eax
// 00893623  0f8577010000         jne 0x8937a0
// 00893629  39442414             cmp dword ptr [esp + 0x14], eax
// 0089362d  7504                 jne 0x893633
// 0089362f  33ed                 xor ebp, ebp
// 00893631  eb2e                 jmp 0x893661
// 00893633  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00893637  83f940               cmp ecx, 0x40
// 0089363a  7505                 jne 0x893641
// 0089363c  8d69c3               lea ebp, [ecx - 0x3d]
// 0089363f  eb1f                 jmp 0x893660
// 00893641  8b442434             mov eax, dword ptr [esp + 0x34]
// 00893645  83f840               cmp eax, 0x40
// 00893648  7505                 jne 0x89364f
// 0089364a  8d68c2               lea ebp, [eax - 0x3e]
// 0089364d  eb11                 jmp 0x893660
// 0089364f  85c0                 test eax, eax
// 00893651  7f08                 jg 0x89365b
// 00893653  85c9                 test ecx, ecx
// 00893655  7f04                 jg 0x89365b
// 00893657  33ed                 xor ebp, ebp
// 00893659  eb06                 jmp 0x893661
// 0089365b  bd01000000           mov ebp, 1
// 00893660  4d                   dec ebp
// 00893661  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00893665  680813ad00           push 0xad1308
// 0089366a  e821bcffff           call 0x88f290
// 0089366f  8bf0                 mov esi, eax
// 00893671  85f6                 test esi, esi
// 00893673  0f84a0010000         je 0x893819
// 00893679  6a03                 push 3
// 0089367b  55                   push ebp
// 0089367c  8d8424e4000000       lea eax, [esp + 0xe4]
// 00893683  bb05000000           mov ebx, 5
// 00893688  50                   push eax
// 00893689  8bce                 mov ecx, esi
// 0089368b  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00893692  e879a00500           call 0x8ed710
// 00893697  83ec10               sub esp, 0x10
// 0089369a  8bcc                 mov ecx, esp
// 0089369c  8919                 mov dword ptr [ecx], ebx
// 0089369e  8bd3                 mov edx, ebx
// 008936a0  895104               mov dword ptr [ecx + 4], edx
// 008936a3  895108               mov dword ptr [ecx + 8], edx
// 008936a6  89510c               mov dword ptr [ecx + 0xc], edx
// 008936a9  8b10                 mov edx, dword ptr [eax]
// 008936ab  83ec10               sub esp, 0x10
// 008936ae  8bcc                 mov ecx, esp
// 008936b0  8911                 mov dword ptr [ecx], edx
// 008936b2  8b5004               mov edx, dword ptr [eax + 4]
// 008936b5  895104               mov dword ptr [ecx + 4], edx
// 008936b8  8b5008               mov edx, dword ptr [eax + 8]
// 008936bb  8b400c               mov eax, dword ptr [eax + 0xc]
// 008936be  895108               mov dword ptr [ecx + 8], edx
// 008936c1  89410c               mov dword ptr [ecx + 0xc], eax
// 008936c4  8d4c245c             lea ecx, [esp + 0x5c]
// 008936c8  51                   push ecx
// 008936c9  57                   push edi
// 008936ca  8bce                 mov ecx, esi
// 008936cc  e80f990500           call 0x8ecfe0
// 008936d1  8b542444             mov edx, dword ptr [esp + 0x44]
// 008936d5  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 008936d9  83fa0a               cmp edx, 0xa
// 008936dc  0f8ebe000000         jle 0x8937a0
// 008936e2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008936e6  68dc12ad00           push 0xad12dc
// 008936eb  e8a0bbffff           call 0x88f290
// 008936f0  8bd8                 mov ebx, eax
// 008936f2  8d8424c4000000       lea eax, [esp + 0xc4]
// 008936f9  50                   push eax
// 008936fa  8d4c2440             lea ecx, [esp + 0x40]
// 008936fe  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00893709  e8b229b9ff           call 0x4260c0
// 0089370e  8b7004               mov esi, dword ptr [eax + 4]
// 00893711  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00893718  51                   push ecx
// 00893719  8d4c2440             lea ecx, [esp + 0x40]
// 0089371d  83ee04               sub esi, 4
// 00893720  e89b29b9ff           call 0x4260c0
// 00893725  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0089372c  8b00                 mov eax, dword ptr [eax]
// 0089372e  52                   push edx
// 0089372f  b908000000           mov ecx, 8
// 00893734  51                   push ecx
// 00893735  83e803               sub eax, 3
// 00893738  56                   push esi
// 00893739  50                   push eax
// 0089373a  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00893741  e8fa96bdff           call 0x46ce40
// 00893746  6a03                 push 3
// 00893748  55                   push ebp
// 00893749  8d8424a4000000       lea eax, [esp + 0xa4]
// 00893750  33f6                 xor esi, esi
// 00893752  50                   push eax
// 00893753  8bcb                 mov ecx, ebx
// 00893755  89b42494000000       mov dword ptr [esp + 0x94], esi
// 0089375c  e8af9f0500           call 0x8ed710
// 00893761  83ec10               sub esp, 0x10
// 00893764  8bcc                 mov ecx, esp
// 00893766  8931                 mov dword ptr [ecx], esi
// 00893768  33d2                 xor edx, edx
// 0089376a  895104               mov dword ptr [ecx + 4], edx
// 0089376d  895108               mov dword ptr [ecx + 8], edx
// 00893770  83ec10               sub esp, 0x10
// 00893773  8bd6                 mov edx, esi
// 00893775  89510c               mov dword ptr [ecx + 0xc], edx
// 00893778  8b10                 mov edx, dword ptr [eax]
// 0089377a  8bcc                 mov ecx, esp
// 0089377c  8911                 mov dword ptr [ecx], edx
// 0089377e  8b5004               mov edx, dword ptr [eax + 4]
// 00893781  895104               mov dword ptr [ecx + 4], edx
// 00893784  8b5008               mov edx, dword ptr [eax + 8]
// 00893787  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089378a  895108               mov dword ptr [ecx + 8], edx
// 0089378d  89410c               mov dword ptr [ecx + 0xc], eax
// 00893790  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00893797  51                   push ecx
// 00893798  57                   push edi
// 00893799  8bcb                 mov ecx, ebx
// 0089379b  e840980500           call 0x8ecfe0
// 008937a0  8d9424ac000000       lea edx, [esp + 0xac]
// 008937a7  52                   push edx
// 008937a8  ff15641ca400         call dword ptr [0xa41c64]
// 008937ae  85c0                 test eax, eax
// 008937b0  7567                 jne 0x893819
// 008937b2  39442414             cmp dword ptr [esp + 0x14], eax
// 008937b6  7461                 je 0x893819
// 008937b8  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 008937bd  755a                 jne 0x893819
// 008937bf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008937c3  8d5801               lea ebx, [eax + 1]
// 008937c6  6a02                 push 2
// 008937c8  53                   push ebx
// 008937c9  8d842484000000       lea eax, [esp + 0x84]
// 008937d0  50                   push eax
// 008937d1  33f6                 xor esi, esi
// 008937d3  33ed                 xor ebp, ebp
// 008937d5  e8369f0500           call 0x8ed710
// 008937da  83ec10               sub esp, 0x10
// 008937dd  8bcc                 mov ecx, esp
// 008937df  8931                 mov dword ptr [ecx], esi
// 008937e1  895904               mov dword ptr [ecx + 4], ebx
// 008937e4  896908               mov dword ptr [ecx + 8], ebp
// 008937e7  8bd3                 mov edx, ebx
// 008937e9  89510c               mov dword ptr [ecx + 0xc], edx
// 008937ec  8b10                 mov edx, dword ptr [eax]
// 008937ee  83ec10               sub esp, 0x10
// 008937f1  8bcc                 mov ecx, esp
// 008937f3  8911                 mov dword ptr [ecx], edx
// 008937f5  8b5004               mov edx, dword ptr [eax + 4]
// 008937f8  895104               mov dword ptr [ecx + 4], edx
// 008937fb  8b5008               mov edx, dword ptr [eax + 8]
// 008937fe  8b400c               mov eax, dword ptr [eax + 0xc]
// 00893801  895108               mov dword ptr [ecx + 8], edx
// 00893804  89410c               mov dword ptr [ecx + 0xc], eax
// 00893807  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0089380e  51                   push ecx
// 0089380f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00893813  57                   push edi
// 00893814  e8c7970500           call 0x8ecfe0
// 00893819  5f                   pop edi
// 0089381a  5e                   pop esi
// 0089381b  5d                   pop ebp
// 0089381c  5b                   pop ebx
// 0089381d  81c4ec000000         add esp, 0xec
// 00893823  c20800               ret 8
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp