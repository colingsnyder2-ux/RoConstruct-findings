// roc 2010-06 007afe90  unit: CXTPPaintManager  size: 1248 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007afe90
//
// 007afe90  6aff                 push -1
// 007afe92  68f9eb9a00           push 0x9aebf9
// 007afe97  64a100000000         mov eax, dword ptr fs:[0]
// 007afe9d  50                   push eax
// 007afe9e  83ec48               sub esp, 0x48
// 007afea1  53                   push ebx
// 007afea2  55                   push ebp
// 007afea3  56                   push esi
// 007afea4  57                   push edi
// 007afea5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007afeaa  33c4                 xor eax, esp
// 007afeac  50                   push eax
// 007afead  8d44245c             lea eax, [esp + 0x5c]
// 007afeb1  64a300000000         mov dword ptr fs:[0], eax
// 007afeb7  8bf9                 mov edi, ecx
// 007afeb9  837c247800           cmp dword ptr [esp + 0x78], 0
// 007afebe  8b742474             mov esi, dword ptr [esp + 0x74]
// 007afec2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007afec8  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007afece  0f841c020000         je 0x7b00f0
// 007afed4  83f802               cmp eax, 2
// 007afed7  751b                 jne 0x7afef4
// 007afed9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007afedd  8b07                 mov eax, dword ptr [edi]
// 007afedf  8b4058               mov eax, dword ptr [eax + 0x58]
// 007afee2  6a01                 push 1
// 007afee4  56                   push esi
// 007afee5  51                   push ecx
// 007afee6  8d542430             lea edx, [esp + 0x30]
// 007afeea  52                   push edx
// 007afeeb  8bcf                 mov ecx, edi
// 007afeed  ffd0                 call eax
// 007afeef  e9e6010000           jmp 0x7b00da
// 007afef4  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007afefa  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007aff00  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 007aff06  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007aff0c  89442444             mov dword ptr [esp + 0x44], eax
// 007aff10  89442434             mov dword ptr [esp + 0x34], eax
// 007aff14  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007aff1a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007aff1e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007aff24  83c302               add ebx, 2
// 007aff27  89542440             mov dword ptr [esp + 0x40], edx
// 007aff2b  894c2448             mov dword ptr [esp + 0x48], ecx
// 007aff2f  89542430             mov dword ptr [esp + 0x30], edx
// 007aff33  894c2438             mov dword ptr [esp + 0x38], ecx
// 007aff37  83f8ff               cmp eax, -1
// 007aff3a  750f                 jne 0x7aff4b
// 007aff3c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007aff42  85c9                 test ecx, ecx
// 007aff44  7405                 je 0x7aff4b
// 007aff46  e845a7ffff           call 0x7aa690
// 007aff4b  8bce                 mov ecx, esi
// 007aff4d  89442478             mov dword ptr [esp + 0x78], eax
// 007aff51  e89ae90800           call 0x83e8f0
// 007aff56  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007aff5a  85c0                 test eax, eax
// 007aff5c  0f84ab000000         je 0x7b000d
// 007aff62  8b16                 mov edx, dword ptr [esi]
// 007aff64  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007aff6a  8d442414             lea eax, [esp + 0x14]
// 007aff6e  50                   push eax
// 007aff6f  8bce                 mov ecx, esi
// 007aff71  ffd2                 call edx
// 007aff73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aff77  8b06                 mov eax, dword ptr [esi]
// 007aff79  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007aff7f  51                   push ecx
// 007aff80  8bce                 mov ecx, esi
// 007aff82  ffd2                 call edx
// 007aff84  8bd8                 mov ebx, eax
// 007aff86  8bcb                 mov ecx, ebx
// 007aff88  e8c38b0000           call 0x7b8b50
// 007aff8d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 007aff92  8bcb                 mov ecx, ebx
// 007aff94  89442470             mov dword ptr [esp + 0x70], eax
// 007aff98  e803e20100           call 0x7ce1a0
// 007aff9d  8bc8                 mov ecx, eax
// 007aff9f  8b442470             mov eax, dword ptr [esp + 0x70]
// 007affa3  99                   cdq 
// 007affa4  f7f9                 idiv ecx
// 007affa6  8b542440             mov edx, dword ptr [esp + 0x40]
// 007affaa  6a01                 push 1
// 007affac  6a00                 push 0
// 007affae  6a00                 push 0
// 007affb0  89442424             mov dword ptr [esp + 0x24], eax
// 007affb4  8b442454             mov eax, dword ptr [esp + 0x54]
// 007affb8  03c2                 add eax, edx
// 007affba  99                   cdq 
// 007affbb  2bc2                 sub eax, edx
// 007affbd  8bc8                 mov ecx, eax
// 007affbf  8b442424             mov eax, dword ptr [esp + 0x24]
// 007affc3  99                   cdq 
// 007affc4  2bc2                 sub eax, edx
// 007affc6  8b542448             mov edx, dword ptr [esp + 0x48]
// 007affca  83c203               add edx, 3
// 007affcd  89542430             mov dword ptr [esp + 0x30], edx
// 007affd1  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007affd8  52                   push edx
// 007affd9  8b542428             mov edx, dword ptr [esp + 0x28]
// 007affdd  6a00                 push 0
// 007affdf  6a00                 push 0
// 007affe1  53                   push ebx
// 007affe2  52                   push edx
// 007affe3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007affe7  d1f9                 sar ecx, 1
// 007affe9  d1f8                 sar eax, 1
// 007affeb  2bc8                 sub ecx, eax
// 007affed  8b07                 mov eax, dword ptr [edi]
// 007affef  52                   push edx
// 007afff0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007afff6  51                   push ecx
// 007afff7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007afffb  51                   push ecx
// 007afffc  55                   push ebp
// 007afffd  8bcf                 mov ecx, edi
// 007affff  ffd2                 call edx
// 007b0001  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0005  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b0009  8d5c0106             lea ebx, [ecx + eax + 6]
// 007b000d  8b16                 mov edx, dword ptr [esi]
// 007b000f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007b0015  8bce                 mov ecx, esi
// 007b0017  ffd0                 call eax
// 007b0019  85c0                 test eax, eax
// 007b001b  0f84b9000000         je 0x7b00da
// 007b0021  85ff                 test edi, edi
// 007b0023  7510                 jne 0x7b0035
// 007b0025  6a11                 push 0x11
// 007b0027  ff1578a19e00         call dword ptr [0x9ea178]
// 007b002d  50                   push eax
// 007b002e  e87184ffff           call 0x7a84a4
// 007b0033  eb06                 jmp 0x7b003b
// 007b0035  8d87f0000000         lea eax, [edi + 0xf0]
// 007b003b  50                   push eax
// 007b003c  55                   push ebp
// 007b003d  8d4c241c             lea ecx, [esp + 0x1c]
// 007b0041  e85af60400           call 0x7ff6a0
// 007b0046  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007b004c  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007b0052  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007b0058  8b5500               mov edx, dword ptr [ebp]
// 007b005b  51                   push ecx
// 007b005c  50                   push eax
// 007b005d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007b0064  6a00                 push 0
// 007b0066  6a00                 push 0
// 007b0068  50                   push eax
// 007b0069  89942484000000       mov dword ptr [esp + 0x84], edx
// 007b0070  8b17                 mov edx, dword ptr [edi]
// 007b0072  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 007b0078  6a00                 push 0
// 007b007a  6a00                 push 0
// 007b007c  8bcf                 mov ecx, edi
// 007b007e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 007b0089  ffd2                 call edx
// 007b008b  50                   push eax
// 007b008c  8b442474             mov eax, dword ptr [esp + 0x74]
// 007b0090  8b5038               mov edx, dword ptr [eax + 0x38]
// 007b0093  8bcd                 mov ecx, ebp
// 007b0095  ffd2                 call edx
// 007b0097  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b009b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007b009f  6a00                 push 0
// 007b00a1  6a00                 push 0
// 007b00a3  6a00                 push 0
// 007b00a5  6a01                 push 1
// 007b00a7  83ec10               sub esp, 0x10
// 007b00aa  8bc4                 mov eax, esp
// 007b00ac  8918                 mov dword ptr [eax], ebx
// 007b00ae  894804               mov dword ptr [eax + 4], ecx
// 007b00b1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b00b5  56                   push esi
// 007b00b6  895008               mov dword ptr [eax + 8], edx
// 007b00b9  55                   push ebp
// 007b00ba  8d54244c             lea edx, [esp + 0x4c]
// 007b00be  89480c               mov dword ptr [eax + 0xc], ecx
// 007b00c1  52                   push edx
// 007b00c2  8bcf                 mov ecx, edi
// 007b00c4  e8a7f1ffff           call 0x7af270
// 007b00c9  8d4c2414             lea ecx, [esp + 0x14]
// 007b00cd  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007b00d5  e846f60400           call 0x7ff720
// 007b00da  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b00de  c70000000000         mov dword ptr [eax], 0
// 007b00e4  c7400400000000       mov dword ptr [eax + 4], 0
// 007b00eb  e96a020000           jmp 0x7b035a
// 007b00f0  8b16                 mov edx, dword ptr [esi]
// 007b00f2  8b5258               mov edx, dword ptr [edx + 0x58]
// 007b00f5  33c9                 xor ecx, ecx
// 007b00f7  83f802               cmp eax, 2
// 007b00fa  0f94c1               sete cl
// 007b00fd  8d442474             lea eax, [esp + 0x74]
// 007b0101  50                   push eax
// 007b0102  894c247c             mov dword ptr [esp + 0x7c], ecx
// 007b0106  8bce                 mov ecx, esi
// 007b0108  ffd2                 call edx
// 007b010a  8d442474             lea eax, [esp + 0x74]
// 007b010e  50                   push eax
// 007b010f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 007b0117  e884d2ffff           call 0x7ad3a0
// 007b011c  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 007b0120  83c404               add esp, 4
// 007b0123  8d8fa4000000         lea ecx, [edi + 0xa4]
// 007b0129  51                   push ecx
// 007b012a  53                   push ebx
// 007b012b  8d4c2454             lea ecx, [esp + 0x54]
// 007b012f  e86cf50400           call 0x7ff6a0
// 007b0134  8baf14010000         mov ebp, dword ptr [edi + 0x114]
// 007b013a  c644246402           mov byte ptr [esp + 0x64], 2
// 007b013f  85ed                 test ebp, ebp
// 007b0141  7f44                 jg 0x7b0187
// 007b0143  8b4308               mov eax, dword ptr [ebx + 8]
// 007b0146  8b2d94a19e00         mov ebp, dword ptr [0x9ea194]
// 007b014c  8d542424             lea edx, [esp + 0x24]
// 007b0150  52                   push edx
// 007b0151  6a01                 push 1
// 007b0153  68e86ea000           push 0xa06ee8
// 007b0158  50                   push eax
// 007b0159  ffd5                 call ebp
// 007b015b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b015f  83c107               add ecx, 7
// 007b0162  83f914               cmp ecx, 0x14
// 007b0165  7d07                 jge 0x7b016e
// 007b0167  bd14000000           mov ebp, 0x14
// 007b016c  eb19                 jmp 0x7b0187
// 007b016e  8b4308               mov eax, dword ptr [ebx + 8]
// 007b0171  8d542424             lea edx, [esp + 0x24]
// 007b0175  52                   push edx
// 007b0176  6a01                 push 1
// 007b0178  68e86ea000           push 0xa06ee8
// 007b017d  50                   push eax
// 007b017e  ffd5                 call ebp
// 007b0180  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007b0184  83c507               add ebp, 7
// 007b0187  8b1dc8a29e00         mov ebx, dword ptr [0x9ea2c8]
// 007b018d  6a0e                 push 0xe
// 007b018f  6a09                 push 9
// 007b0191  55                   push ebp
// 007b0192  ffd3                 call ebx
// 007b0194  40                   inc eax
// 007b0195  83f80f               cmp eax, 0xf
// 007b0198  7d07                 jge 0x7b01a1
// 007b019a  b80f000000           mov eax, 0xf
// 007b019f  eb08                 jmp 0x7b01a9
// 007b01a1  6a0e                 push 0xe
// 007b01a3  6a09                 push 9
// 007b01a5  55                   push ebp
// 007b01a6  ffd3                 call ebx
// 007b01a8  40                   inc eax
// 007b01a9  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 007b01af  7410                 je 0x7b01c1
// 007b01b1  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 007b01b7  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 007b01c1  8d87f0000000         lea eax, [edi + 0xf0]
// 007b01c7  50                   push eax
// 007b01c8  8d4c2450             lea ecx, [esp + 0x50]
// 007b01cc  e84fe00400           call 0x7fe220
// 007b01d1  8b16                 mov edx, dword ptr [esi]
// 007b01d3  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007b01d9  8bce                 mov ecx, esi
// 007b01db  ffd0                 call eax
// 007b01dd  8bd8                 mov ebx, eax
// 007b01df  85db                 test ebx, ebx
// 007b01e1  7449                 je 0x7b022c
// 007b01e3  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 007b01ea  7540                 jne 0x7b022c
// 007b01ec  8b542470             mov edx, dword ptr [esp + 0x70]
// 007b01f0  8b4208               mov eax, dword ptr [edx + 8]
// 007b01f3  8d4c2424             lea ecx, [esp + 0x24]
// 007b01f7  51                   push ecx
// 007b01f8  6a01                 push 1
// 007b01fa  68e86ea000           push 0xa06ee8
// 007b01ff  50                   push eax
// 007b0200  ff1594a19e00         call dword ptr [0x9ea194]
// 007b0206  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b020a  83c107               add ecx, 7
// 007b020d  3be9                 cmp ebp, ecx
// 007b020f  7f1b                 jg 0x7b022c
// 007b0211  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b0215  6a01                 push 1
// 007b0217  68e86ea000           push 0xa06ee8
// 007b021c  8d54241c             lea edx, [esp + 0x1c]
// 007b0220  52                   push edx
// 007b0221  e8fadaffff           call 0x7add20
// 007b0226  8b6804               mov ebp, dword ptr [eax + 4]
// 007b0229  83c507               add ebp, 7
// 007b022c  8d442424             lea eax, [esp + 0x24]
// 007b0230  50                   push eax
// 007b0231  8d4c2478             lea ecx, [esp + 0x78]
// 007b0235  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b023b  50                   push eax
// 007b023c  8d4c247c             lea ecx, [esp + 0x7c]
// 007b0240  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b0246  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007b024a  8b5108               mov edx, dword ptr [ecx + 8]
// 007b024d  50                   push eax
// 007b024e  52                   push edx
// 007b024f  ff1594a19e00         call dword ptr [0x9ea194]
// 007b0255  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b0259  83c005               add eax, 5
// 007b025c  837c247800           cmp dword ptr [esp + 0x78], 0
// 007b0261  89442470             mov dword ptr [esp + 0x70], eax
// 007b0265  744b                 je 0x7b02b2
// 007b0267  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007b026d  8b17                 mov edx, dword ptr [edi]
// 007b026f  50                   push eax
// 007b0270  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007b0276  8bcf                 mov ecx, edi
// 007b0278  ffd0                 call eax
// 007b027a  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 007b0280  03f8                 add edi, eax
// 007b0282  037c2470             add edi, dword ptr [esp + 0x70]
// 007b0286  39bea0010000         cmp dword ptr [esi + 0x1a0], edi
// 007b028c  7410                 je 0x7b029e
// 007b028e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 007b0294  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 007b029e  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 007b02a4  8d0c06               lea ecx, [esi + eax]
// 007b02a7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007b02ab  890e                 mov dword ptr [esi], ecx
// 007b02ad  e98b000000           jmp 0x7b033d
// 007b02b2  8bce                 mov ecx, esi
// 007b02b4  e837e60800           call 0x83e8f0
// 007b02b9  8bf8                 mov edi, eax
// 007b02bb  85ff                 test edi, edi
// 007b02bd  7418                 je 0x7b02d7
// 007b02bf  8b16                 mov edx, dword ptr [esi]
// 007b02c1  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007b02c7  8d442424             lea eax, [esp + 0x24]
// 007b02cb  50                   push eax
// 007b02cc  8bce                 mov ecx, esi
// 007b02ce  ffd2                 call edx
// 007b02d0  8b00                 mov eax, dword ptr [eax]
// 007b02d2  83c004               add eax, 4
// 007b02d5  eb02                 jmp 0x7b02d9
// 007b02d7  33c0                 xor eax, eax
// 007b02d9  f7db                 neg ebx
// 007b02db  1bdb                 sbb ebx, ebx
// 007b02dd  235c2470             and ebx, dword ptr [esp + 0x70]
// 007b02e1  03d8                 add ebx, eax
// 007b02e3  85ff                 test edi, edi
// 007b02e5  7432                 je 0x7b0319
// 007b02e7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007b02ed  8b01                 mov eax, dword ptr [ecx]
// 007b02ef  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 007b02f5  8d54242c             lea edx, [esp + 0x2c]
// 007b02f9  52                   push edx
// 007b02fa  ffd0                 call eax
// 007b02fc  3b6804               cmp ebp, dword ptr [eax + 4]
// 007b02ff  7f18                 jg 0x7b0319
// 007b0301  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007b0307  8b11                 mov edx, dword ptr [ecx]
// 007b0309  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 007b030f  8d44243c             lea eax, [esp + 0x3c]
// 007b0313  50                   push eax
// 007b0314  ffd2                 call edx
// 007b0316  8b6804               mov ebp, dword ptr [eax + 4]
// 007b0319  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 007b031f  7410                 je 0x7b0331
// 007b0321  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 007b0327  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 007b0331  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 007b0337  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007b033b  8906                 mov dword ptr [esi], eax
// 007b033d  8d4c244c             lea ecx, [esp + 0x4c]
// 007b0341  896e04               mov dword ptr [esi + 4], ebp
// 007b0344  c644246401           mov byte ptr [esp + 0x64], 1
// 007b0349  e8d2f30400           call 0x7ff720
// 007b034e  8d4c2474             lea ecx, [esp + 0x74]
// 007b0352  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b0358  8bc6                 mov eax, esi
// 007b035a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007b035e  64890d00000000       mov dword ptr fs:[0], ecx
// 007b0365  59                   pop ecx
// 007b0366  5f                   pop edi
// 007b0367  5e                   pop esi
// 007b0368  5d                   pop ebp
// 007b0369  5b                   pop ebx
// 007b036a  83c454               add esp, 0x54
// 007b036d  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp