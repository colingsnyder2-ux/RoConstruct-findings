// roc 2008-06 0065c110  unit: RBX::BallBallContact  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c110
//
// 0065c110  51                   push ecx
// 0065c111  53                   push ebx
// 0065c112  55                   push ebp
// 0065c113  56                   push esi
// 0065c114  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065c118  57                   push edi
// 0065c119  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0065c11c  e8afffffff           call 0x65c0d0
// 0065c121  33ed                 xor ebp, ebp
// 0065c123  396f24               cmp dword ptr [edi + 0x24], ebp
// 0065c126  740c                 je 0x65c134
// 0065c128  8bc7                 mov eax, edi
// 0065c12a  e831faffff           call 0x65bb60
// 0065c12f  396f24               cmp dword ptr [edi + 0x24], ebp
// 0065c132  75f4                 jne 0x65c128
// 0065c134  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0065c137  894724               mov dword ptr [edi + 0x24], eax
// 0065c13a  896f2c               mov dword ptr [edi + 0x2c], ebp
// 0065c13d  f6460503             test byte ptr [esi + 5], 3
// 0065c141  740a                 je 0x65c14d
// 0065c143  56                   push esi
// 0065c144  57                   push edi
// 0065c145  e886f4ffff           call 0x65b5d0
// 0065c14a  83c408               add esp, 8
// 0065c14d  57                   push edi
// 0065c14e  e8cdfeffff           call 0x65c020
// 0065c153  83c404               add esp, 4
// 0065c156  396f24               cmp dword ptr [edi + 0x24], ebp
// 0065c159  7411                 je 0x65c16c
// 0065c15b  eb03                 jmp 0x65c160
// 0065c15d  8d4900               lea ecx, [ecx]
// 0065c160  8bc7                 mov eax, edi
// 0065c162  e8f9f9ffff           call 0x65bb60
// 0065c167  396f24               cmp dword ptr [edi + 0x24], ebp
// 0065c16a  75f4                 jne 0x65c160
// 0065c16c  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0065c16f  894f24               mov dword ptr [edi + 0x24], ecx
// 0065c172  896f28               mov dword ptr [edi + 0x28], ebp
// 0065c175  3bcd                 cmp ecx, ebp
// 0065c177  7413                 je 0x65c18c
// 0065c179  8da42400000000       lea esp, [esp]
// 0065c180  8bc7                 mov eax, edi
// 0065c182  e8d9f9ffff           call 0x65bb60
// 0065c187  396f24               cmp dword ptr [edi + 0x24], ebp
// 0065c18a  75f4                 jne 0x65c180
// 0065c18c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0065c18f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065c193  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 0065c196  8b7500               mov esi, dword ptr [ebp]
// 0065c199  85f6                 test esi, esi
// 0065c19b  747a                 je 0x65c217
// 0065c19d  8d4900               lea ecx, [ecx]
// 0065c1a0  8a4605               mov al, byte ptr [esi + 5]
// 0065c1a3  a803                 test al, 3
// 0065c1a5  7404                 je 0x65c1ab
// 0065c1a7  a808                 test al, 8
// 0065c1a9  7404                 je 0x65c1af
// 0065c1ab  8bee                 mov ebp, esi
// 0065c1ad  eb61                 jmp 0x65c210
// 0065c1af  8b4608               mov eax, dword ptr [esi + 8]
// 0065c1b2  85c0                 test eax, eax
// 0065c1b4  7423                 je 0x65c1d9
// 0065c1b6  f6400604             test byte ptr [eax + 6], 4
// 0065c1ba  751d                 jne 0x65c1d9
// 0065c1bc  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065c1c0  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0065c1c3  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0065c1c9  52                   push edx
// 0065c1ca  6a02                 push 2
// 0065c1cc  50                   push eax
// 0065c1cd  e8fe030000           call 0x65c5d0
// 0065c1d2  83c40c               add esp, 0xc
// 0065c1d5  85c0                 test eax, eax
// 0065c1d7  7508                 jne 0x65c1e1
// 0065c1d9  804e0508             or byte ptr [esi + 5], 8
// 0065c1dd  8bee                 mov ebp, esi
// 0065c1df  eb2f                 jmp 0x65c210
// 0065c1e1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065c1e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065c1e8  804e0508             or byte ptr [esi + 5], 8
// 0065c1ec  8d540118             lea edx, [ecx + eax + 0x18]
// 0065c1f0  8b06                 mov eax, dword ptr [esi]
// 0065c1f2  894500               mov dword ptr [ebp], eax
// 0065c1f5  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0065c1f8  89542410             mov dword ptr [esp + 0x10], edx
// 0065c1fc  85c0                 test eax, eax
// 0065c1fe  7504                 jne 0x65c204
// 0065c200  8936                 mov dword ptr [esi], esi
// 0065c202  eb09                 jmp 0x65c20d
// 0065c204  8b08                 mov ecx, dword ptr [eax]
// 0065c206  890e                 mov dword ptr [esi], ecx
// 0065c208  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0065c20b  8932                 mov dword ptr [edx], esi
// 0065c20d  897330               mov dword ptr [ebx + 0x30], esi
// 0065c210  8b7500               mov esi, dword ptr [ebp]
// 0065c213  85f6                 test esi, esi
// 0065c215  7589                 jne 0x65c1a0
// 0065c217  8b7730               mov esi, dword ptr [edi + 0x30]
// 0065c21a  85f6                 test esi, esi
// 0065c21c  7423                 je 0x65c241
// 0065c21e  8bff                 mov edi, edi
// 0065c220  8b36                 mov esi, dword ptr [esi]
// 0065c222  8a4605               mov al, byte ptr [esi + 5]
// 0065c225  8a4f14               mov cl, byte ptr [edi + 0x14]
// 0065c228  24f8                 and al, 0xf8
// 0065c22a  80e103               and cl, 3
// 0065c22d  0ac1                 or al, cl
// 0065c22f  56                   push esi
// 0065c230  57                   push edi
// 0065c231  884605               mov byte ptr [esi + 5], al
// 0065c234  e897f3ffff           call 0x65b5d0
// 0065c239  83c408               add esp, 8
// 0065c23c  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0065c23f  75df                 jne 0x65c220
// 0065c241  33f6                 xor esi, esi
// 0065c243  397724               cmp dword ptr [edi + 0x24], esi
// 0065c246  740f                 je 0x65c257
// 0065c248  8bc7                 mov eax, edi
// 0065c24a  e811f9ffff           call 0x65bb60
// 0065c24f  03f0                 add esi, eax
// 0065c251  837f2400             cmp dword ptr [edi + 0x24], 0
// 0065c255  75f1                 jne 0x65c248
// 0065c257  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0065c25a  52                   push edx
// 0065c25b  e800faffff           call 0x65bc60
// 0065c260  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0065c263  80771403             xor byte ptr [edi + 0x14], 3
// 0065c267  83c404               add esp, 4
// 0065c26a  2bce                 sub ecx, esi
// 0065c26c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0065c270  8d471c               lea eax, [edi + 0x1c]
// 0065c273  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0065c27a  894720               mov dword ptr [edi + 0x20], eax
// 0065c27d  c6471502             mov byte ptr [edi + 0x15], 2
// 0065c281  894f48               mov dword ptr [edi + 0x48], ecx
// 0065c284  5f                   pop edi
// 0065c285  5e                   pop esi
// 0065c286  5d                   pop ebp
// 0065c287  5b                   pop ebx
// 0065c288  59                   pop ecx
// 0065c289  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
