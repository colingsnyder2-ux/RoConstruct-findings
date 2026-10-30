// roc 2012-06 00a12a80  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a12a80
//
// 00a12a80  6aff                 push -1
// 00a12a82  682137ae00           push 0xae3721
// 00a12a87  64a100000000         mov eax, dword ptr fs:[0]
// 00a12a8d  50                   push eax
// 00a12a8e  83ec54               sub esp, 0x54
// 00a12a91  53                   push ebx
// 00a12a92  55                   push ebp
// 00a12a93  56                   push esi
// 00a12a94  57                   push edi
// 00a12a95  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a12a9a  33c4                 xor eax, esp
// 00a12a9c  50                   push eax
// 00a12a9d  8d442468             lea eax, [esp + 0x68]
// 00a12aa1  64a300000000         mov dword ptr fs:[0], eax
// 00a12aa7  8be9                 mov ebp, ecx
// 00a12aa9  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00a12ab0  85c0                 test eax, eax
// 00a12ab2  7414                 je 0xa12ac8
// 00a12ab4  8b4074               mov eax, dword ptr [eax + 0x74]
// 00a12ab7  83787400             cmp dword ptr [eax + 0x74], 0
// 00a12abb  7506                 jne 0xa12ac3
// 00a12abd  83787800             cmp dword ptr [eax + 0x78], 0
// 00a12ac1  7405                 je 0xa12ac8
// 00a12ac3  83c074               add eax, 0x74
// 00a12ac6  eb0c                 jmp 0xa12ad4
// 00a12ac8  6a00                 push 0
// 00a12aca  8d44241c             lea eax, [esp + 0x1c]
// 00a12ace  50                   push eax
// 00a12acf  e8cc57f7ff           call 0x9882a0
// 00a12ad4  8b10                 mov edx, dword ptr [eax]
// 00a12ad6  8b4004               mov eax, dword ptr [eax + 4]
// 00a12ad9  8d4806               lea ecx, [eax + 6]
// 00a12adc  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 00a12ae2  3bc8                 cmp ecx, eax
// 00a12ae4  89542428             mov dword ptr [esp + 0x28], edx
// 00a12ae8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a12aec  7f04                 jg 0xa12af2
// 00a12aee  89442418             mov dword ptr [esp + 0x18], eax
// 00a12af2  8d4a04               lea ecx, [edx + 4]
// 00a12af5  83c004               add eax, 4
// 00a12af8  3bc8                 cmp ecx, eax
// 00a12afa  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a12afe  7f04                 jg 0xa12b04
// 00a12b00  89442414             mov dword ptr [esp + 0x14], eax
// 00a12b04  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 00a12b0c  0f847c050000         je 0xa1308e
// 00a12b12  6a29                 push 0x29
// 00a12b14  8bcd                 mov ecx, ebp
// 00a12b16  e8754df7ff           call 0x987890
// 00a12b1b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00a12b1f  50                   push eax
// 00a12b20  8d8c2488000000       lea ecx, [esp + 0x88]
// 00a12b27  51                   push ecx
// 00a12b28  8bce                 mov ecx, esi
// 00a12b2a  e87d03f7ff           call 0x982eac
// 00a12b2f  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a12b36  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a12b3d  8b5500               mov edx, dword ptr [ebp]
// 00a12b40  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 00a12b46  6a00                 push 0
// 00a12b48  2bc8                 sub ecx, eax
// 00a12b4a  51                   push ecx
// 00a12b4b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a12b4f  41                   inc ecx
// 00a12b50  51                   push ecx
// 00a12b51  50                   push eax
// 00a12b52  6a00                 push 0
// 00a12b54  56                   push esi
// 00a12b55  8bcd                 mov ecx, ebp
// 00a12b57  ffd2                 call edx
// 00a12b59  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00a12b60  85db                 test ebx, ebx
// 00a12b62  750e                 jne 0xa12b72
// 00a12b64  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a12b68  8918                 mov dword ptr [eax], ebx
// 00a12b6a  895804               mov dword ptr [eax + 4], ebx
// 00a12b6d  e92d050000           jmp 0xa1309f
// 00a12b72  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 00a12b78  8bcb                 mov ecx, ebx
// 00a12b7a  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a12b7e  e8cd1bf7ff           call 0x984750
// 00a12b83  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 00a12b8a  89442420             mov dword ptr [esp + 0x20], eax
// 00a12b8e  85ff                 test edi, edi
// 00a12b90  744b                 je 0xa12bdd
// 00a12b92  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a12b99  6a05                 push 5
// 00a12b9b  8b5500               mov edx, dword ptr [ebp]
// 00a12b9e  6a02                 push 2
// 00a12ba0  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00a12ba6  6a00                 push 0
// 00a12ba8  6a00                 push 0
// 00a12baa  6a01                 push 1
// 00a12bac  6a00                 push 0
// 00a12bae  57                   push edi
// 00a12baf  83ec10               sub esp, 0x10
// 00a12bb2  8bc4                 mov eax, esp
// 00a12bb4  8908                 mov dword ptr [eax], ecx
// 00a12bb6  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a12bbd  894804               mov dword ptr [eax + 4], ecx
// 00a12bc0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00a12bc7  894808               mov dword ptr [eax + 8], ecx
// 00a12bca  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00a12bd1  89480c               mov dword ptr [eax + 0xc], ecx
// 00a12bd4  56                   push esi
// 00a12bd5  8bcd                 mov ecx, ebp
// 00a12bd7  ffd2                 call edx
// 00a12bd9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a12bdd  85c0                 test eax, eax
// 00a12bdf  7536                 jne 0xa12c17
// 00a12be1  837c247c02           cmp dword ptr [esp + 0x7c], 2
// 00a12be6  7439                 je 0xa12c21
// 00a12be8  ba01000000           mov edx, 1
// 00a12bed  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 00a12bf3  85c0                 test eax, eax
// 00a12bf5  753c                 jne 0xa12c33
// 00a12bf7  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 00a12bfd  85c0                 test eax, eax
// 00a12bff  7f32                 jg 0xa12c33
// 00a12c01  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 00a12c07  85c9                 test ecx, ecx
// 00a12c09  741a                 je 0xa12c25
// 00a12c0b  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00a12c0e  85c0                 test eax, eax
// 00a12c10  7f21                 jg 0xa12c33
// 00a12c12  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a12c15  eb14                 jmp 0xa12c2b
// 00a12c17  83f802               cmp eax, 2
// 00a12c1a  74cc                 je 0xa12be8
// 00a12c1c  83f803               cmp eax, 3
// 00a12c1f  74c7                 je 0xa12be8
// 00a12c21  33d2                 xor edx, edx
// 00a12c23  ebc8                 jmp 0xa12bed
// 00a12c25  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 00a12c2b  85c0                 test eax, eax
// 00a12c2d  0f84c5000000         je 0xa12cf8
// 00a12c33  85d2                 test edx, edx
// 00a12c35  0f84bd000000         je 0xa12cf8
// 00a12c3b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a12c3f  8b03                 mov eax, dword ptr [ebx]
// 00a12c41  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00a12c47  51                   push ecx
// 00a12c48  8bcb                 mov ecx, ebx
// 00a12c4a  ffd2                 call edx
// 00a12c4c  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a12c53  85c0                 test eax, eax
// 00a12c55  0f849d000000         je 0xa12cf8
// 00a12c5b  8bc8                 mov ecx, eax
// 00a12c5d  e8be4df8ff           call 0x997a20
// 00a12c62  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a12c69  8bd8                 mov ebx, eax
// 00a12c6b  0faf5c2428           imul ebx, dword ptr [esp + 0x28]
// 00a12c70  e8eb890100           call 0xa2b660
// 00a12c75  8bc8                 mov ecx, eax
// 00a12c77  8bc3                 mov eax, ebx
// 00a12c79  99                   cdq 
// 00a12c7a  f7f9                 idiv ecx
// 00a12c7c  6a00                 push 0
// 00a12c7e  6a00                 push 0
// 00a12c80  6a00                 push 0
// 00a12c82  6a01                 push 1
// 00a12c84  6a00                 push 0
// 00a12c86  57                   push edi
// 00a12c87  8bd8                 mov ebx, eax
// 00a12c89  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00a12c90  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 00a12c97  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a12c9b  99                   cdq 
// 00a12c9c  2bc2                 sub eax, edx
// 00a12c9e  8bc8                 mov ecx, eax
// 00a12ca0  8bc3                 mov eax, ebx
// 00a12ca2  99                   cdq 
// 00a12ca3  2bc2                 sub eax, edx
// 00a12ca5  d1f8                 sar eax, 1
// 00a12ca7  d1f9                 sar ecx, 1
// 00a12ca9  2bc8                 sub ecx, eax
// 00a12cab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a12caf  038c24a0000000       add ecx, dword ptr [esp + 0xa0]
// 00a12cb6  99                   cdq 
// 00a12cb7  2bc2                 sub eax, edx
// 00a12cb9  8bd8                 mov ebx, eax
// 00a12cbb  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a12cbf  99                   cdq 
// 00a12cc0  2bc2                 sub eax, edx
// 00a12cc2  8b5500               mov edx, dword ptr [ebp]
// 00a12cc5  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 00a12ccb  d1f8                 sar eax, 1
// 00a12ccd  d1fb                 sar ebx, 1
// 00a12ccf  2bd8                 sub ebx, eax
// 00a12cd1  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00a12cd8  039c249c000000       add ebx, dword ptr [esp + 0x9c]
// 00a12cdf  50                   push eax
// 00a12ce0  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a12ce4  50                   push eax
// 00a12ce5  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a12ce9  50                   push eax
// 00a12cea  51                   push ecx
// 00a12ceb  53                   push ebx
// 00a12cec  56                   push esi
// 00a12ced  8bcd                 mov ecx, ebp
// 00a12cef  ffd2                 call edx
// 00a12cf1  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00a12cf8  8bcd                 mov ecx, ebp
// 00a12cfa  85ff                 test edi, edi
// 00a12cfc  7404                 je 0xa12d02
// 00a12cfe  6a2d                 push 0x2d
// 00a12d00  eb02                 jmp 0xa12d04
// 00a12d02  6a2c                 push 0x2c
// 00a12d04  e8874bf7ff           call 0x987890
// 00a12d09  8b16                 mov edx, dword ptr [esi]
// 00a12d0b  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a12d12  50                   push eax
// 00a12d13  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a12d16  8bce                 mov ecx, esi
// 00a12d18  ffd0                 call eax
// 00a12d1a  6a01                 push 1
// 00a12d1c  8bce                 mov ecx, esi
// 00a12d1e  e885680800           call 0xa995a8
// 00a12d23  8b13                 mov edx, dword ptr [ebx]
// 00a12d25  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a12d28  8d842498000000       lea eax, [esp + 0x98]
// 00a12d2f  50                   push eax
// 00a12d30  8bcb                 mov ecx, ebx
// 00a12d32  ffd2                 call edx
// 00a12d34  8d842498000000       lea eax, [esp + 0x98]
// 00a12d3b  33db                 xor ebx, ebx
// 00a12d3d  50                   push eax
// 00a12d3e  895c2474             mov dword ptr [esp + 0x74], ebx
// 00a12d42  e8d94df7ff           call 0x987b20
// 00a12d47  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a12d4e  83c404               add esp, 4
// 00a12d51  3bcb                 cmp ecx, ebx
// 00a12d53  741e                 je 0xa12d73
// 00a12d55  e8c6f7f8ff           call 0x9a2520
// 00a12d5a  85c0                 test eax, eax
// 00a12d5c  7415                 je 0xa12d73
// 00a12d5e  8b5500               mov edx, dword ptr [ebp]
// 00a12d61  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00a12d67  8d842498000000       lea eax, [esp + 0x98]
// 00a12d6e  50                   push eax
// 00a12d6f  8bcd                 mov ecx, ebp
// 00a12d71  ffd2                 call edx
// 00a12d73  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a12d7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a12d7e  8d540108             lea edx, [ecx + eax + 8]
// 00a12d82  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a12d89  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a12d90  89542438             mov dword ptr [esp + 0x38], edx
// 00a12d94  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00a12d9b  89542444             mov dword ptr [esp + 0x44], edx
// 00a12d9f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a12da3  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a12da7  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a12dab  83fa02               cmp edx, 2
// 00a12dae  740e                 je 0xa12dbe
// 00a12db0  83fa03               cmp edx, 3
// 00a12db3  7409                 je 0xa12dbe
// 00a12db5  83fa04               cmp edx, 4
// 00a12db8  0f85a3000000         jne 0xa12e61
// 00a12dbe  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00a12dc5  03c2                 add eax, edx
// 00a12dc7  99                   cdq 
// 00a12dc8  2bc2                 sub eax, edx
// 00a12dca  d1f8                 sar eax, 1
// 00a12dcc  8d58fb               lea ebx, [eax - 5]
// 00a12dcf  8d5005               lea edx, [eax + 5]
// 00a12dd2  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00a12dd9  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00a12de0  53                   push ebx
// 00a12de1  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 00a12de8  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00a12def  53                   push ebx
// 00a12df0  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 00a12df7  83c1f9               add ecx, -7
// 00a12dfa  8d51fb               lea edx, [ecx - 5]
// 00a12dfd  52                   push edx
// 00a12dfe  53                   push ebx
// 00a12dff  52                   push edx
// 00a12e00  50                   push eax
// 00a12e01  51                   push ecx
// 00a12e02  56                   push esi
// 00a12e03  e8985af7ff           call 0x9888a0
// 00a12e08  836c246007           sub dword ptr [esp + 0x60], 7
// 00a12e0d  83c420               add esp, 0x20
// 00a12e10  837c247c04           cmp dword ptr [esp + 0x7c], 4
// 00a12e15  7544                 jne 0xa12e5b
// 00a12e17  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a12e1e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a12e25  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00a12e2c  83c0ec               add eax, -0x14
// 00a12e2f  f7df                 neg edi
// 00a12e31  1bff                 sbb edi, edi
// 00a12e33  83e710               and edi, 0x10
// 00a12e36  83c710               add edi, 0x10
// 00a12e39  57                   push edi
// 00a12e3a  49                   dec ecx
// 00a12e3b  51                   push ecx
// 00a12e3c  50                   push eax
// 00a12e3d  42                   inc edx
// 00a12e3e  52                   push edx
// 00a12e3f  50                   push eax
// 00a12e40  56                   push esi
// 00a12e41  8bcd                 mov ecx, ebp
// 00a12e43  e8685ff7ff           call 0x988db0
// 00a12e48  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a12e4f  83c0ec               add eax, -0x14
// 00a12e52  89442440             mov dword ptr [esp + 0x40], eax
// 00a12e56  e9d3010000           jmp 0xa1302e
// 00a12e5b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a12e5f  33db                 xor ebx, ebx
// 00a12e61  83fa05               cmp edx, 5
// 00a12e64  7409                 je 0xa12e6f
// 00a12e66  83fa06               cmp edx, 6
// 00a12e69  0f85bf010000         jne 0xa1302e
// 00a12e6f  6820040000           push 0x420
// 00a12e74  8d4c244c             lea ecx, [esp + 0x4c]
// 00a12e78  51                   push ecx
// 00a12e79  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a12e7d  895c2454             mov dword ptr [esp + 0x54], ebx
// 00a12e81  895c2458             mov dword ptr [esp + 0x58], ebx
// 00a12e85  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a12e89  8b1e                 mov ebx, dword ptr [esi]
// 00a12e8b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00a12e92  ff155846b200         call dword ptr [0xb24658]
// 00a12e98  50                   push eax
// 00a12e99  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00a12ea0  ff159847b200         call dword ptr [0xb24798]
// 00a12ea6  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00a12ea9  50                   push eax
// 00a12eaa  8bce                 mov ecx, esi
// 00a12eac  ffd2                 call edx
// 00a12eae  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a12eb1  8d442420             lea eax, [esp + 0x20]
// 00a12eb5  50                   push eax
// 00a12eb6  6a01                 push 1
// 00a12eb8  68ecf3b400           push 0xb4f3ec
// 00a12ebd  51                   push ecx
// 00a12ebe  ff154021b200         call dword ptr [0xb22140]
// 00a12ec4  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a12ec8  2b542448             sub edx, dword ptr [esp + 0x48]
// 00a12ecc  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a12ed3  03542414             add edx, dword ptr [esp + 0x14]
// 00a12ed7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a12edb  83c002               add eax, 2
// 00a12ede  8d540a0d             lea edx, [edx + ecx + 0xd]
// 00a12ee2  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a12ee9  8bd9                 mov ebx, ecx
// 00a12eeb  2bd8                 sub ebx, eax
// 00a12eed  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a12ef4  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a12ef8  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a12eff  89442434             mov dword ptr [esp + 0x34], eax
// 00a12f03  8bc7                 mov eax, edi
// 00a12f05  f7d8                 neg eax
// 00a12f07  1bc0                 sbb eax, eax
// 00a12f09  83e011               and eax, 0x11
// 00a12f0c  6a05                 push 5
// 00a12f0e  83c00f               add eax, 0xf
// 00a12f11  50                   push eax
// 00a12f12  83ec10               sub esp, 0x10
// 00a12f15  8bc4                 mov eax, esp
// 00a12f17  8910                 mov dword ptr [eax], edx
// 00a12f19  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a12f20  895004               mov dword ptr [eax + 4], edx
// 00a12f23  894808               mov dword ptr [eax + 8], ecx
// 00a12f26  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a12f2a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a12f31  89480c               mov dword ptr [eax + 0xc], ecx
// 00a12f34  56                   push esi
// 00a12f35  8bcd                 mov ecx, ebp
// 00a12f37  e8345af7ff           call 0x988970
// 00a12f3c  837c247c05           cmp dword ptr [esp + 0x7c], 5
// 00a12f41  0f85e7000000         jne 0xa1302e
// 00a12f47  85ff                 test edi, edi
// 00a12f49  7551                 jne 0xa12f9c
// 00a12f4b  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a12f4f  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00a12f53  6a0f                 push 0xf
// 00a12f55  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a12f5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a12f60  2bc3                 sub eax, ebx
// 00a12f62  8bcd                 mov ecx, ebp
// 00a12f64  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00a12f6b  e82049f7ff           call 0x987890
// 00a12f70  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00a12f77  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a12f7b  50                   push eax
// 00a12f7c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a12f83  83c2fc               add edx, -4
// 00a12f86  52                   push edx
// 00a12f87  83c0fc               add eax, -4
// 00a12f8a  50                   push eax
// 00a12f8b  83c102               add ecx, 2
// 00a12f8e  51                   push ecx
// 00a12f8f  8d5302               lea edx, [ebx + 2]
// 00a12f92  52                   push edx
// 00a12f93  8bce                 mov ecx, esi
// 00a12f95  e8f6650800           call 0xa99590
// 00a12f9a  eb37                 jmp 0xa12fd3
// 00a12f9c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a12fa0  8b5500               mov edx, dword ptr [ebp]
// 00a12fa3  6a05                 push 5
// 00a12fa5  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00a12fab  6a02                 push 2
// 00a12fad  6a00                 push 0
// 00a12faf  6a00                 push 0
// 00a12fb1  6a01                 push 1
// 00a12fb3  6a00                 push 0
// 00a12fb5  57                   push edi
// 00a12fb6  83ec10               sub esp, 0x10
// 00a12fb9  8bc4                 mov eax, esp
// 00a12fbb  8918                 mov dword ptr [eax], ebx
// 00a12fbd  894804               mov dword ptr [eax + 4], ecx
// 00a12fc0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a12fc4  894808               mov dword ptr [eax + 8], ecx
// 00a12fc7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a12fcb  89480c               mov dword ptr [eax + 0xc], ecx
// 00a12fce  56                   push esi
// 00a12fcf  8bcd                 mov ecx, ebp
// 00a12fd1  ffd2                 call edx
// 00a12fd3  b801000000           mov eax, 1
// 00a12fd8  0144242c             add dword ptr [esp + 0x2c], eax
// 00a12fdc  29442430             sub dword ptr [esp + 0x30], eax
// 00a12fe0  29442434             sub dword ptr [esp + 0x34], eax
// 00a12fe4  03d8                 add ebx, eax
// 00a12fe6  8b4500               mov eax, dword ptr [ebp]
// 00a12fe9  f7df                 neg edi
// 00a12feb  1bff                 sbb edi, edi
// 00a12fed  83c72e               add edi, 0x2e
// 00a12ff0  57                   push edi
// 00a12ff1  8bcd                 mov ecx, ebp
// 00a12ff3  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a12ffa  e89148f7ff           call 0x987890
// 00a12fff  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a13003  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a13007  50                   push eax
// 00a13008  83ec10               sub esp, 0x10
// 00a1300b  8bc4                 mov eax, esp
// 00a1300d  8918                 mov dword ptr [eax], ebx
// 00a1300f  894804               mov dword ptr [eax + 4], ecx
// 00a13012  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a13016  895008               mov dword ptr [eax + 8], edx
// 00a13019  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a13020  89480c               mov dword ptr [eax + 0xc], ecx
// 00a13023  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 00a13029  56                   push esi
// 00a1302a  8bcd                 mov ecx, ebp
// 00a1302c  ffd0                 call eax
// 00a1302e  81c5f0000000         add ebp, 0xf0
// 00a13034  55                   push ebp
// 00a13035  56                   push esi
// 00a13036  8d4c2460             lea ecx, [esp + 0x60]
// 00a1303a  e8f124fcff           call 0x9d5530
// 00a1303f  8b3e                 mov edi, dword ptr [esi]
// 00a13041  6824880000           push 0x8824
// 00a13046  8d4c243c             lea ecx, [esp + 0x3c]
// 00a1304a  51                   push ecx
// 00a1304b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00a13052  c644247801           mov byte ptr [esp + 0x78], 1
// 00a13057  ff155846b200         call dword ptr [0xb24658]
// 00a1305d  50                   push eax
// 00a1305e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00a13065  ff159847b200         call dword ptr [0xb24798]
// 00a1306b  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a1306e  50                   push eax
// 00a1306f  8bce                 mov ecx, esi
// 00a13071  ffd2                 call edx
// 00a13073  8d4c2458             lea ecx, [esp + 0x58]
// 00a13077  c644247000           mov byte ptr [esp + 0x70], 0
// 00a1307c  e82f25fcff           call 0x9d55b0
// 00a13081  8d8c2498000000       lea ecx, [esp + 0x98]
// 00a13088  ff15d047b200         call dword ptr [0xb247d0]
// 00a1308e  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a13092  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a13096  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a1309a  8908                 mov dword ptr [eax], ecx
// 00a1309c  895004               mov dword ptr [eax + 4], edx
// 00a1309f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a130a3  64890d00000000       mov dword ptr fs:[0], ecx
// 00a130aa  59                   pop ecx
// 00a130ab  5f                   pop edi
// 00a130ac  5e                   pop esi
// 00a130ad  5d                   pop ebp
// 00a130ae  5b                   pop ebx
// 00a130af  83c460               add esp, 0x60
// 00a130b2  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOfficeTheme.cpp