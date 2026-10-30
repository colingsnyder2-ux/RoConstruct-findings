// roc 2009-06 00730f30  unit: CXTPCommandBar  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00730f30
//
// 00730f30  55                   push ebp
// 00730f31  56                   push esi
// 00730f32  8bf1                 mov esi, ecx
// 00730f34  e857c4ffff           call 0x72d390
// 00730f39  8be8                 mov ebp, eax
// 00730f3b  85ed                 test ebp, ebp
// 00730f3d  7410                 je 0x730f4f
// 00730f3f  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 00730f43  740a                 je 0x730f4f
// 00730f45  5e                   pop esi
// 00730f46  b802000000           mov eax, 2
// 00730f4b  5d                   pop ebp
// 00730f4c  c20800               ret 8
// 00730f4f  8bce                 mov ecx, esi
// 00730f51  e8baffffff           call 0x730f10
// 00730f56  85c0                 test eax, eax
// 00730f58  75eb                 jne 0x730f45
// 00730f5a  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 00730f60  7e0a                 jle 0x730f6c
// 00730f62  5e                   pop esi
// 00730f63  b801000000           mov eax, 1
// 00730f68  5d                   pop ebp
// 00730f69  c20800               ret 8
// 00730f6c  8d4604               lea eax, [esi + 4]
// 00730f6f  50                   push eax
// 00730f70  ff15d0e18900         call dword ptr [0x89e1d0]
// 00730f76  8bce                 mov ecx, esi
// 00730f78  e8b3efffff           call 0x72ff30
// 00730f7d  8b5020               mov edx, dword ptr [eax + 0x20]
// 00730f80  56                   push esi
// 00730f81  8d4c2410             lea ecx, [esp + 0x10]
// 00730f85  51                   push ecx
// 00730f86  685a280000           push 0x285a
// 00730f8b  52                   push edx
// 00730f8c  ff1590ee8900         call dword ptr [0x89ee90]
// 00730f92  8bce                 mov ecx, esi
// 00730f94  e80f80feff           call 0x718fa8
// 00730f99  85c0                 test eax, eax
// 00730f9b  74c5                 je 0x730f62
// 00730f9d  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00730fa3  57                   push edi
// 00730fa4  50                   push eax
// 00730fa5  8bce                 mov ecx, esi
// 00730fa7  e874d1ffff           call 0x72e120
// 00730fac  8bf8                 mov edi, eax
// 00730fae  85ff                 test edi, edi
// 00730fb0  7435                 je 0x730fe7
// 00730fb2  8b17                 mov edx, dword ptr [edi]
// 00730fb4  8b4274               mov eax, dword ptr [edx + 0x74]
// 00730fb7  8bcf                 mov ecx, edi
// 00730fb9  ffd0                 call eax
// 00730fbb  85c0                 test eax, eax
// 00730fbd  7428                 je 0x730fe7
// 00730fbf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00730fc3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00730fc7  8b17                 mov edx, dword ptr [edi]
// 00730fc9  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00730fcf  50                   push eax
// 00730fd0  51                   push ecx
// 00730fd1  8bcf                 mov ecx, edi
// 00730fd3  ffd2                 call edx
// 00730fd5  83f801               cmp eax, 1
// 00730fd8  0f84cc000000         je 0x7310aa
// 00730fde  83f802               cmp eax, 2
// 00730fe1  0f84c3000000         je 0x7310aa
// 00730fe7  837e2000             cmp dword ptr [esi + 0x20], 0
// 00730feb  0f8452030000         je 0x731343
// 00730ff1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00730ff5  83c0f7               add eax, -9
// 00730ff8  83f817               cmp eax, 0x17
// 00730ffb  0f8716010000         ja 0x731117
// 00731001  0fb68064137300       movzx eax, byte ptr [eax + 0x731364]
// 00731008  ff248550137300       jmp dword ptr [eax*4 + 0x731350]
// 0073100f  53                   push ebx
// 00731010  8b1d34ee8900         mov ebx, dword ptr [0x89ee34]
// 00731016  6a11                 push 0x11
// 00731018  ffd3                 call ebx
// 0073101a  6685c0               test ax, ax
// 0073101d  7d3d                 jge 0x73105c
// 0073101f  85ed                 test ebp, ebp
// 00731021  7439                 je 0x73105c
// 00731023  8bce                 mov ecx, esi
// 00731025  e836c3ffff           call 0x72d360
// 0073102a  8bf8                 mov edi, eax
// 0073102c  57                   push edi
// 0073102d  e81e900000           call 0x73a050
// 00731032  50                   push eax
// 00731033  e88e7ffeff           call 0x718fc6
// 00731038  83c408               add esp, 8
// 0073103b  85c0                 test eax, eax
// 0073103d  741d                 je 0x73105c
// 0073103f  6a10                 push 0x10
// 00731041  ffd3                 call ebx
// 00731043  33c9                 xor ecx, ecx
// 00731045  6685c0               test ax, ax
// 00731048  0f9dc1               setge cl
// 0073104b  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0073104f  51                   push ecx
// 00731050  57                   push edi
// 00731051  8bcd                 mov ecx, ebp
// 00731053  e808afffff           call 0x72bf60
// 00731058  85c0                 test eax, eax
// 0073105a  7548                 jne 0x7310a4
// 0073105c  8b3e                 mov edi, dword ptr [esi]
// 0073105e  6a10                 push 0x10
// 00731060  ffd3                 call ebx
// 00731062  33d2                 xor edx, edx
// 00731064  6685c0               test ax, ax
// 00731067  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 0073106d  0f9cc2               setl dl
// 00731070  8bce                 mov ecx, esi
// 00731072  52                   push edx
// 00731073  ffd0                 call eax
// 00731075  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0073107b  51                   push ecx
// 0073107c  8bce                 mov ecx, esi
// 0073107e  e89dd0ffff           call 0x72e120
// 00731083  8bf0                 mov esi, eax
// 00731085  85f6                 test esi, esi
// 00731087  741b                 je 0x7310a4
// 00731089  8b16                 mov edx, dword ptr [esi]
// 0073108b  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00731091  8bce                 mov ecx, esi
// 00731093  ffd0                 call eax
// 00731095  85c0                 test eax, eax
// 00731097  740b                 je 0x7310a4
// 00731099  8b16                 mov edx, dword ptr [esi]
// 0073109b  8b4270               mov eax, dword ptr [edx + 0x70]
// 0073109e  6a01                 push 1
// 007310a0  8bce                 mov ecx, esi
// 007310a2  ffd0                 call eax
// 007310a4  b801000000           mov eax, 1
// 007310a9  5b                   pop ebx
// 007310aa  5f                   pop edi
// 007310ab  5e                   pop esi
// 007310ac  5d                   pop ebp
// 007310ad  c20800               ret 8
// 007310b0  8b16                 mov edx, dword ptr [esi]
// 007310b2  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007310b8  6a05                 push 5
// 007310ba  8bce                 mov ecx, esi
// 007310bc  ffd0                 call eax
// 007310be  5f                   pop edi
// 007310bf  5e                   pop esi
// 007310c0  5d                   pop ebp
// 007310c1  c20800               ret 8
// 007310c4  8b16                 mov edx, dword ptr [esi]
// 007310c6  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007310cc  6a04                 push 4
// 007310ce  8bce                 mov ecx, esi
// 007310d0  ffd0                 call eax
// 007310d2  5f                   pop edi
// 007310d3  5e                   pop esi
// 007310d4  5d                   pop ebp
// 007310d5  c20800               ret 8
// 007310d8  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 007310df  7536                 jne 0x731117
// 007310e1  8bce                 mov ecx, esi
// 007310e3  e8a8c2ffff           call 0x72d390
// 007310e8  8bc8                 mov ecx, eax
// 007310ea  e841a1ffff           call 0x72b230
// 007310ef  8bce                 mov ecx, esi
// 007310f1  e83aeeffff           call 0x72ff30
// 007310f6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007310f9  6a20                 push 0x20
// 007310fb  6800f10000           push 0xf100
// 00731100  6812010000           push 0x112
// 00731105  51                   push ecx
// 00731106  ff159cee8900         call dword ptr [0x89ee9c]
// 0073110c  5f                   pop edi
// 0073110d  5e                   pop esi
// 0073110e  b801000000           mov eax, 1
// 00731113  5d                   pop ebp
// 00731114  c20800               ret 8
// 00731117  8b3d78ee8900         mov edi, dword ptr [0x89ee78]
// 0073111d  ffd7                 call edi
// 0073111f  85c0                 test eax, eax
// 00731121  741c                 je 0x73113f
// 00731123  ffd7                 call edi
// 00731125  8b5620               mov edx, dword ptr [esi + 0x20]
// 00731128  50                   push eax
// 00731129  52                   push edx
// 0073112a  ff1508ef8900         call dword ptr [0x89ef08]
// 00731130  85c0                 test eax, eax
// 00731132  740b                 je 0x73113f
// 00731134  5f                   pop edi
// 00731135  5e                   pop esi
// 00731136  b802000000           mov eax, 2
// 0073113b  5d                   pop ebp
// 0073113c  c20800               ret 8
// 0073113f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00731145  85c0                 test eax, eax
// 00731147  741c                 je 0x731165
// 00731149  83f801               cmp eax, 1
// 0073114c  7417                 je 0x731165
// 0073114e  83f804               cmp eax, 4
// 00731151  7412                 je 0x731165
// 00731153  83f805               cmp eax, 5
// 00731156  7509                 jne 0x731161
// 00731158  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 0073115f  7404                 je 0x731165
// 00731161  33ff                 xor edi, edi
// 00731163  eb05                 jmp 0x73116a
// 00731165  bf01000000           mov edi, 1
// 0073116a  8bce                 mov ecx, esi
// 0073116c  e8cfc4ffff           call 0x72d640
// 00731171  8b542410             mov edx, dword ptr [esp + 0x10]
// 00731175  8d4add               lea ecx, [edx - 0x23]
// 00731178  83f905               cmp ecx, 5
// 0073117b  0f87dd000000         ja 0x73125e
// 00731181  ff248d7c137300       jmp dword ptr [ecx*4 + 0x73137c]
// 00731188  85ff                 test edi, edi
// 0073118a  741c                 je 0x7311a8
// 0073118c  8b16                 mov edx, dword ptr [esi]
// 0073118e  33c9                 xor ecx, ecx
// 00731190  85c0                 test eax, eax
// 00731192  0f94c1               sete cl
// 00731195  8bc1                 mov eax, ecx
// 00731197  50                   push eax
// 00731198  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 0073119e  8bce                 mov ecx, esi
// 007311a0  ffd0                 call eax
// 007311a2  5f                   pop edi
// 007311a3  5e                   pop esi
// 007311a4  5d                   pop ebp
// 007311a5  c20800               ret 8
// 007311a8  33d2                 xor edx, edx
// 007311aa  85c0                 test eax, eax
// 007311ac  0f95c2               setne dl
// 007311af  8bce                 mov ecx, esi
// 007311b1  83c202               add edx, 2
// 007311b4  8bc2                 mov eax, edx
// 007311b6  8b16                 mov edx, dword ptr [esi]
// 007311b8  50                   push eax
// 007311b9  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007311bf  ffd0                 call eax
// 007311c1  5f                   pop edi
// 007311c2  5e                   pop esi
// 007311c3  5d                   pop ebp
// 007311c4  c20800               ret 8
// 007311c7  85ff                 test edi, edi
// 007311c9  741c                 je 0x7311e7
// 007311cb  8b16                 mov edx, dword ptr [esi]
// 007311cd  33c9                 xor ecx, ecx
// 007311cf  85c0                 test eax, eax
// 007311d1  0f95c1               setne cl
// 007311d4  8bc1                 mov eax, ecx
// 007311d6  50                   push eax
// 007311d7  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007311dd  8bce                 mov ecx, esi
// 007311df  ffd0                 call eax
// 007311e1  5f                   pop edi
// 007311e2  5e                   pop esi
// 007311e3  5d                   pop ebp
// 007311e4  c20800               ret 8
// 007311e7  8b16                 mov edx, dword ptr [esi]
// 007311e9  f7d8                 neg eax
// 007311eb  1bc0                 sbb eax, eax
// 007311ed  83c003               add eax, 3
// 007311f0  50                   push eax
// 007311f1  8b82d4010000         mov eax, dword ptr [edx + 0x1d4]
// 007311f7  8bce                 mov ecx, esi
// 007311f9  ffd0                 call eax
// 007311fb  5f                   pop edi
// 007311fc  5e                   pop esi
// 007311fd  5d                   pop ebp
// 007311fe  c20800               ret 8
// 00731201  8b16                 mov edx, dword ptr [esi]
// 00731203  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 00731209  33c0                 xor eax, eax
// 0073120b  85ff                 test edi, edi
// 0073120d  0f95c0               setne al
// 00731210  8bce                 mov ecx, esi
// 00731212  40                   inc eax
// 00731213  50                   push eax
// 00731214  ffd2                 call edx
// 00731216  5f                   pop edi
// 00731217  5e                   pop esi
// 00731218  5d                   pop ebp
// 00731219  c20800               ret 8
// 0073121c  8b06                 mov eax, dword ptr [esi]
// 0073121e  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00731224  f7df                 neg edi
// 00731226  1bff                 sbb edi, edi
// 00731228  83e703               and edi, 3
// 0073122b  57                   push edi
// 0073122c  8bce                 mov ecx, esi
// 0073122e  ffd2                 call edx
// 00731230  5f                   pop edi
// 00731231  5e                   pop esi
// 00731232  5d                   pop ebp
// 00731233  c20800               ret 8
// 00731236  8b06                 mov eax, dword ptr [esi]
// 00731238  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 0073123e  6a06                 push 6
// 00731240  8bce                 mov ecx, esi
// 00731242  ffd2                 call edx
// 00731244  5f                   pop edi
// 00731245  5e                   pop esi
// 00731246  5d                   pop ebp
// 00731247  c20800               ret 8
// 0073124a  8b06                 mov eax, dword ptr [esi]
// 0073124c  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00731252  6a07                 push 7
// 00731254  8bce                 mov ecx, esi
// 00731256  ffd2                 call edx
// 00731258  5f                   pop edi
// 00731259  5e                   pop esi
// 0073125a  5d                   pop ebp
// 0073125b  c20800               ret 8
// 0073125e  85d2                 test edx, edx
// 00731260  0f84dd000000         je 0x731343
// 00731266  6a02                 push 2
// 00731268  52                   push edx
// 00731269  ff1568ed8900         call dword ptr [0x89ed68]
// 0073126f  85c0                 test eax, eax
// 00731271  0f84cc000000         je 0x731343
// 00731277  8bce                 mov ecx, esi
// 00731279  e81284ffff           call 0x729690
// 0073127e  8b3d34ee8900         mov edi, dword ptr [0x89ee34]
// 00731284  85c0                 test eax, eax
// 00731286  7420                 je 0x7312a8
// 00731288  6a11                 push 0x11
// 0073128a  ffd7                 call edi
// 0073128c  6685c0               test ax, ax
// 0073128f  7c17                 jl 0x7312a8
// 00731291  8b442410             mov eax, dword ptr [esp + 0x10]
// 00731295  50                   push eax
// 00731296  8bce                 mov ecx, esi
// 00731298  e8e3e7ffff           call 0x72fa80
// 0073129d  5f                   pop edi
// 0073129e  5e                   pop esi
// 0073129f  b801000000           mov eax, 1
// 007312a4  5d                   pop ebp
// 007312a5  c20800               ret 8
// 007312a8  85ed                 test ebp, ebp
// 007312aa  7423                 je 0x7312cf
// 007312ac  56                   push esi
// 007312ad  e89e8d0000           call 0x73a050
// 007312b2  50                   push eax
// 007312b3  e80e7dfeff           call 0x718fc6
// 007312b8  83c408               add esp, 8
// 007312bb  85c0                 test eax, eax
// 007312bd  7410                 je 0x7312cf
// 007312bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007312c3  51                   push ecx
// 007312c4  8bcd                 mov ecx, ebp
// 007312c6  e8959fffff           call 0x72b260
// 007312cb  85c0                 test eax, eax
// 007312cd  7574                 jne 0x731343
// 007312cf  6a11                 push 0x11
// 007312d1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007312d9  ffd7                 call edi
// 007312db  6685c0               test ax, ax
// 007312de  7c4d                 jl 0x73132d
// 007312e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007312e4  8d542414             lea edx, [esp + 0x14]
// 007312e8  52                   push edx
// 007312e9  50                   push eax
// 007312ea  8bce                 mov ecx, esi
// 007312ec  e81fd2ffff           call 0x72e510
// 007312f1  8bf8                 mov edi, eax
// 007312f3  83ffff               cmp edi, -1
// 007312f6  7435                 je 0x73132d
// 007312f8  8b16                 mov edx, dword ptr [esi]
// 007312fa  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00731300  6a02                 push 2
// 00731302  57                   push edi
// 00731303  8bce                 mov ecx, esi
// 00731305  ffd0                 call eax
// 00731307  837c241400           cmp dword ptr [esp + 0x14], 0
// 0073130c  7514                 jne 0x731322
// 0073130e  57                   push edi
// 0073130f  8bce                 mov ecx, esi
// 00731311  e80aceffff           call 0x72e120
// 00731316  8b10                 mov edx, dword ptr [eax]
// 00731318  8bc8                 mov ecx, eax
// 0073131a  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00731320  ffd0                 call eax
// 00731322  5f                   pop edi
// 00731323  5e                   pop esi
// 00731324  b801000000           mov eax, 1
// 00731329  5d                   pop ebp
// 0073132a  c20800               ret 8
// 0073132d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00731331  83f810               cmp eax, 0x10
// 00731334  740d                 je 0x731343
// 00731336  83f811               cmp eax, 0x11
// 00731339  7408                 je 0x731343
// 0073133b  6a00                 push 0
// 0073133d  ff15a8ed8900         call dword ptr [0x89eda8]
// 00731343  5f                   pop edi
// 00731344  5e                   pop esi
// 00731345  b801000000           mov eax, 1
// 0073134a  5d                   pop ebp
// 0073134b  c20800               ret 8
// 0073134e  8bff                 mov edi, edi
// 00731350  0f107300             movups xmm6, xmmword ptr [ebx]
// 00731354  b010                 mov al, 0x10
// 00731356  7300                 jae 0x731358
// 00731358  c410                 les edx, ptr [eax]
// 0073135a  7300                 jae 0x73135c
// 0073135c  d810                 fcom dword ptr [eax]
// 0073135e  7300                 jae 0x731360
// 00731360  17                   pop ss
// 00731361  117300               adc dword ptr [ebx], esi
// 00731364  000404               add byte ptr [esp + eax], al
// 00731367  0401                 add al, 1
// 00731369  0404                 add al, 4
// 0073136b  0404                 add al, 4
// 0073136d  0404                 add al, 4
// 0073136f  0404                 add al, 4
// 00731371  0404                 add al, 4
// 00731373  0404                 add al, 4
// 00731375  0402                 add al, 2
// 00731377  0404                 add al, 4
// 00731379  0404                 add al, 4
// 0073137b  034a12               add ecx, dword ptr [edx + 0x12]
// 0073137e  7300                 jae 0x731380
// 00731380  36127300             adc dh, byte ptr ss:[ebx]
// 00731384  8811                 mov byte ptr [ecx], dl
// 00731386  7300                 jae 0x731388
// 00731388  0112                 add dword ptr [edx], edx
// 0073138a  7300                 jae 0x73138c
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPCommandBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp