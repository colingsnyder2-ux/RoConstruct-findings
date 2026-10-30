// roc 2012-06 009fcf30  unit: CXTPControlGallery  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fcf30
//
// 009fcf30  6aff                 push -1
// 009fcf32  68f828ae00           push 0xae28f8
// 009fcf37  64a100000000         mov eax, dword ptr fs:[0]
// 009fcf3d  50                   push eax
// 009fcf3e  83ec54               sub esp, 0x54
// 009fcf41  53                   push ebx
// 009fcf42  55                   push ebp
// 009fcf43  56                   push esi
// 009fcf44  57                   push edi
// 009fcf45  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009fcf4a  33c4                 xor eax, esp
// 009fcf4c  50                   push eax
// 009fcf4d  8d442468             lea eax, [esp + 0x68]
// 009fcf51  64a300000000         mov dword ptr fs:[0], eax
// 009fcf57  8bf1                 mov esi, ecx
// 009fcf59  e8a2ccffff           call 0x9f9c00
// 009fcf5e  33db                 xor ebx, ebx
// 009fcf60  89442420             mov dword ptr [esp + 0x20], eax
// 009fcf64  3bc3                 cmp eax, ebx
// 009fcf66  0f8495020000         je 0x9fd201
// 009fcf6c  8d442448             lea eax, [esp + 0x48]
// 009fcf70  50                   push eax
// 009fcf71  e87addffff           call 0x9facf0
// 009fcf76  895c2434             mov dword ptr [esp + 0x34], ebx
// 009fcf7a  c744243028e1c000     mov dword ptr [esp + 0x30], 0xc0e128
// 009fcf82  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 009fcf86  8b5708               mov edx, dword ptr [edi + 8]
// 009fcf89  8d4c2428             lea ecx, [esp + 0x28]
// 009fcf8d  51                   push ecx
// 009fcf8e  52                   push edx
// 009fcf8f  895c2478             mov dword ptr [esp + 0x78], ebx
// 009fcf93  ff150821b200         call dword ptr [0xb22108]
// 009fcf99  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009fcf9d  8b442448             mov eax, dword ptr [esp + 0x48]
// 009fcfa1  8b542450             mov edx, dword ptr [esp + 0x50]
// 009fcfa5  89442458             mov dword ptr [esp + 0x58], eax
// 009fcfa9  8b442454             mov eax, dword ptr [esp + 0x54]
// 009fcfad  894c245c             mov dword ptr [esp + 0x5c], ecx
// 009fcfb1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009fcfb5  89542460             mov dword ptr [esp + 0x60], edx
// 009fcfb9  8b542428             mov edx, dword ptr [esp + 0x28]
// 009fcfbd  51                   push ecx
// 009fcfbe  89442468             mov dword ptr [esp + 0x68], eax
// 009fcfc2  52                   push edx
// 009fcfc3  8d442460             lea eax, [esp + 0x60]
// 009fcfc7  50                   push eax
// 009fcfc8  ff15f43ab200         call dword ptr [0xb23af4]
// 009fcfce  8d4c2458             lea ecx, [esp + 0x58]
// 009fcfd2  51                   push ecx
// 009fcfd3  ff152c21b200         call dword ptr [0xb2212c]
// 009fcfd9  50                   push eax
// 009fcfda  8d4c2434             lea ecx, [esp + 0x34]
// 009fcfde  e8f556f8ff           call 0x9826d8
// 009fcfe3  8d542430             lea edx, [esp + 0x30]
// 009fcfe7  52                   push edx
// 009fcfe8  8bcf                 mov ecx, edi
// 009fcfea  e8ffc70900           call 0xa997ee
// 009fcfef  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 009fcff5  740a                 je 0x9fd001
// 009fcff7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 009fcfff  eb0a                 jmp 0x9fd00b
// 009fd001  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 009fd007  89442414             mov dword ptr [esp + 0x14], eax
// 009fd00b  399e54020000         cmp dword ptr [esi + 0x254], ebx
// 009fd011  895c2418             mov dword ptr [esp + 0x18], ebx
// 009fd015  0f8ec2010000         jle 0x9fd1dd
// 009fd01b  33ed                 xor ebp, ebp
// 009fd01d  896c2424             mov dword ptr [esp + 0x24], ebp
// 009fd021  85ed                 test ebp, ebp
// 009fd023  0f8cee010000         jl 0x9fd217
// 009fd029  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 009fd02f  0f8de2010000         jge 0x9fd217
// 009fd035  8bbe50020000         mov edi, dword ptr [esi + 0x250]
// 009fd03b  03fd                 add edi, ebp
// 009fd03d  57                   push edi
// 009fd03e  8d4c243c             lea ecx, [esp + 0x3c]
// 009fd042  51                   push ecx
// 009fd043  ff15ec3ab200         call dword ptr [0xb23aec]
// 009fd049  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 009fd04f  f7d8                 neg eax
// 009fd051  50                   push eax
// 009fd052  6a00                 push 0
// 009fd054  8d542440             lea edx, [esp + 0x40]
// 009fd058  52                   push edx
// 009fd059  ff15f43ab200         call dword ptr [0xb23af4]
// 009fd05f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 009fd063  39442444             cmp dword ptr [esp + 0x44], eax
// 009fd067  0f8c58010000         jl 0x9fd1c5
// 009fd06d  8d4c2438             lea ecx, [esp + 0x38]
// 009fd071  51                   push ecx
// 009fd072  ff15f03ab200         call dword ptr [0xb23af0]
// 009fd078  85c0                 test eax, eax
// 009fd07a  0f8537010000         jne 0x9fd1b7
// 009fd080  395c2414             cmp dword ptr [esp + 0x14], ebx
// 009fd084  7510                 jne 0x9fd096
// 009fd086  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 009fd08e  398600020000         cmp dword ptr [esi + 0x200], eax
// 009fd094  7508                 jne 0x9fd09e
// 009fd096  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009fd09e  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009fd0a4  8b5710               mov edx, dword ptr [edi + 0x10]
// 009fd0a7  8b6a20               mov ebp, dword ptr [edx + 0x20]
// 009fd0aa  83f8ff               cmp eax, -1
// 009fd0ad  750f                 jne 0x9fd0be
// 009fd0af  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009fd0b5  85c9                 test ecx, ecx
// 009fd0b7  7405                 je 0x9fd0be
// 009fd0b9  e8627ef8ff           call 0x984f20
// 009fd0be  33c9                 xor ecx, ecx
// 009fd0c0  395c2414             cmp dword ptr [esp + 0x14], ebx
// 009fd0c4  8b542420             mov edx, dword ptr [esp + 0x20]
// 009fd0c8  0f94c1               sete cl
// 009fd0cb  8b12                 mov edx, dword ptr [edx]
// 009fd0cd  8b5258               mov edx, dword ptr [edx + 0x58]
// 009fd0d0  8bd9                 mov ebx, ecx
// 009fd0d2  33c9                 xor ecx, ecx
// 009fd0d4  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 009fd0da  0f94c1               sete cl
// 009fd0dd  51                   push ecx
// 009fd0de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fd0e2  51                   push ecx
// 009fd0e3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009fd0e7  53                   push ebx
// 009fd0e8  50                   push eax
// 009fd0e9  83ec10               sub esp, 0x10
// 009fd0ec  8bc4                 mov eax, esp
// 009fd0ee  8908                 mov dword ptr [eax], ecx
// 009fd0f0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009fd0f4  894804               mov dword ptr [eax + 4], ecx
// 009fd0f7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009fd0fb  894808               mov dword ptr [eax + 8], ecx
// 009fd0fe  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009fd102  89480c               mov dword ptr [eax + 0xc], ecx
// 009fd105  8b4710               mov eax, dword ptr [edi + 0x10]
// 009fd108  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 009fd10f  50                   push eax
// 009fd110  56                   push esi
// 009fd111  51                   push ecx
// 009fd112  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009fd116  ffd2                 call edx
// 009fd118  85c0                 test eax, eax
// 009fd11a  0f8593000000         jne 0x9fd1b3
// 009fd120  8b442418             mov eax, dword ptr [esp + 0x18]
// 009fd124  39442414             cmp dword ptr [esp + 0x14], eax
// 009fd128  7511                 jne 0x9fd13b
// 009fd12a  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 009fd131  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 009fd139  7508                 jne 0x9fd143
// 009fd13b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009fd143  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009fd146  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 009fd14c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009fd14f  89542428             mov dword ptr [esp + 0x28], edx
// 009fd153  83fdff               cmp ebp, -1
// 009fd156  7511                 jne 0x9fd169
// 009fd158  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009fd15e  85c9                 test ecx, ecx
// 009fd160  7407                 je 0x9fd169
// 009fd162  e8b97df8ff           call 0x984f20
// 009fd167  8be8                 mov ebp, eax
// 009fd169  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009fd16c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009fd170  33c0                 xor eax, eax
// 009fd172  39bef4010000         cmp dword ptr [esi + 0x1f4], edi
// 009fd178  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009fd17c  0f94c0               sete al
// 009fd17f  8b11                 mov edx, dword ptr [ecx]
// 009fd181  8b525c               mov edx, dword ptr [edx + 0x5c]
// 009fd184  50                   push eax
// 009fd185  8b442420             mov eax, dword ptr [esp + 0x20]
// 009fd189  50                   push eax
// 009fd18a  53                   push ebx
// 009fd18b  55                   push ebp
// 009fd18c  83ec10               sub esp, 0x10
// 009fd18f  8bc4                 mov eax, esp
// 009fd191  8938                 mov dword ptr [eax], edi
// 009fd193  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 009fd197  897804               mov dword ptr [eax + 4], edi
// 009fd19a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 009fd19e  897808               mov dword ptr [eax + 8], edi
// 009fd1a1  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 009fd1a5  89780c               mov dword ptr [eax + 0xc], edi
// 009fd1a8  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 009fd1af  56                   push esi
// 009fd1b0  50                   push eax
// 009fd1b1  ffd2                 call edx
// 009fd1b3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009fd1b7  8b442454             mov eax, dword ptr [esp + 0x54]
// 009fd1bb  3944243c             cmp dword ptr [esp + 0x3c], eax
// 009fd1bf  7f1c                 jg 0x9fd1dd
// 009fd1c1  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 009fd1c5  43                   inc ebx
// 009fd1c6  83c518               add ebp, 0x18
// 009fd1c9  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 009fd1cf  895c2418             mov dword ptr [esp + 0x18], ebx
// 009fd1d3  896c2424             mov dword ptr [esp + 0x24], ebp
// 009fd1d7  0f8c44feffff         jl 0x9fd021
// 009fd1dd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 009fd1e1  6a00                 push 0
// 009fd1e3  e806c60900           call 0xa997ee
// 009fd1e8  8d4c2430             lea ecx, [esp + 0x30]
// 009fd1ec  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 009fd1f4  c744243028e1c000     mov dword ptr [esp + 0x30], 0xc0e128
// 009fd1fc  e8ff99a1ff           call 0x416c00
// 009fd201  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 009fd205  64890d00000000       mov dword ptr fs:[0], ecx
// 009fd20c  59                   pop ecx
// 009fd20d  5f                   pop edi
// 009fd20e  5e                   pop esi
// 009fd20f  5d                   pop ebp
// 009fd210  5b                   pop ebx
// 009fd211  83c460               add esp, 0x60
// 009fd214  c20400               ret 4
// 009fd217  e8a451f8ff           call 0x9823c0
// copied from an identical function in another client (function ?DrawItems@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp