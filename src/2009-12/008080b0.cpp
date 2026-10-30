// roc 2009-12 008080b0  unit: CXTPCommandBar  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008080b0
//
// 008080b0  55                   push ebp
// 008080b1  56                   push esi
// 008080b2  8bf1                 mov esi, ecx
// 008080b4  e817c4ffff           call 0x8044d0
// 008080b9  8be8                 mov ebp, eax
// 008080bb  85ed                 test ebp, ebp
// 008080bd  7410                 je 0x8080cf
// 008080bf  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 008080c3  740a                 je 0x8080cf
// 008080c5  5e                   pop esi
// 008080c6  b802000000           mov eax, 2
// 008080cb  5d                   pop ebp
// 008080cc  c20800               ret 8
// 008080cf  8bce                 mov ecx, esi
// 008080d1  e8baffffff           call 0x808090
// 008080d6  85c0                 test eax, eax
// 008080d8  75eb                 jne 0x8080c5
// 008080da  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 008080e0  7e0a                 jle 0x8080ec
// 008080e2  5e                   pop esi
// 008080e3  b801000000           mov eax, 1
// 008080e8  5d                   pop ebp
// 008080e9  c20800               ret 8
// 008080ec  8d4604               lea eax, [esi + 4]
// 008080ef  50                   push eax
// 008080f0  ff150cb29800         call dword ptr [0x98b20c]
// 008080f6  8bce                 mov ecx, esi
// 008080f8  e893efffff           call 0x807090
// 008080fd  8b5020               mov edx, dword ptr [eax + 0x20]
// 00808100  56                   push esi
// 00808101  8d4c2410             lea ecx, [esp + 0x10]
// 00808105  51                   push ecx
// 00808106  685a280000           push 0x285a
// 0080810b  52                   push edx
// 0080810c  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00808112  8bce                 mov ecx, esi
// 00808114  e8c3bcfeff           call 0x7f3ddc
// 00808119  85c0                 test eax, eax
// 0080811b  74c5                 je 0x8080e2
// 0080811d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00808123  57                   push edi
// 00808124  50                   push eax
// 00808125  8bce                 mov ecx, esi
// 00808127  e834d1ffff           call 0x805260
// 0080812c  8bf8                 mov edi, eax
// 0080812e  85ff                 test edi, edi
// 00808130  7435                 je 0x808167
// 00808132  8b17                 mov edx, dword ptr [edi]
// 00808134  8b4274               mov eax, dword ptr [edx + 0x74]
// 00808137  8bcf                 mov ecx, edi
// 00808139  ffd0                 call eax
// 0080813b  85c0                 test eax, eax
// 0080813d  7428                 je 0x808167
// 0080813f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00808143  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00808147  8b17                 mov edx, dword ptr [edi]
// 00808149  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0080814f  50                   push eax
// 00808150  51                   push ecx
// 00808151  8bcf                 mov ecx, edi
// 00808153  ffd2                 call edx
// 00808155  83f801               cmp eax, 1
// 00808158  0f84cc000000         je 0x80822a
// 0080815e  83f802               cmp eax, 2
// 00808161  0f84c3000000         je 0x80822a
// 00808167  837e2000             cmp dword ptr [esi + 0x20], 0
// 0080816b  0f8452030000         je 0x8084c3
// 00808171  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808175  83c0f7               add eax, -9
// 00808178  83f817               cmp eax, 0x17
// 0080817b  0f8716010000         ja 0x808297
// 00808181  0fb680e4848000       movzx eax, byte ptr [eax + 0x8084e4]
// 00808188  ff2485d0848000       jmp dword ptr [eax*4 + 0x8084d0]
// 0080818f  53                   push ebx
// 00808190  8b1d30cc9800         mov ebx, dword ptr [0x98cc30]
// 00808196  6a11                 push 0x11
// 00808198  ffd3                 call ebx
// 0080819a  6685c0               test ax, ax
// 0080819d  7d3d                 jge 0x8081dc
// 0080819f  85ed                 test ebp, ebp
// 008081a1  7439                 je 0x8081dc
// 008081a3  8bce                 mov ecx, esi
// 008081a5  e8f6c2ffff           call 0x8044a0
// 008081aa  8bf8                 mov edi, eax
// 008081ac  57                   push edi
// 008081ad  e88e8f0000           call 0x811140
// 008081b2  50                   push eax
// 008081b3  e886bafeff           call 0x7f3c3e
// 008081b8  83c408               add esp, 8
// 008081bb  85c0                 test eax, eax
// 008081bd  741d                 je 0x8081dc
// 008081bf  6a10                 push 0x10
// 008081c1  ffd3                 call ebx
// 008081c3  33c9                 xor ecx, ecx
// 008081c5  6685c0               test ax, ax
// 008081c8  0f9dc1               setge cl
// 008081cb  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 008081cf  51                   push ecx
// 008081d0  57                   push edi
// 008081d1  8bcd                 mov ecx, ebp
// 008081d3  e838ea0000           call 0x816c10
// 008081d8  85c0                 test eax, eax
// 008081da  7548                 jne 0x808224
// 008081dc  8b3e                 mov edi, dword ptr [esi]
// 008081de  6a10                 push 0x10
// 008081e0  ffd3                 call ebx
// 008081e2  33d2                 xor edx, edx
// 008081e4  6685c0               test ax, ax
// 008081e7  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 008081ed  0f9cc2               setl dl
// 008081f0  8bce                 mov ecx, esi
// 008081f2  52                   push edx
// 008081f3  ffd0                 call eax
// 008081f5  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008081fb  51                   push ecx
// 008081fc  8bce                 mov ecx, esi
// 008081fe  e85dd0ffff           call 0x805260
// 00808203  8bf0                 mov esi, eax
// 00808205  85f6                 test esi, esi
// 00808207  741b                 je 0x808224
// 00808209  8b16                 mov edx, dword ptr [esi]
// 0080820b  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00808211  8bce                 mov ecx, esi
// 00808213  ffd0                 call eax
// 00808215  85c0                 test eax, eax
// 00808217  740b                 je 0x808224
// 00808219  8b16                 mov edx, dword ptr [esi]
// 0080821b  8b4270               mov eax, dword ptr [edx + 0x70]
// 0080821e  6a01                 push 1
// 00808220  8bce                 mov ecx, esi
// 00808222  ffd0                 call eax
// 00808224  b801000000           mov eax, 1
// 00808229  5b                   pop ebx
// 0080822a  5f                   pop edi
// 0080822b  5e                   pop esi
// 0080822c  5d                   pop ebp
// 0080822d  c20800               ret 8
// 00808230  8b16                 mov edx, dword ptr [esi]
// 00808232  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00808238  6a05                 push 5
// 0080823a  8bce                 mov ecx, esi
// 0080823c  ffd0                 call eax
// 0080823e  5f                   pop edi
// 0080823f  5e                   pop esi
// 00808240  5d                   pop ebp
// 00808241  c20800               ret 8
// 00808244  8b16                 mov edx, dword ptr [esi]
// 00808246  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 0080824c  6a04                 push 4
// 0080824e  8bce                 mov ecx, esi
// 00808250  ffd0                 call eax
// 00808252  5f                   pop edi
// 00808253  5e                   pop esi
// 00808254  5d                   pop ebp
// 00808255  c20800               ret 8
// 00808258  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 0080825f  7536                 jne 0x808297
// 00808261  8bce                 mov ecx, esi
// 00808263  e868c2ffff           call 0x8044d0
// 00808268  8bc8                 mov ecx, eax
// 0080826a  e871dc0000           call 0x815ee0
// 0080826f  8bce                 mov ecx, esi
// 00808271  e81aeeffff           call 0x807090
// 00808276  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00808279  6a20                 push 0x20
// 0080827b  6800f10000           push 0xf100
// 00808280  6812010000           push 0x112
// 00808285  51                   push ecx
// 00808286  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0080828c  5f                   pop edi
// 0080828d  5e                   pop esi
// 0080828e  b801000000           mov eax, 1
// 00808293  5d                   pop ebp
// 00808294  c20800               ret 8
// 00808297  8b3deccb9800         mov edi, dword ptr [0x98cbec]
// 0080829d  ffd7                 call edi
// 0080829f  85c0                 test eax, eax
// 008082a1  741c                 je 0x8082bf
// 008082a3  ffd7                 call edi
// 008082a5  8b5620               mov edx, dword ptr [esi + 0x20]
// 008082a8  50                   push eax
// 008082a9  52                   push edx
// 008082aa  ff15f4ca9800         call dword ptr [0x98caf4]
// 008082b0  85c0                 test eax, eax
// 008082b2  740b                 je 0x8082bf
// 008082b4  5f                   pop edi
// 008082b5  5e                   pop esi
// 008082b6  b802000000           mov eax, 2
// 008082bb  5d                   pop ebp
// 008082bc  c20800               ret 8
// 008082bf  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008082c5  85c0                 test eax, eax
// 008082c7  741c                 je 0x8082e5
// 008082c9  83f801               cmp eax, 1
// 008082cc  7417                 je 0x8082e5
// 008082ce  83f804               cmp eax, 4
// 008082d1  7412                 je 0x8082e5
// 008082d3  83f805               cmp eax, 5
// 008082d6  7509                 jne 0x8082e1
// 008082d8  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 008082df  7404                 je 0x8082e5
// 008082e1  33ff                 xor edi, edi
// 008082e3  eb05                 jmp 0x8082ea
// 008082e5  bf01000000           mov edi, 1
// 008082ea  8bce                 mov ecx, esi
// 008082ec  e88fc4ffff           call 0x804780
// 008082f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008082f5  8d4add               lea ecx, [edx - 0x23]
// 008082f8  83f905               cmp ecx, 5
// 008082fb  0f87dd000000         ja 0x8083de
// 00808301  ff248dfc848000       jmp dword ptr [ecx*4 + 0x8084fc]
// 00808308  85ff                 test edi, edi
// 0080830a  741c                 je 0x808328
// 0080830c  8b16                 mov edx, dword ptr [esi]
// 0080830e  33c9                 xor ecx, ecx
// 00808310  85c0                 test eax, eax
// 00808312  0f94c1               sete cl
// 00808315  8bc1                 mov eax, ecx
// 00808317  50                   push eax
// 00808318  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 0080831e  8bce                 mov ecx, esi
// 00808320  ffd0                 call eax
// 00808322  5f                   pop edi
// 00808323  5e                   pop esi
// 00808324  5d                   pop ebp
// 00808325  c20800               ret 8
// 00808328  33d2                 xor edx, edx
// 0080832a  85c0                 test eax, eax
// 0080832c  0f95c2               setne dl
// 0080832f  8bce                 mov ecx, esi
// 00808331  83c202               add edx, 2
// 00808334  8bc2                 mov eax, edx
// 00808336  8b16                 mov edx, dword ptr [esi]
// 00808338  50                   push eax
// 00808339  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 0080833f  ffd0                 call eax
// 00808341  5f                   pop edi
// 00808342  5e                   pop esi
// 00808343  5d                   pop ebp
// 00808344  c20800               ret 8
// 00808347  85ff                 test edi, edi
// 00808349  741c                 je 0x808367
// 0080834b  8b16                 mov edx, dword ptr [esi]
// 0080834d  33c9                 xor ecx, ecx
// 0080834f  85c0                 test eax, eax
// 00808351  0f95c1               setne cl
// 00808354  8bc1                 mov eax, ecx
// 00808356  50                   push eax
// 00808357  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 0080835d  8bce                 mov ecx, esi
// 0080835f  ffd0                 call eax
// 00808361  5f                   pop edi
// 00808362  5e                   pop esi
// 00808363  5d                   pop ebp
// 00808364  c20800               ret 8
// 00808367  8b16                 mov edx, dword ptr [esi]
// 00808369  f7d8                 neg eax
// 0080836b  1bc0                 sbb eax, eax
// 0080836d  83c003               add eax, 3
// 00808370  50                   push eax
// 00808371  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 00808377  8bce                 mov ecx, esi
// 00808379  ffd0                 call eax
// 0080837b  5f                   pop edi
// 0080837c  5e                   pop esi
// 0080837d  5d                   pop ebp
// 0080837e  c20800               ret 8
// 00808381  8b16                 mov edx, dword ptr [esi]
// 00808383  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 00808389  33c0                 xor eax, eax
// 0080838b  85ff                 test edi, edi
// 0080838d  0f95c0               setne al
// 00808390  8bce                 mov ecx, esi
// 00808392  40                   inc eax
// 00808393  50                   push eax
// 00808394  ffd2                 call edx
// 00808396  5f                   pop edi
// 00808397  5e                   pop esi
// 00808398  5d                   pop ebp
// 00808399  c20800               ret 8
// 0080839c  8b06                 mov eax, dword ptr [esi]
// 0080839e  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 008083a4  f7df                 neg edi
// 008083a6  1bff                 sbb edi, edi
// 008083a8  83e703               and edi, 3
// 008083ab  57                   push edi
// 008083ac  8bce                 mov ecx, esi
// 008083ae  ffd2                 call edx
// 008083b0  5f                   pop edi
// 008083b1  5e                   pop esi
// 008083b2  5d                   pop ebp
// 008083b3  c20800               ret 8
// 008083b6  8b06                 mov eax, dword ptr [esi]
// 008083b8  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 008083be  6a06                 push 6
// 008083c0  8bce                 mov ecx, esi
// 008083c2  ffd2                 call edx
// 008083c4  5f                   pop edi
// 008083c5  5e                   pop esi
// 008083c6  5d                   pop ebp
// 008083c7  c20800               ret 8
// 008083ca  8b06                 mov eax, dword ptr [esi]
// 008083cc  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 008083d2  6a07                 push 7
// 008083d4  8bce                 mov ecx, esi
// 008083d6  ffd2                 call edx
// 008083d8  5f                   pop edi
// 008083d9  5e                   pop esi
// 008083da  5d                   pop ebp
// 008083db  c20800               ret 8
// 008083de  85d2                 test edx, edx
// 008083e0  0f84dd000000         je 0x8084c3
// 008083e6  6a02                 push 2
// 008083e8  52                   push edx
// 008083e9  ff15fcc99800         call dword ptr [0x98c9fc]
// 008083ef  85c0                 test eax, eax
// 008083f1  0f84cc000000         je 0x8084c3
// 008083f7  8bce                 mov ecx, esi
// 008083f9  e882bf0000           call 0x814380
// 008083fe  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 00808404  85c0                 test eax, eax
// 00808406  7420                 je 0x808428
// 00808408  6a11                 push 0x11
// 0080840a  ffd7                 call edi
// 0080840c  6685c0               test ax, ax
// 0080840f  7c17                 jl 0x808428
// 00808411  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808415  50                   push eax
// 00808416  8bce                 mov ecx, esi
// 00808418  e8c3e7ffff           call 0x806be0
// 0080841d  5f                   pop edi
// 0080841e  5e                   pop esi
// 0080841f  b801000000           mov eax, 1
// 00808424  5d                   pop ebp
// 00808425  c20800               ret 8
// 00808428  85ed                 test ebp, ebp
// 0080842a  7423                 je 0x80844f
// 0080842c  56                   push esi
// 0080842d  e80e8d0000           call 0x811140
// 00808432  50                   push eax
// 00808433  e806b8feff           call 0x7f3c3e
// 00808438  83c408               add esp, 8
// 0080843b  85c0                 test eax, eax
// 0080843d  7410                 je 0x80844f
// 0080843f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00808443  51                   push ecx
// 00808444  8bcd                 mov ecx, ebp
// 00808446  e8c5da0000           call 0x815f10
// 0080844b  85c0                 test eax, eax
// 0080844d  7574                 jne 0x8084c3
// 0080844f  6a11                 push 0x11
// 00808451  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00808459  ffd7                 call edi
// 0080845b  6685c0               test ax, ax
// 0080845e  7c4d                 jl 0x8084ad
// 00808460  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808464  8d542414             lea edx, [esp + 0x14]
// 00808468  52                   push edx
// 00808469  50                   push eax
// 0080846a  8bce                 mov ecx, esi
// 0080846c  e8dfd1ffff           call 0x805650
// 00808471  8bf8                 mov edi, eax
// 00808473  83ffff               cmp edi, -1
// 00808476  7435                 je 0x8084ad
// 00808478  8b16                 mov edx, dword ptr [esi]
// 0080847a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00808480  6a02                 push 2
// 00808482  57                   push edi
// 00808483  8bce                 mov ecx, esi
// 00808485  ffd0                 call eax
// 00808487  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080848c  7514                 jne 0x8084a2
// 0080848e  57                   push edi
// 0080848f  8bce                 mov ecx, esi
// 00808491  e8cacdffff           call 0x805260
// 00808496  8b10                 mov edx, dword ptr [eax]
// 00808498  8bc8                 mov ecx, eax
// 0080849a  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008084a0  ffd0                 call eax
// 008084a2  5f                   pop edi
// 008084a3  5e                   pop esi
// 008084a4  b801000000           mov eax, 1
// 008084a9  5d                   pop ebp
// 008084aa  c20800               ret 8
// 008084ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 008084b1  83f810               cmp eax, 0x10
// 008084b4  740d                 je 0x8084c3
// 008084b6  83f811               cmp eax, 0x11
// 008084b9  7408                 je 0x8084c3
// 008084bb  6a00                 push 0
// 008084bd  ff153cca9800         call dword ptr [0x98ca3c]
// 008084c3  5f                   pop edi
// 008084c4  5e                   pop esi
// 008084c5  b801000000           mov eax, 1
// 008084ca  5d                   pop ebp
// 008084cb  c20800               ret 8
// 008084ce  8bff                 mov edi, edi
// 008084d0  8f8180003082         pop dword ptr [ecx - 0x7dcfff80]
// 008084d6  800044               add byte ptr [eax], 0x44
// 008084d9  82800058828000       add byte ptr [eax - 0x7f7da800], 0
// 008084e0  97                   xchg edi, eax
// 008084e1  82800000040404       add byte ptr [eax + 0x4040000], 4
// 008084e8  010404               add dword ptr [esp + eax], eax
// 008084eb  0404                 add al, 4
// 008084ed  0404                 add al, 4
// 008084ef  0404                 add al, 4
// 008084f1  0404                 add al, 4
// 008084f3  0404                 add al, 4
// 008084f5  0402                 add al, 2
// 008084f7  0404                 add al, 4
// 008084f9  0404                 add al, 4
// 008084fb  03ca                 add ecx, edx
// 008084fd  838000b6838000       add dword ptr [eax - 0x7f7c4a00], 0
// 00808504  088380008183         or byte ptr [ebx - 0x7c7eff80], al
// 0080850a  800047               add byte ptr [eax], 0x47
// 0080850d  8380009c838000       add dword ptr [eax - 0x7f7c6400], 0
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPCommandBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp