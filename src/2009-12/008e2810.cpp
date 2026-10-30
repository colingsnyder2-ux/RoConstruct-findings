// roc 2009-12 008e2810  unit: CXTColorSelectorCtrl  size: 1620 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2810
//
// 008e2810  6aff                 push -1
// 008e2812  686d5e9600           push 0x965e6d
// 008e2817  64a100000000         mov eax, dword ptr fs:[0]
// 008e281d  50                   push eax
// 008e281e  83ec38               sub esp, 0x38
// 008e2821  53                   push ebx
// 008e2822  55                   push ebp
// 008e2823  56                   push esi
// 008e2824  57                   push edi
// 008e2825  a10052b600           mov eax, dword ptr [0xb65200]
// 008e282a  33c4                 xor eax, esp
// 008e282c  50                   push eax
// 008e282d  8d44244c             lea eax, [esp + 0x4c]
// 008e2831  64a300000000         mov dword ptr fs:[0], eax
// 008e2837  8bf1                 mov esi, ecx
// 008e2839  e8f215f1ff           call 0x7f3e30
// 008e283e  83f8ff               cmp eax, -1
// 008e2841  7507                 jne 0x8e284a
// 008e2843  0bc0                 or eax, eax
// 008e2845  e904060000           jmp 0x8e2e4e
// 008e284a  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008e2850  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008e2856  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e285c  6a00                 push 0
// 008e285e  56                   push esi
// 008e285f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008e2867  c644241f00           mov byte ptr [esp + 0x1f], 0
// 008e286c  ffd2                 call edx
// 008e286e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008e2874  6a00                 push 0
// 008e2876  6a01                 push 1
// 008e2878  6801040000           push 0x401
// 008e287d  50                   push eax
// 008e287e  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008e2884  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e2888  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008e288b  2b869c000000         sub eax, dword ptr [esi + 0x9c]
// 008e2891  8bbe94000000         mov edi, dword ptr [esi + 0x94]
// 008e2897  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 008e289d  8d4c241c             lea ecx, [esp + 0x1c]
// 008e28a1  897c2428             mov dword ptr [esp + 0x28], edi
// 008e28a5  89442438             mov dword ptr [esp + 0x38], eax
// 008e28a9  ff1574de9800         call dword ptr [0x98de74]
// 008e28af  8d4c2420             lea ecx, [esp + 0x20]
// 008e28b3  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008e28bb  ff1574de9800         call dword ptr [0x98de74]
// 008e28c1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008e28c7  c644245401           mov byte ptr [esp + 0x54], 1
// 008e28cc  a810                 test al, 0x10
// 008e28ce  0f855c010000         jne 0x8e2a30
// 008e28d4  2401                 and al, 1
// 008e28d6  0fb6e8               movzx ebp, al
// 008e28d9  f7dd                 neg ebp
// 008e28db  1bed                 sbb ebp, ebp
// 008e28dd  81c5dc260000         add ebp, 0x26dc
// 008e28e3  896c2434             mov dword ptr [esp + 0x34], ebp
// 008e28e7  e8b4bff8ff           call 0x86e8a0
// 008e28ec  8b10                 mov edx, dword ptr [eax]
// 008e28ee  8b5208               mov edx, dword ptr [edx + 8]
// 008e28f1  55                   push ebp
// 008e28f2  8d4c2420             lea ecx, [esp + 0x20]
// 008e28f6  51                   push ecx
// 008e28f7  8bc8                 mov ecx, eax
// 008e28f9  ffd2                 call edx
// 008e28fb  6a00                 push 0
// 008e28fd  6a0a                 push 0xa
// 008e28ff  8d4c2424             lea ecx, [esp + 0x24]
// 008e2903  ff1580d69800         call dword ptr [0x98d680]
// 008e2909  8bf8                 mov edi, eax
// 008e290b  85ff                 test edi, edi
// 008e290d  7e3f                 jle 0x8e294e
// 008e290f  8d4701               lea eax, [edi + 1]
// 008e2912  50                   push eax
// 008e2913  8d4c2460             lea ecx, [esp + 0x60]
// 008e2917  51                   push ecx
// 008e2918  8d4c2424             lea ecx, [esp + 0x24]
// 008e291c  ff157cd69800         call dword ptr [0x98d67c]
// 008e2922  50                   push eax
// 008e2923  8d4c2424             lea ecx, [esp + 0x24]
// 008e2927  c644245802           mov byte ptr [esp + 0x58], 2
// 008e292c  ff1538d59800         call dword ptr [0x98d538]
// 008e2932  8d4c245c             lea ecx, [esp + 0x5c]
// 008e2936  c644245401           mov byte ptr [esp + 0x54], 1
// 008e293b  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2941  57                   push edi
// 008e2942  8d4c2420             lea ecx, [esp + 0x20]
// 008e2946  ff1560d29800         call dword ptr [0x98d260]
// 008e294c  eb0f                 jmp 0x8e295d
// 008e294e  8d54241c             lea edx, [esp + 0x1c]
// 008e2952  52                   push edx
// 008e2953  8d4c2424             lea ecx, [esp + 0x24]
// 008e2957  ff1538d59800         call dword ptr [0x98d538]
// 008e295d  6824010000           push 0x124
// 008e2962  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008e296a  e8f10ef1ff           call 0x7f3860
// 008e296f  83c404               add esp, 4
// 008e2972  8d4c241c             lea ecx, [esp + 0x1c]
// 008e2976  8bf8                 mov edi, eax
// 008e2978  ff1580de9800         call dword ptr [0x98de80]
// 008e297e  50                   push eax
// 008e297f  8d4720               lea eax, [edi + 0x20]
// 008e2982  6800010000           push 0x100
// 008e2987  50                   push eax
// 008e2988  ff15c8b79800         call dword ptr [0x98b7c8]
// 008e298e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e2992  8b542444             mov edx, dword ptr [esp + 0x44]
// 008e2996  892f                 mov dword ptr [edi], ebp
// 008e2998  894f0c               mov dword ptr [edi + 0xc], ecx
// 008e299b  8d6f0c               lea ebp, [edi + 0xc]
// 008e299e  895d04               mov dword ptr [ebp + 4], ebx
// 008e29a1  895508               mov dword ptr [ebp + 8], edx
// 008e29a4  8d4317               lea eax, [ebx + 0x17]
// 008e29a7  89450c               mov dword ptr [ebp + 0xc], eax
// 008e29aa  c7470400000000       mov dword ptr [edi + 4], 0
// 008e29b1  c6470800             mov byte ptr [edi + 8], 0
// 008e29b5  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008e29bb  89471c               mov dword ptr [edi + 0x1c], eax
// 008e29be  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 008e29c4  83c40c               add esp, 0xc
// 008e29c7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008e29cd  57                   push edi
// 008e29ce  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e29d4  e8a711feff           call 0x8c3b80
// 008e29d9  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e29dd  52                   push edx
// 008e29de  55                   push ebp
// 008e29df  8d4c2428             lea ecx, [esp + 0x28]
// 008e29e3  ff1580de9800         call dword ptr [0x98de80]
// 008e29e9  50                   push eax
// 008e29ea  56                   push esi
// 008e29eb  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e29f1  e800440400           call 0x926df6
// 008e29f6  f686a400000001       test byte ptr [esi + 0xa4], 1
// 008e29fd  750e                 jne 0x8e2a0d
// 008e29ff  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 008e2a05  3b86b4000000         cmp eax, dword ptr [esi + 0xb4]
// 008e2a0b  eb11                 jmp 0x8e2a1e
// 008e2a0d  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008e2a13  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 008e2a19  750e                 jne 0x8e2a29
// 008e2a1b  83f8ff               cmp eax, -1
// 008e2a1e  7509                 jne 0x8e2a29
// 008e2a20  c6470801             mov byte ptr [edi + 8], 1
// 008e2a24  c644241701           mov byte ptr [esp + 0x17], 1
// 008e2a29  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008e2a2d  83c31b               add ebx, 0x1b
// 008e2a30  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008e2a36  83e002               and eax, 2
// 008e2a39  741a                 je 0x8e2a55
// 008e2a3b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008e2a41  85c9                 test ecx, ecx
// 008e2a43  7406                 je 0x8e2a4b
// 008e2a45  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e2a49  eb12                 jmp 0x8e2a5d
// 008e2a4b  c744243058a7b600     mov dword ptr [esp + 0x30], 0xb6a758
// 008e2a53  eb08                 jmp 0x8e2a5d
// 008e2a55  c7442430d8a6b600     mov dword ptr [esp + 0x30], 0xb6a6d8
// 008e2a5d  85c0                 test eax, eax
// 008e2a5f  741f                 je 0x8e2a80
// 008e2a61  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 008e2a68  740c                 je 0x8e2a76
// 008e2a6a  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 008e2a70  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e2a74  eb12                 jmp 0x8e2a88
// 008e2a76  c744242c28000000     mov dword ptr [esp + 0x2c], 0x28
// 008e2a7e  eb08                 jmp 0x8e2a88
// 008e2a80  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 008e2a88  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e2a8b  f7d8                 neg eax
// 008e2a8d  1bc0                 sbb eax, eax
// 008e2a8f  83e0ea               and eax, 0xffffffea
// 008e2a92  83c016               add eax, 0x16
// 008e2a95  03d8                 add ebx, eax
// 008e2a97  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008e2a9d  03cf                 add ecx, edi
// 008e2a9f  894c2444             mov dword ptr [esp + 0x44], ecx
// 008e2aa3  33c9                 xor ecx, ecx
// 008e2aa5  03c3                 add eax, ebx
// 008e2aa7  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 008e2aab  895c2424             mov dword ptr [esp + 0x24], ebx
// 008e2aaf  897c243c             mov dword ptr [esp + 0x3c], edi
// 008e2ab3  895c2440             mov dword ptr [esp + 0x40], ebx
// 008e2ab7  89442448             mov dword ptr [esp + 0x48], eax
// 008e2abb  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008e2abf  0f8e1f010000         jle 0x8e2be4
// 008e2ac5  eb04                 jmp 0x8e2acb
// 008e2ac7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e2acb  85c9                 test ecx, ecx
// 008e2acd  7e2b                 jle 0x8e2afa
// 008e2acf  8bc1                 mov eax, ecx
// 008e2ad1  99                   cdq 
// 008e2ad2  f77e6c               idiv dword ptr [esi + 0x6c]
// 008e2ad5  85d2                 test edx, edx
// 008e2ad7  7521                 jne 0x8e2afa
// 008e2ad9  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008e2adf  03d8                 add ebx, eax
// 008e2ae1  8d1418               lea edx, [eax + ebx]
// 008e2ae4  03c7                 add eax, edi
// 008e2ae6  895c2424             mov dword ptr [esp + 0x24], ebx
// 008e2aea  897c243c             mov dword ptr [esp + 0x3c], edi
// 008e2aee  895c2440             mov dword ptr [esp + 0x40], ebx
// 008e2af2  89442444             mov dword ptr [esp + 0x44], eax
// 008e2af6  89542448             mov dword ptr [esp + 0x48], edx
// 008e2afa  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e2afe  8b14c8               mov edx, dword ptr [eax + ecx*8]
// 008e2b01  ff442418             inc dword ptr [esp + 0x18]
// 008e2b05  8b5cc804             mov ebx, dword ptr [eax + ecx*8 + 4]
// 008e2b09  6824010000           push 0x124
// 008e2b0e  89542438             mov dword ptr [esp + 0x38], edx
// 008e2b12  e8490df1ff           call 0x7f3860
// 008e2b17  8bf8                 mov edi, eax
// 008e2b19  c6472000             mov byte ptr [edi + 0x20], 0
// 008e2b1d  891f                 mov dword ptr [edi], ebx
// 008e2b1f  8b442440             mov eax, dword ptr [esp + 0x40]
// 008e2b23  89470c               mov dword ptr [edi + 0xc], eax
// 008e2b26  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e2b2a  8d6f0c               lea ebp, [edi + 0xc]
// 008e2b2d  894d04               mov dword ptr [ebp + 4], ecx
// 008e2b30  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e2b34  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2b38  895508               mov dword ptr [ebp + 8], edx
// 008e2b3b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008e2b3f  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e2b43  83c404               add esp, 4
// 008e2b46  894f04               mov dword ptr [edi + 4], ecx
// 008e2b49  57                   push edi
// 008e2b4a  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e2b50  89450c               mov dword ptr [ebp + 0xc], eax
// 008e2b53  c6470800             mov byte ptr [edi + 8], 0
// 008e2b57  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 008e2b5e  899720010000         mov dword ptr [edi + 0x120], edx
// 008e2b64  e81710feff           call 0x8c3b80
// 008e2b69  e832bdf8ff           call 0x86e8a0
// 008e2b6e  8b10                 mov edx, dword ptr [eax]
// 008e2b70  8b5208               mov edx, dword ptr [edx + 8]
// 008e2b73  53                   push ebx
// 008e2b74  8d4c2424             lea ecx, [esp + 0x24]
// 008e2b78  51                   push ecx
// 008e2b79  8bc8                 mov ecx, eax
// 008e2b7b  ffd2                 call edx
// 008e2b7d  53                   push ebx
// 008e2b7e  55                   push ebp
// 008e2b7f  8d4c2428             lea ecx, [esp + 0x28]
// 008e2b83  ff1580de9800         call dword ptr [0x98de80]
// 008e2b89  50                   push eax
// 008e2b8a  56                   push esi
// 008e2b8b  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e2b91  e860420400           call 0x926df6
// 008e2b96  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e2b9a  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 008e2ba0  7516                 jne 0x8e2bb8
// 008e2ba2  807c241700           cmp byte ptr [esp + 0x17], 0
// 008e2ba7  750f                 jne 0x8e2bb8
// 008e2ba9  8b4f04               mov ecx, dword ptr [edi + 4]
// 008e2bac  c6470801             mov byte ptr [edi + 8], 1
// 008e2bb0  c644241701           mov byte ptr [esp + 0x17], 1
// 008e2bb5  894e70               mov dword ptr [esi + 0x70], ecx
// 008e2bb8  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008e2bbb  6a00                 push 0
// 008e2bbd  50                   push eax
// 008e2bbe  8d542444             lea edx, [esp + 0x44]
// 008e2bc2  52                   push edx
// 008e2bc3  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e2bc9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e2bcd  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008e2bd1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008e2bd5  40                   inc eax
// 008e2bd6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008e2bda  8944245c             mov dword ptr [esp + 0x5c], eax
// 008e2bde  0f8ce3feffff         jl 0x8e2ac7
// 008e2be4  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008e2bea  03d8                 add ebx, eax
// 008e2bec  8d0c18               lea ecx, [eax + ebx]
// 008e2bef  03c7                 add eax, edi
// 008e2bf1  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008e2bf8  897c243c             mov dword ptr [esp + 0x3c], edi
// 008e2bfc  895c2440             mov dword ptr [esp + 0x40], ebx
// 008e2c00  89442444             mov dword ptr [esp + 0x44], eax
// 008e2c04  894c2448             mov dword ptr [esp + 0x48], ecx
// 008e2c08  0f8423020000         je 0x8e2e31
// 008e2c0e  833d7cbfb90000       cmp dword ptr [0xb9bf7c], 0
// 008e2c15  0f8e35010000         jle 0x8e2d50
// 008e2c1b  6a04                 push 4
// 008e2c1d  6a00                 push 0
// 008e2c1f  8d442444             lea eax, [esp + 0x44]
// 008e2c23  50                   push eax
// 008e2c24  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e2c2a  33c0                 xor eax, eax
// 008e2c2c  8944245c             mov dword ptr [esp + 0x5c], eax
// 008e2c30  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e2c33  8b157cbfb900         mov edx, dword ptr [0xb9bf7c]
// 008e2c39  3bd1                 cmp edx, ecx
// 008e2c3b  7d02                 jge 0x8e2c3f
// 008e2c3d  8bca                 mov ecx, edx
// 008e2c3f  3bc1                 cmp eax, ecx
// 008e2c41  0f8df7000000         jge 0x8e2d3e
// 008e2c47  ff442418             inc dword ptr [esp + 0x18]
// 008e2c4b  85c0                 test eax, eax
// 008e2c4d  0f8ce6000000         jl 0x8e2d39
// 008e2c53  3bc2                 cmp eax, edx
// 008e2c55  0f8dde000000         jge 0x8e2d39
// 008e2c5b  8b0d78bfb900         mov ecx, dword ptr [0xb9bf78]
// 008e2c61  8b1481               mov edx, dword ptr [ecx + eax*4]
// 008e2c64  6824010000           push 0x124
// 008e2c69  89542434             mov dword ptr [esp + 0x34], edx
// 008e2c6d  e8ee0bf1ff           call 0x7f3860
// 008e2c72  8bf8                 mov edi, eax
// 008e2c74  c6472000             mov byte ptr [edi + 0x20], 0
// 008e2c78  c70700000000         mov dword ptr [edi], 0
// 008e2c7e  8b442440             mov eax, dword ptr [esp + 0x40]
// 008e2c82  89470c               mov dword ptr [edi + 0xc], eax
// 008e2c85  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e2c89  8d6f0c               lea ebp, [edi + 0xc]
// 008e2c8c  894d04               mov dword ptr [ebp + 4], ecx
// 008e2c8f  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e2c93  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e2c97  895508               mov dword ptr [ebp + 8], edx
// 008e2c9a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008e2c9e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e2ca2  83c404               add esp, 4
// 008e2ca5  894f04               mov dword ptr [edi + 4], ecx
// 008e2ca8  57                   push edi
// 008e2ca9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e2caf  89450c               mov dword ptr [ebp + 0xc], eax
// 008e2cb2  c6470800             mov byte ptr [edi + 8], 0
// 008e2cb6  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 008e2cbd  899720010000         mov dword ptr [edi + 0x120], edx
// 008e2cc3  e8b80efeff           call 0x8c3b80
// 008e2cc8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e2ccc  50                   push eax
// 008e2ccd  8d4c2430             lea ecx, [esp + 0x30]
// 008e2cd1  51                   push ecx
// 008e2cd2  e819c3f7ff           call 0x85eff0
// 008e2cd7  83c408               add esp, 8
// 008e2cda  6a01                 push 1
// 008e2cdc  55                   push ebp
// 008e2cdd  8bc8                 mov ecx, eax
// 008e2cdf  c644245c03           mov byte ptr [esp + 0x5c], 3
// 008e2ce4  ff1580de9800         call dword ptr [0x98de80]
// 008e2cea  50                   push eax
// 008e2ceb  56                   push esi
// 008e2cec  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e2cf2  e8ff400400           call 0x926df6
// 008e2cf7  8d4c242c             lea ecx, [esp + 0x2c]
// 008e2cfb  c644245401           mov byte ptr [esp + 0x54], 1
// 008e2d00  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2d06  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e2d0a  3996b0000000         cmp dword ptr [esi + 0xb0], edx
// 008e2d10  7509                 jne 0x8e2d1b
// 008e2d12  c644241701           mov byte ptr [esp + 0x17], 1
// 008e2d17  c6470801             mov byte ptr [edi + 8], 1
// 008e2d1b  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008e2d1e  6a00                 push 0
// 008e2d20  50                   push eax
// 008e2d21  8d4c2444             lea ecx, [esp + 0x44]
// 008e2d25  51                   push ecx
// 008e2d26  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e2d2c  ff44245c             inc dword ptr [esp + 0x5c]
// 008e2d30  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e2d34  e9f7feffff           jmp 0x8e2c30
// 008e2d39  e8ce0df1ff           call 0x7f3b0c
// 008e2d3e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e2d42  2b542440             sub edx, dword ptr [esp + 0x40]
// 008e2d46  8d441304             lea eax, [ebx + edx + 4]
// 008e2d4a  89442424             mov dword ptr [esp + 0x24], eax
// 008e2d4e  8bd8                 mov ebx, eax
// 008e2d50  83c304               add ebx, 4
// 008e2d53  e848bbf8ff           call 0x86e8a0
// 008e2d58  8b10                 mov edx, dword ptr [eax]
// 008e2d5a  8b5208               mov edx, dword ptr [edx + 8]
// 008e2d5d  68dd260000           push 0x26dd
// 008e2d62  8d4c2420             lea ecx, [esp + 0x20]
// 008e2d66  51                   push ecx
// 008e2d67  8bc8                 mov ecx, eax
// 008e2d69  ffd2                 call edx
// 008e2d6b  ff442418             inc dword ptr [esp + 0x18]
// 008e2d6f  6824010000           push 0x124
// 008e2d74  e8e70af1ff           call 0x7f3860
// 008e2d79  83c404               add esp, 4
// 008e2d7c  8d4c241c             lea ecx, [esp + 0x1c]
// 008e2d80  8bf8                 mov edi, eax
// 008e2d82  ff1580de9800         call dword ptr [0x98de80]
// 008e2d88  50                   push eax
// 008e2d89  8d4720               lea eax, [edi + 0x20]
// 008e2d8c  6800010000           push 0x100
// 008e2d91  50                   push eax
// 008e2d92  ff15c8b79800         call dword ptr [0x98b7c8]
// 008e2d98  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e2d9c  8b542444             mov edx, dword ptr [esp + 0x44]
// 008e2da0  8d6f0c               lea ebp, [edi + 0xc]
// 008e2da3  894d00               mov dword ptr [ebp], ecx
// 008e2da6  895d04               mov dword ptr [ebp + 4], ebx
// 008e2da9  895508               mov dword ptr [ebp + 8], edx
// 008e2dac  8d4317               lea eax, [ebx + 0x17]
// 008e2daf  89450c               mov dword ptr [ebp + 0xc], eax
// 008e2db2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e2db6  c707dd260000         mov dword ptr [edi], 0x26dd
// 008e2dbc  894704               mov dword ptr [edi + 4], eax
// 008e2dbf  c6470800             mov byte ptr [edi + 8], 0
// 008e2dc3  c7471c04000000       mov dword ptr [edi + 0x1c], 4
// 008e2dca  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008e2dd0  83c40c               add esp, 0xc
// 008e2dd3  8d54241c             lea edx, [esp + 0x1c]
// 008e2dd7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008e2ddd  52                   push edx
// 008e2dde  8d4c2438             lea ecx, [esp + 0x38]
// 008e2de2  ff1594de9800         call dword ptr [0x98de94]
// 008e2de8  57                   push edi
// 008e2de9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e2def  c644245804           mov byte ptr [esp + 0x58], 4
// 008e2df4  e8870dfeff           call 0x8c3b80
// 008e2df9  6a01                 push 1
// 008e2dfb  55                   push ebp
// 008e2dfc  8d4c243c             lea ecx, [esp + 0x3c]
// 008e2e00  ff1580de9800         call dword ptr [0x98de80]
// 008e2e06  50                   push eax
// 008e2e07  56                   push esi
// 008e2e08  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008e2e0e  e8e33f0400           call 0x926df6
// 008e2e13  83beb0000000ff       cmp dword ptr [esi + 0xb0], -1
// 008e2e1a  740b                 je 0x8e2e27
// 008e2e1c  807c241700           cmp byte ptr [esp + 0x17], 0
// 008e2e21  7504                 jne 0x8e2e27
// 008e2e23  c6470801             mov byte ptr [edi + 8], 1
// 008e2e27  8d4c2434             lea ecx, [esp + 0x34]
// 008e2e2b  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2e31  8d4c2420             lea ecx, [esp + 0x20]
// 008e2e35  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 008e2e3c  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2e42  8d4c241c             lea ecx, [esp + 0x1c]
// 008e2e46  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2e4c  33c0                 xor eax, eax
// 008e2e4e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e2e52  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2e59  59                   pop ecx
// 008e2e5a  5f                   pop edi
// 008e2e5b  5e                   pop esi
// 008e2e5c  5d                   pop ebp
// 008e2e5d  5b                   pop ebx
// 008e2e5e  83c444               add esp, 0x44
// 008e2e61  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorSelectorCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp