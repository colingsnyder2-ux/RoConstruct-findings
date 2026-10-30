// roc 2009-12 00833770  unit: CRobloxTreeCtrl  size: 1231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833770
//
// 00833770  6aff                 push -1
// 00833772  6850bf9500           push 0x95bf50
// 00833777  64a100000000         mov eax, dword ptr fs:[0]
// 0083377d  50                   push eax
// 0083377e  81ec90000000         sub esp, 0x90
// 00833784  53                   push ebx
// 00833785  55                   push ebp
// 00833786  56                   push esi
// 00833787  57                   push edi
// 00833788  a10052b600           mov eax, dword ptr [0xb65200]
// 0083378d  33c4                 xor eax, esp
// 0083378f  50                   push eax
// 00833790  8d8424a4000000       lea eax, [esp + 0xa4]
// 00833797  64a300000000         mov dword ptr fs:[0], eax
// 0083379d  8bf1                 mov esi, ecx
// 0083379f  8b4634               mov eax, dword ptr [esi + 0x34]
// 008337a2  8b7820               mov edi, dword ptr [eax + 0x20]
// 008337a5  ff15eccb9800         call dword ptr [0x98cbec]
// 008337ab  3bc7                 cmp eax, edi
// 008337ad  7407                 je 0x8337b6
// 008337af  57                   push edi
// 008337b0  ff15c8cb9800         call dword ptr [0x98cbc8]
// 008337b6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008337b9  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008337bc  52                   push edx
// 008337bd  ff152ccc9800         call dword ptr [0x98cc2c]
// 008337c3  6a0a                 push 0xa
// 008337c5  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008337cc  e8472f0f00           call 0x926718
// 008337d1  c784248800000078659f00 mov dword ptr [esp + 0x88], 0x9f6578
// 008337dc  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 008337e3  33ed                 xor ebp, ebp
// 008337e5  83e00c               and eax, 0xc
// 008337e8  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 008337ef  89442434             mov dword ptr [esp + 0x34], eax
// 008337f3  740f                 je 0x833804
// 008337f5  8d842488000000       lea eax, [esp + 0x88]
// 008337fc  50                   push eax
// 008337fd  8bce                 mov ecx, esi
// 008337ff  e81cf5ffff           call 0x832d20
// 00833804  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833807  51                   push ecx
// 00833808  8d4c2470             lea ecx, [esp + 0x70]
// 0083380c  e8c50efcff           call 0x7f46d6
// 00833811  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833814  8b4020               mov eax, dword ptr [eax + 0x20]
// 00833817  8d542440             lea edx, [esp + 0x40]
// 0083381b  52                   push edx
// 0083381c  bb01000000           mov ebx, 1
// 00833821  50                   push eax
// 00833822  889c24b4000000       mov byte ptr [esp + 0xb4], bl
// 00833829  ff1550cc9800         call dword ptr [0x98cc50]
// 0083382f  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00833835  6a45                 push 0x45
// 00833837  ffd7                 call edi
// 00833839  6a44                 push 0x44
// 0083383b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0083383f  ffd7                 call edi
// 00833841  55                   push ebp
// 00833842  89842484000000       mov dword ptr [esp + 0x84], eax
// 00833849  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083384c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0083384f  6a4b                 push 0x4b
// 00833851  53                   push ebx
// 00833852  51                   push ecx
// 00833853  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00833857  ff1558cc9800         call dword ptr [0x98cc58]
// 0083385d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833860  53                   push ebx
// 00833861  89442440             mov dword ptr [esp + 0x40], eax
// 00833865  e8de2e0f00           call 0x926748
// 0083386a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0083386d  55                   push ebp
// 0083386e  8bf8                 mov edi, eax
// 00833870  e8d32e0f00           call 0x926748
// 00833875  33c9                 xor ecx, ecx
// 00833877  51                   push ecx
// 00833878  8be8                 mov ebp, eax
// 0083387a  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083387d  51                   push ecx
// 0083387e  894c2424             mov dword ptr [esp + 0x24], ecx
// 00833882  894c2428             mov dword ptr [esp + 0x28], ecx
// 00833886  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0083388a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0083388e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00833891  680a110000           push 0x110a
// 00833896  52                   push edx
// 00833897  894c2440             mov dword ptr [esp + 0x40], ecx
// 0083389b  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008338a1  85c0                 test eax, eax
// 008338a3  741f                 je 0x8338c4
// 008338a5  6a00                 push 0
// 008338a7  8d4c2420             lea ecx, [esp + 0x20]
// 008338ab  51                   push ecx
// 008338ac  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008338af  50                   push eax
// 008338b0  e84109fcff           call 0x7f41f6
// 008338b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008338b9  2b442420             sub eax, dword ptr [esp + 0x20]
// 008338bd  89442430             mov dword ptr [esp + 0x30], eax
// 008338c1  0faff8               imul edi, eax
// 008338c4  01ac24b8000000       add dword ptr [esp + 0xb8], ebp
// 008338cb  01bc24bc000000       add dword ptr [esp + 0xbc], edi
// 008338d2  6a00                 push 0
// 008338d4  6a00                 push 0
// 008338d6  6a00                 push 0
// 008338d8  8d54245c             lea edx, [esp + 0x5c]
// 008338dc  52                   push edx
// 008338dd  ff15b0ca9800         call dword ptr [0x98cab0]
// 008338e3  85c0                 test eax, eax
// 008338e5  0f84b2000000         je 0x83399d
// 008338eb  8b7e34               mov edi, dword ptr [esi + 0x34]
// 008338ee  ff1528cc9800         call dword ptr [0x98cc28]
// 008338f4  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008338f7  0f85a0000000         jne 0x83399d
// 008338fd  8b442454             mov eax, dword ptr [esp + 0x54]
// 00833901  3d00020000           cmp eax, 0x200
// 00833906  0f87b9020000         ja 0x833bc5
// 0083390c  0f84d0000000         je 0x8339e2
// 00833912  2d00010000           sub eax, 0x100
// 00833917  746d                 je 0x833986
// 00833919  83e813               sub eax, 0x13
// 0083391c  0f85b7020000         jne 0x833bd9
// 00833922  837c24584b           cmp dword ptr [esp + 0x58], 0x4b
// 00833927  75a9                 jne 0x8338d2
// 00833929  8b442464             mov eax, dword ptr [esp + 0x64]
// 0083392d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00833931  8d542414             lea edx, [esp + 0x14]
// 00833935  89442414             mov dword ptr [esp + 0x14], eax
// 00833939  894c2418             mov dword ptr [esp + 0x18], ecx
// 0083393d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00833940  52                   push edx
// 00833941  50                   push eax
// 00833942  ff1534cc9800         call dword ptr [0x98cc34]
// 00833948  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083394c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00833950  51                   push ecx
// 00833951  52                   push edx
// 00833952  8d442448             lea eax, [esp + 0x48]
// 00833956  50                   push eax
// 00833957  ff155cca9800         call dword ptr [0x98ca5c]
// 0083395d  85c0                 test eax, eax
// 0083395f  7410                 je 0x833971
// 00833961  8d4c2450             lea ecx, [esp + 0x50]
// 00833965  51                   push ecx
// 00833966  ff1594ca9800         call dword ptr [0x98ca94]
// 0083396c  e961ffffff           jmp 0x8338d2
// 00833971  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00833976  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 0083397b  c1e010               shl eax, 0x10
// 0083397e  0bc2                 or eax, edx
// 00833980  8944245c             mov dword ptr [esp + 0x5c], eax
// 00833984  eb60                 jmp 0x8339e6
// 00833986  66837c24581b         cmp word ptr [esp + 0x58], 0x1b
// 0083398c  0f8547020000         jne 0x833bd9
// 00833992  6a00                 push 0
// 00833994  6a00                 push 0
// 00833996  8bce                 mov ecx, esi
// 00833998  e873ecffff           call 0x832610
// 0083399d  8b4634               mov eax, dword ptr [esi + 0x34]
// 008339a0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008339a4  8b4020               mov eax, dword ptr [eax + 0x20]
// 008339a7  52                   push edx
// 008339a8  50                   push eax
// 008339a9  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008339af  ff1520cc9800         call dword ptr [0x98cc20]
// 008339b5  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008339ba  0f8429020000         je 0x833be9
// 008339c0  6a00                 push 0
// 008339c2  6a00                 push 0
// 008339c4  8bc3                 mov eax, ebx
// 008339c6  50                   push eax
// 008339c7  53                   push ebx
// 008339c8  6a00                 push 0
// 008339ca  50                   push eax
// 008339cb  53                   push ebx
// 008339cc  8d4c2438             lea ecx, [esp + 0x38]
// 008339d0  51                   push ecx
// 008339d1  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008339d8  e8652d0f00           call 0x926742
// 008339dd  e919020000           jmp 0x833bfb
// 008339e2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008339e6  0fbfc8               movsx ecx, ax
// 008339e9  c1e810               shr eax, 0x10
// 008339ec  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008339f1  0fbff8               movsx edi, ax
// 008339f4  894c2414             mov dword ptr [esp + 0x14], ecx
// 008339f8  897c2418             mov dword ptr [esp + 0x18], edi
// 008339fc  0f858c000000         jne 0x833a8e
// 00833a02  2b8c24b8000000       sub ecx, dword ptr [esp + 0xb8]
// 00833a09  8bc1                 mov eax, ecx
// 00833a0b  99                   cdq 
// 00833a0c  33c2                 xor eax, edx
// 00833a0e  2bc2                 sub eax, edx
// 00833a10  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 00833a17  7f18                 jg 0x833a31
// 00833a19  2bbc24bc000000       sub edi, dword ptr [esp + 0xbc]
// 00833a20  8bc7                 mov eax, edi
// 00833a22  99                   cdq 
// 00833a23  33c2                 xor eax, edx
// 00833a25  2bc2                 sub eax, edx
// 00833a27  3b442438             cmp eax, dword ptr [esp + 0x38]
// 00833a2b  0f8ea1feffff         jle 0x8338d2
// 00833a31  837c243400           cmp dword ptr [esp + 0x34], 0
// 00833a36  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00833a3a  750b                 jne 0x833a47
// 00833a3c  6a00                 push 0
// 00833a3e  6a00                 push 0
// 00833a40  8bce                 mov ecx, esi
// 00833a42  e8c9ebffff           call 0x832610
// 00833a47  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833a4a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00833a4d  50                   push eax
// 00833a4e  ff15a4ca9800         call dword ptr [0x98caa4]
// 00833a54  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00833a5b  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00833a62  50                   push eax
// 00833a63  51                   push ecx
// 00833a64  50                   push eax
// 00833a65  51                   push ecx
// 00833a66  8d4c242c             lea ecx, [esp + 0x2c]
// 00833a6a  51                   push ecx
// 00833a6b  ff1538ca9800         call dword ptr [0x98ca38]
// 00833a71  6a00                 push 0
// 00833a73  6a00                 push 0
// 00833a75  8bc3                 mov eax, ebx
// 00833a77  50                   push eax
// 00833a78  53                   push ebx
// 00833a79  6a00                 push 0
// 00833a7b  50                   push eax
// 00833a7c  53                   push ebx
// 00833a7d  8d542438             lea edx, [esp + 0x38]
// 00833a81  52                   push edx
// 00833a82  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00833a89  e8b42c0f00           call 0x926742
// 00833a8e  6a00                 push 0
// 00833a90  6a00                 push 0
// 00833a92  8bc3                 mov eax, ebx
// 00833a94  50                   push eax
// 00833a95  53                   push ebx
// 00833a96  6a00                 push 0
// 00833a98  50                   push eax
// 00833a99  53                   push ebx
// 00833a9a  8d442438             lea eax, [esp + 0x38]
// 00833a9e  50                   push eax
// 00833a9f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00833aa6  e8972c0f00           call 0x926742
// 00833aab  8b442418             mov eax, dword ptr [esp + 0x18]
// 00833aaf  3b442444             cmp eax, dword ptr [esp + 0x44]
// 00833ab3  7d12                 jge 0x833ac7
// 00833ab5  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833ab8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00833abb  6a00                 push 0
// 00833abd  6a00                 push 0
// 00833abf  6815010000           push 0x115
// 00833ac4  52                   push edx
// 00833ac5  eb16                 jmp 0x833add
// 00833ac7  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 00833acb  7c16                 jl 0x833ae3
// 00833acd  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833ad0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00833ad3  6a00                 push 0
// 00833ad5  6a01                 push 1
// 00833ad7  6815010000           push 0x115
// 00833adc  51                   push ecx
// 00833add  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00833ae3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833ae7  3b442440             cmp eax, dword ptr [esp + 0x40]
// 00833aeb  7d12                 jge 0x833aff
// 00833aed  8b5634               mov edx, dword ptr [esi + 0x34]
// 00833af0  8b4220               mov eax, dword ptr [edx + 0x20]
// 00833af3  6a00                 push 0
// 00833af5  6a00                 push 0
// 00833af7  6814010000           push 0x114
// 00833afc  50                   push eax
// 00833afd  eb16                 jmp 0x833b15
// 00833aff  3b442448             cmp eax, dword ptr [esp + 0x48]
// 00833b03  7c16                 jl 0x833b1b
// 00833b05  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833b08  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00833b0b  6a00                 push 0
// 00833b0d  6a01                 push 1
// 00833b0f  6814010000           push 0x114
// 00833b14  52                   push edx
// 00833b15  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00833b1b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833b1e  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00833b25  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 00833b2c  6a00                 push 0
// 00833b2e  e8152c0f00           call 0x926748
// 00833b33  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833b36  6a01                 push 1
// 00833b38  2bf8                 sub edi, eax
// 00833b3a  e8092c0f00           call 0x926748
// 00833b3f  0faf442430           imul eax, dword ptr [esp + 0x30]
// 00833b44  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00833b48  2be8                 sub ebp, eax
// 00833b4a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00833b4e  50                   push eax
// 00833b4f  51                   push ecx
// 00833b50  55                   push ebp
// 00833b51  57                   push edi
// 00833b52  8d54242c             lea edx, [esp + 0x2c]
// 00833b56  52                   push edx
// 00833b57  ff1538ca9800         call dword ptr [0x98ca38]
// 00833b5d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00833b61  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00833b65  3bc1                 cmp eax, ecx
// 00833b67  7e08                 jle 0x833b71
// 00833b69  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00833b6d  89442424             mov dword ptr [esp + 0x24], eax
// 00833b71  8b442420             mov eax, dword ptr [esp + 0x20]
// 00833b75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00833b79  3bc1                 cmp eax, ecx
// 00833b7b  7e08                 jle 0x833b85
// 00833b7d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00833b81  89442428             mov dword ptr [esp + 0x28], eax
// 00833b85  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00833b8c  8b06                 mov eax, dword ptr [esi]
// 00833b8e  8d8c2488000000       lea ecx, [esp + 0x88]
// 00833b95  51                   push ecx
// 00833b96  52                   push edx
// 00833b97  8b5064               mov edx, dword ptr [eax + 0x64]
// 00833b9a  8d4c2424             lea ecx, [esp + 0x24]
// 00833b9e  51                   push ecx
// 00833b9f  8bce                 mov ecx, esi
// 00833ba1  ffd2                 call edx
// 00833ba3  6a00                 push 0
// 00833ba5  6a00                 push 0
// 00833ba7  8bc3                 mov eax, ebx
// 00833ba9  50                   push eax
// 00833baa  53                   push ebx
// 00833bab  6a00                 push 0
// 00833bad  50                   push eax
// 00833bae  53                   push ebx
// 00833baf  8d442438             lea eax, [esp + 0x38]
// 00833bb3  50                   push eax
// 00833bb4  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00833bbb  e8822b0f00           call 0x926742
// 00833bc0  e90dfdffff           jmp 0x8338d2
// 00833bc5  2d02020000           sub eax, 0x202
// 00833bca  0f84cdfdffff         je 0x83399d
// 00833bd0  83e803               sub eax, 3
// 00833bd3  0f84c4fdffff         je 0x83399d
// 00833bd9  8d4c2450             lea ecx, [esp + 0x50]
// 00833bdd  51                   push ecx
// 00833bde  ff1594ca9800         call dword ptr [0x98ca94]
// 00833be4  e9e9fcffff           jmp 0x8338d2
// 00833be9  837c243400           cmp dword ptr [esp + 0x34], 0
// 00833bee  750b                 jne 0x833bfb
// 00833bf0  6a00                 push 0
// 00833bf2  6a00                 push 0
// 00833bf4  8bce                 mov ecx, esi
// 00833bf6  e815eaffff           call 0x832610
// 00833bfb  8d4c246c             lea ecx, [esp + 0x6c]
// 00833bff  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00833c07  e8c40afcff           call 0x7f46d0
// 00833c0c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00833c13  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 00833c1e  e8e92a0f00           call 0x92670c
// 00833c23  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00833c2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00833c31  59                   pop ecx
// 00833c32  5f                   pop edi
// 00833c33  5e                   pop esi
// 00833c34  5d                   pop ebp
// 00833c35  5b                   pop ebx
// 00833c36  81c49c000000         add esp, 0x9c
// 00833c3c  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoBanding@CXTTreeBase@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp