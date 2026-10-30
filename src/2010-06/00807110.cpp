// roc 2010-06 00807110  unit: CXTPPropExchangeXMLNode  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00807110
//
// 00807110  55                   push ebp
// 00807111  8bec                 mov ebp, esp
// 00807113  83e4c0               and esp, 0xffffffc0
// 00807116  6aff                 push -1
// 00807118  68a93a9b00           push 0x9b3aa9
// 0080711d  64a100000000         mov eax, dword ptr fs:[0]
// 00807123  50                   push eax
// 00807124  81eca8000000         sub esp, 0xa8
// 0080712a  53                   push ebx
// 0080712b  56                   push esi
// 0080712c  57                   push edi
// 0080712d  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00807132  33c4                 xor eax, esp
// 00807134  50                   push eax
// 00807135  8d8424b8000000       lea eax, [esp + 0xb8]
// 0080713c  64a300000000         mov dword ptr fs:[0], eax
// 00807142  8bf1                 mov esi, ecx
// 00807144  33db                 xor ebx, ebx
// 00807146  395e28               cmp dword ptr [esi + 0x28], ebx
// 00807149  0f843e030000         je 0x80748d
// 0080714f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00807152  0fb7c7               movzx eax, di
// 00807155  83c0fe               add eax, -2
// 00807158  83f863               cmp eax, 0x63
// 0080715b  0f875d050000         ja 0x8076be
// 00807161  0fb680f8768000       movzx eax, byte ptr [eax + 0x8076f8]
// 00807168  ff2485d8768000       jmp dword ptr [eax*4 + 0x8076d8]
// 0080716f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00807172  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00807178  50                   push eax
// 00807179  ff15a8a89e00         call dword ptr [0x9ea8a8]
// 0080717f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00807182  83c404               add esp, 4
// 00807185  8d4c244c             lea ecx, [esp + 0x4c]
// 00807189  51                   push ecx
// 0080718a  52                   push edx
// 0080718b  57                   push edi
// 0080718c  8bce                 mov ecx, esi
// 0080718e  89442458             mov dword ptr [esp + 0x58], eax
// 00807192  e809e4ffff           call 0x8055a0
// 00807197  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0080719e  64890d00000000       mov dword ptr fs:[0], ecx
// 008071a5  59                   pop ecx
// 008071a6  5f                   pop edi
// 008071a7  5e                   pop esi
// 008071a8  5b                   pop ebx
// 008071a9  8be5                 mov esp, ebp
// 008071ab  5d                   pop ebp
// 008071ac  c21000               ret 0x10
// 008071af  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008071b2  8d44244c             lea eax, [esp + 0x4c]
// 008071b6  50                   push eax
// 008071b7  895c2450             mov dword ptr [esp + 0x50], ebx
// 008071bb  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008071c1  50                   push eax
// 008071c2  ff1514a89e00         call dword ptr [0x9ea814]
// 008071c8  d95c2468             fstp dword ptr [esp + 0x68]
// 008071cc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008071cf  83c408               add esp, 8
// 008071d2  8d4c2460             lea ecx, [esp + 0x60]
// 008071d6  51                   push ecx
// 008071d7  52                   push edx
// 008071d8  57                   push edi
// 008071d9  8bce                 mov ecx, esi
// 008071db  e8c0e3ffff           call 0x8055a0
// 008071e0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008071e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008071ee  59                   pop ecx
// 008071ef  5f                   pop edi
// 008071f0  5e                   pop esi
// 008071f1  5b                   pop ebx
// 008071f2  8be5                 mov esp, ebp
// 008071f4  5d                   pop ebp
// 008071f5  c21000               ret 0x10
// 008071f8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008071fb  8d442460             lea eax, [esp + 0x60]
// 008071ff  50                   push eax
// 00807200  895c2464             mov dword ptr [esp + 0x64], ebx
// 00807204  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0080720a  50                   push eax
// 0080720b  ff1514a89e00         call dword ptr [0x9ea814]
// 00807211  dd5c2454             fstp qword ptr [esp + 0x54]
// 00807215  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00807218  83c408               add esp, 8
// 0080721b  8d4c244c             lea ecx, [esp + 0x4c]
// 0080721f  51                   push ecx
// 00807220  52                   push edx
// 00807221  57                   push edi
// 00807222  8bce                 mov ecx, esi
// 00807224  e877e3ffff           call 0x8055a0
// 00807229  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00807230  64890d00000000       mov dword ptr fs:[0], ecx
// 00807237  59                   pop ecx
// 00807238  5f                   pop edi
// 00807239  5e                   pop esi
// 0080723a  5b                   pop ebx
// 0080723b  8be5                 mov esp, ebp
// 0080723d  5d                   pop ebp
// 0080723e  c21000               ret 0x10
// 00807241  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00807244  d9ee                 fldz 
// 00807246  8d442460             lea eax, [esp + 0x60]
// 0080724a  dd5c2460             fstp qword ptr [esp + 0x60]
// 0080724e  50                   push eax
// 0080724f  51                   push ecx
// 00807250  8bce                 mov ecx, esi
// 00807252  895c2470             mov dword ptr [esp + 0x70], ebx
// 00807256  e865fdffff           call 0x806fc0
// 0080725b  85c0                 test eax, eax
// 0080725d  0f845b040000         je 0x8076be
// 00807263  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00807266  8b542460             mov edx, dword ptr [esp + 0x60]
// 0080726a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0080726e  8910                 mov dword ptr [eax], edx
// 00807270  8b542468             mov edx, dword ptr [esp + 0x68]
// 00807274  894804               mov dword ptr [eax + 4], ecx
// 00807277  895008               mov dword ptr [eax + 8], edx
// 0080727a  b801000000           mov eax, 1
// 0080727f  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00807286  64890d00000000       mov dword ptr fs:[0], ecx
// 0080728d  59                   pop ecx
// 0080728e  5f                   pop edi
// 0080728f  5e                   pop esi
// 00807290  5b                   pop ebx
// 00807291  8be5                 mov esp, ebp
// 00807293  5d                   pop ebp
// 00807294  c21000               ret 0x10
// 00807297  6683ff65             cmp di, 0x65
// 0080729b  0f8582000000         jne 0x807323
// 008072a1  8d442464             lea eax, [esp + 0x64]
// 008072a5  50                   push eax
// 008072a6  8d4c2464             lea ecx, [esp + 0x64]
// 008072aa  51                   push ecx
// 008072ab  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008072ae  68f807a600           push 0xa607f8
// 008072b3  895c246c             mov dword ptr [esp + 0x6c], ebx
// 008072b7  895c2470             mov dword ptr [esp + 0x70], ebx
// 008072bb  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008072c1  50                   push eax
// 008072c2  ff1564a79e00         call dword ptr [0x9ea764]
// 008072c8  83c410               add esp, 0x10
// 008072cb  83f802               cmp eax, 2
// 008072ce  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008072d1  7426                 je 0x8072f9
// 008072d3  8b5514               mov edx, dword ptr [ebp + 0x14]
// 008072d6  52                   push edx
// 008072d7  50                   push eax
// 008072d8  6a65                 push 0x65
// 008072da  8bce                 mov ecx, esi
// 008072dc  e8bfe2ffff           call 0x8055a0
// 008072e1  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008072e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008072ef  59                   pop ecx
// 008072f0  5f                   pop edi
// 008072f1  5e                   pop esi
// 008072f2  5b                   pop ebx
// 008072f3  8be5                 mov esp, ebp
// 008072f5  5d                   pop ebp
// 008072f6  c21000               ret 0x10
// 008072f9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008072fd  8b542464             mov edx, dword ptr [esp + 0x64]
// 00807301  8908                 mov dword ptr [eax], ecx
// 00807303  895004               mov dword ptr [eax + 4], edx
// 00807306  b801000000           mov eax, 1
// 0080730b  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00807312  64890d00000000       mov dword ptr fs:[0], ecx
// 00807319  59                   pop ecx
// 0080731a  5f                   pop edi
// 0080731b  5e                   pop esi
// 0080731c  5b                   pop ebx
// 0080731d  8be5                 mov esp, ebp
// 0080731f  5d                   pop ebp
// 00807320  c21000               ret 0x10
// 00807323  6683ff64             cmp di, 0x64
// 00807327  0f85a8000000         jne 0x8073d5
// 0080732d  8d44246c             lea eax, [esp + 0x6c]
// 00807331  50                   push eax
// 00807332  8d4c246c             lea ecx, [esp + 0x6c]
// 00807336  51                   push ecx
// 00807337  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0080733a  8d54246c             lea edx, [esp + 0x6c]
// 0080733e  52                   push edx
// 0080733f  8d44246c             lea eax, [esp + 0x6c]
// 00807343  50                   push eax
// 00807344  68e807a600           push 0xa607e8
// 00807349  895c2474             mov dword ptr [esp + 0x74], ebx
// 0080734d  895c2478             mov dword ptr [esp + 0x78], ebx
// 00807351  895c247c             mov dword ptr [esp + 0x7c], ebx
// 00807355  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0080735c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00807362  50                   push eax
// 00807363  ff1564a79e00         call dword ptr [0x9ea764]
// 00807369  83c418               add esp, 0x18
// 0080736c  83f804               cmp eax, 4
// 0080736f  7429                 je 0x80739a
// 00807371  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00807374  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00807377  51                   push ecx
// 00807378  52                   push edx
// 00807379  6a64                 push 0x64
// 0080737b  8bce                 mov ecx, esi
// 0080737d  e81ee2ffff           call 0x8055a0
// 00807382  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00807389  64890d00000000       mov dword ptr fs:[0], ecx
// 00807390  59                   pop ecx
// 00807391  5f                   pop edi
// 00807392  5e                   pop esi
// 00807393  5b                   pop ebx
// 00807394  8be5                 mov esp, ebp
// 00807396  5d                   pop ebp
// 00807397  c21000               ret 0x10
// 0080739a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0080739d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008073a1  8b542464             mov edx, dword ptr [esp + 0x64]
// 008073a5  8908                 mov dword ptr [eax], ecx
// 008073a7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008073ab  895004               mov dword ptr [eax + 4], edx
// 008073ae  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008073b2  894808               mov dword ptr [eax + 8], ecx
// 008073b5  89500c               mov dword ptr [eax + 0xc], edx
// 008073b8  b801000000           mov eax, 1
// 008073bd  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008073c4  64890d00000000       mov dword ptr fs:[0], ecx
// 008073cb  59                   pop ecx
// 008073cc  5f                   pop edi
// 008073cd  5e                   pop esi
// 008073ce  5b                   pop ebx
// 008073cf  8be5                 mov esp, ebp
// 008073d1  5d                   pop ebp
// 008073d2  c21000               ret 0x10
// 008073d5  8b7d08               mov edi, dword ptr [ebp + 8]
// 008073d8  57                   push edi
// 008073d9  e812d1ffff           call 0x8044f0
// 008073de  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008073e1  57                   push edi
// 008073e2  ff1580c59e00         call dword ptr [0x9ec580]
// 008073e8  b801000000           mov eax, 1
// 008073ed  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008073f4  64890d00000000       mov dword ptr fs:[0], ecx
// 008073fb  59                   pop ecx
// 008073fc  5f                   pop edi
// 008073fd  5e                   pop esi
// 008073fe  5b                   pop ebx
// 008073ff  8be5                 mov esp, ebp
// 00807401  5d                   pop ebp
// 00807402  c21000               ret 0x10
// 00807405  8b4508               mov eax, dword ptr [ebp + 8]
// 00807408  50                   push eax
// 00807409  8d4c2450             lea ecx, [esp + 0x50]
// 0080740d  e8fedbffff           call 0x805010
// 00807412  833d147fbe00ff       cmp dword ptr [0xbe7f14], -1
// 00807419  899c24c0000000       mov dword ptr [esp + 0xc0], ebx
// 00807420  7533                 jne 0x807455
// 00807422  d9ee                 fldz 
// 00807424  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00807427  dd5c2460             fstp qword ptr [esp + 0x60]
// 0080742b  895c2468             mov dword ptr [esp + 0x68], ebx
// 0080742f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00807435  50                   push eax
// 00807436  8d4c2464             lea ecx, [esp + 0x64]
// 0080743a  51                   push ecx
// 0080743b  e850faffff           call 0x806e90
// 00807440  83c408               add esp, 8
// 00807443  85c0                 test eax, eax
// 00807445  740e                 je 0x807455
// 00807447  8d542460             lea edx, [esp + 0x60]
// 0080744b  52                   push edx
// 0080744c  8d4c2450             lea ecx, [esp + 0x50]
// 00807450  e8715f1700           call 0x97d3c6
// 00807455  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00807458  8d44244c             lea eax, [esp + 0x4c]
// 0080745c  50                   push eax
// 0080745d  51                   push ecx
// 0080745e  57                   push edi
// 0080745f  8bce                 mov ecx, esi
// 00807461  e83ae1ffff           call 0x8055a0
// 00807466  8d54244c             lea edx, [esp + 0x4c]
// 0080746a  52                   push edx
// 0080746b  8bf0                 mov esi, eax
// 0080746d  ff1564aa9e00         call dword ptr [0x9eaa64]
// 00807473  8bc6                 mov eax, esi
// 00807475  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0080747c  64890d00000000       mov dword ptr fs:[0], ecx
// 00807483  59                   pop ecx
// 00807484  5f                   pop edi
// 00807485  5e                   pop esi
// 00807486  5b                   pop ebx
// 00807487  8be5                 mov esp, ebp
// 00807489  5d                   pop ebp
// 0080748a  c21000               ret 0x10
// 0080748d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00807490  0fb7c1               movzx eax, cx
// 00807493  83c0fe               add eax, -2
// 00807496  83f863               cmp eax, 0x63
// 00807499  0f871f020000         ja 0x8076be
// 0080749f  0fb68084778000       movzx eax, byte ptr [eax + 0x807784]
// 008074a6  ff24855c778000       jmp dword ptr [eax*4 + 0x80775c]
// 008074ad  51                   push ecx
// 008074ae  8bce                 mov ecx, esi
// 008074b0  895c2450             mov dword ptr [esp + 0x50], ebx
// 008074b4  e867ccffff           call 0x804120
// 008074b9  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008074bc  50                   push eax
// 008074bd  51                   push ecx
// 008074be  8d542454             lea edx, [esp + 0x54]
// 008074c2  52                   push edx
// 008074c3  e85e19faff           call 0x7a8e26
// 008074c8  8b442458             mov eax, dword ptr [esp + 0x58]
// 008074cc  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008074cf  50                   push eax
// 008074d0  684882a500           push 0xa58248
// 008074d5  51                   push ecx
// 008074d6  ff15acce9e00         call dword ptr [0x9eceac]
// 008074dc  83c418               add esp, 0x18
// 008074df  b801000000           mov eax, 1
// 008074e4  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008074eb  64890d00000000       mov dword ptr fs:[0], ecx
// 008074f2  59                   pop ecx
// 008074f3  5f                   pop edi
// 008074f4  5e                   pop esi
// 008074f5  5b                   pop ebx
// 008074f6  8be5                 mov esp, ebp
// 008074f8  5d                   pop ebp
// 008074f9  c21000               ret 0x10
// 008074fc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008074ff  8b7d08               mov edi, dword ptr [ebp + 8]
// 00807502  52                   push edx
// 00807503  8bcf                 mov ecx, edi
// 00807505  ff1580c59e00         call dword ptr [0x9ec580]
// 0080750b  57                   push edi
// 0080750c  8bce                 mov ecx, esi
// 0080750e  e8ddcfffff           call 0x8044f0
// 00807513  b801000000           mov eax, 1
// 00807518  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0080751f  64890d00000000       mov dword ptr fs:[0], ecx
// 00807526  59                   pop ecx
// 00807527  5f                   pop edi
// 00807528  5e                   pop esi
// 00807529  5b                   pop ebx
// 0080752a  8be5                 mov esp, ebp
// 0080752c  5d                   pop ebp
// 0080752d  c21000               ret 0x10
// 00807530  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00807533  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00807536  50                   push eax
// 00807537  51                   push ecx
// 00807538  8bce                 mov ecx, esi
// 0080753a  e881faffff           call 0x806fc0
// 0080753f  b801000000           mov eax, 1
// 00807544  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0080754b  64890d00000000       mov dword ptr fs:[0], ecx
// 00807552  59                   pop ecx
// 00807553  5f                   pop edi
// 00807554  5e                   pop esi
// 00807555  5b                   pop ebx
// 00807556  8be5                 mov esp, ebp
// 00807558  5d                   pop ebp
// 00807559  c21000               ret 0x10
// 0080755c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0080755f  d902                 fld dword ptr [edx]
// 00807561  83ec08               sub esp, 8
// 00807564  dd1c24               fstp qword ptr [esp]
// 00807567  687c08a600           push 0xa6087c
// 0080756c  8b4508               mov eax, dword ptr [ebp + 8]
// 0080756f  50                   push eax
// 00807570  ff15acce9e00         call dword ptr [0x9eceac]
// 00807576  83c410               add esp, 0x10
// 00807579  b801000000           mov eax, 1
// 0080757e  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00807585  64890d00000000       mov dword ptr fs:[0], ecx
// 0080758c  59                   pop ecx
// 0080758d  5f                   pop edi
// 0080758e  5e                   pop esi
// 0080758f  5b                   pop ebx
// 00807590  8be5                 mov esp, ebp
// 00807592  5d                   pop ebp
// 00807593  c21000               ret 0x10
// 00807596  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00807599  dd01                 fld qword ptr [ecx]
// 0080759b  8b5508               mov edx, dword ptr [ebp + 8]
// 0080759e  83ec08               sub esp, 8
// 008075a1  dd1c24               fstp qword ptr [esp]
// 008075a4  687c08a600           push 0xa6087c
// 008075a9  52                   push edx
// 008075aa  ff15acce9e00         call dword ptr [0x9eceac]
// 008075b0  83c410               add esp, 0x10
// 008075b3  b801000000           mov eax, 1
// 008075b8  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008075bf  64890d00000000       mov dword ptr fs:[0], ecx
// 008075c6  59                   pop ecx
// 008075c7  5f                   pop edi
// 008075c8  5e                   pop esi
// 008075c9  5b                   pop ebx
// 008075ca  8be5                 mov esp, ebp
// 008075cc  5d                   pop ebp
// 008075cd  c21000               ret 0x10
// 008075d0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008075d3  8b4804               mov ecx, dword ptr [eax + 4]
// 008075d6  8b10                 mov edx, dword ptr [eax]
// 008075d8  51                   push ecx
// 008075d9  52                   push edx
// 008075da  68f807a600           push 0xa607f8
// 008075df  eb8b                 jmp 0x80756c
// 008075e1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008075e4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008075e7  8b5008               mov edx, dword ptr [eax + 8]
// 008075ea  51                   push ecx
// 008075eb  8b4804               mov ecx, dword ptr [eax + 4]
// 008075ee  52                   push edx
// 008075ef  8b10                 mov edx, dword ptr [eax]
// 008075f1  8b4508               mov eax, dword ptr [ebp + 8]
// 008075f4  51                   push ecx
// 008075f5  52                   push edx
// 008075f6  68e807a600           push 0xa607e8
// 008075fb  50                   push eax
// 008075fc  ff15acce9e00         call dword ptr [0x9eceac]
// 00807602  83c418               add esp, 0x18
// 00807605  e96fffffff           jmp 0x807579
// 0080760a  8b35147fbe00         mov esi, dword ptr [0xbe7f14]
// 00807610  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00807613  83feff               cmp esi, -1
// 00807616  7549                 jne 0x807661
// 00807618  66833f07             cmp word ptr [edi], 7
// 0080761c  7541                 jne 0x80765f
// 0080761e  dd4708               fld qword ptr [edi + 8]
// 00807621  8d4c2460             lea ecx, [esp + 0x60]
// 00807625  51                   push ecx
// 00807626  dd5c2464             fstp qword ptr [esp + 0x64]
// 0080762a  8d542474             lea edx, [esp + 0x74]
// 0080762e  52                   push edx
// 0080762f  895c2470             mov dword ptr [esp + 0x70], ebx
// 00807633  e8f8d9ffff           call 0x805030
// 00807638  83c408               add esp, 8
// 0080763b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0080763e  50                   push eax
// 0080763f  c78424c400000001000000 mov dword ptr [esp + 0xc4], 1
// 0080764a  ff1580c59e00         call dword ptr [0x9ec580]
// 00807650  8d4c2470             lea ecx, [esp + 0x70]
// 00807654  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0080765a  e91affffff           jmp 0x807579
// 0080765f  33f6                 xor esi, esi
// 00807661  8d442474             lea eax, [esp + 0x74]
// 00807665  50                   push eax
// 00807666  e8b9591700           call 0x97d024
// 0080766b  6a08                 push 8
// 0080766d  53                   push ebx
// 0080766e  56                   push esi
// 0080766f  57                   push edi
// 00807670  8d8c2484000000       lea ecx, [esp + 0x84]
// 00807677  51                   push ecx
// 00807678  c78424d400000002000000 mov dword ptr [esp + 0xd4], 2
// 00807683  ff1518aa9e00         call dword ptr [0x9eaa18]
// 00807689  85c0                 test eax, eax
// 0080768b  7c26                 jl 0x8076b3
// 0080768d  66837c247408         cmp word ptr [esp + 0x74], 8
// 00807693  751e                 jne 0x8076b3
// 00807695  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00807699  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0080769c  52                   push edx
// 0080769d  ff15f4ca9e00         call dword ptr [0x9ecaf4]
// 008076a3  8d442474             lea eax, [esp + 0x74]
// 008076a7  50                   push eax
// 008076a8  ff1564aa9e00         call dword ptr [0x9eaa64]
// 008076ae  e9c6feffff           jmp 0x807579
// 008076b3  8d4c2474             lea ecx, [esp + 0x74]
// 008076b7  51                   push ecx
// 008076b8  ff1564aa9e00         call dword ptr [0x9eaa64]
// 008076be  33c0                 xor eax, eax
// 008076c0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008076c7  64890d00000000       mov dword ptr fs:[0], ecx
// 008076ce  59                   pop ecx
// 008076cf  5f                   pop edi
// 008076d0  5e                   pop esi
// 008076d1  5b                   pop ebx
// 008076d2  8be5                 mov esp, ebp
// 008076d4  5d                   pop ebp
// 008076d5  c21000               ret 0x10
// 008076d8  6f                   outsd dx, dword ptr [esi]
// 008076d9  7180                 jno 0x80765b
// 008076db  00af718000f8         add byte ptr [edi - 0x7ff7f8f], ch
// 008076e1  7180                 jno 0x807663
// 008076e3  004172               add byte ptr [ecx + 0x72], al
// 008076e6  8000be               add byte ptr [eax], 0xbe
// 008076e9  7680                 jbe 0x80766b
// 008076eb  000574800097         add byte ptr [0x97008074], al
// 008076f1  7280                 jb 0x807673
// 008076f3  00be76800000         add byte ptr [esi + 0x8076], bh
// 008076f9  0001                 add byte ptr [ecx], al
// 008076fb  0207                 add al, byte ptr [edi]
// 008076fd  030407               add eax, dword ptr [edi + eax]
// 00807700  07                   pop es
// 00807701  000507070707         add byte ptr [0x7070707], al
// 00807707  0007                 add byte ptr [edi], al
// 00807709  07                   pop es
// 0080770a  07                   pop es
// 0080770b  07                   pop es
// 0080770c  07                   pop es
// 0080770d  07                   pop es
// 0080770e  07                   pop es
// 0080770f  07                   pop es
// 00807710  07                   pop es
// 00807711  07                   pop es
// 00807712  07                   pop es
// 00807713  07                   pop es
// 00807714  06                   push es
// 00807715  07                   pop es
// 00807716  07                   pop es
// 00807717  07                   pop es
// 00807718  07                   pop es
// 00807719  07                   pop es
// 0080771a  07                   pop es
// 0080771b  07                   pop es
// 0080771c  07                   pop es
// 0080771d  07                   pop es
// 0080771e  07                   pop es
// 0080771f  07                   pop es
// 00807720  07                   pop es
// 00807721  07                   pop es
// 00807722  07                   pop es
// 00807723  07                   pop es
// 00807724  07                   pop es
// 00807725  07                   pop es
// 00807726  07                   pop es
// 00807727  07                   pop es
// 00807728  07                   pop es
// 00807729  07                   pop es
// 0080772a  07                   pop es
// 0080772b  07                   pop es
// 0080772c  07                   pop es
// 0080772d  07                   pop es
// 0080772e  07                   pop es
// 0080772f  07                   pop es
// 00807730  07                   pop es
// 00807731  07                   pop es
// 00807732  07                   pop es
// 00807733  07                   pop es
// 00807734  07                   pop es
// 00807735  07                   pop es
// 00807736  07                   pop es
// 00807737  07                   pop es
// 00807738  07                   pop es
// 00807739  07                   pop es
// 0080773a  07                   pop es
// 0080773b  07                   pop es
// 0080773c  07                   pop es
// 0080773d  07                   pop es
// 0080773e  07                   pop es
// 0080773f  07                   pop es
// 00807740  07                   pop es
// 00807741  07                   pop es
// 00807742  07                   pop es
// 00807743  07                   pop es
// 00807744  07                   pop es
// 00807745  07                   pop es
// 00807746  07                   pop es
// 00807747  07                   pop es
// 00807748  07                   pop es
// 00807749  07                   pop es
// 0080774a  07                   pop es
// 0080774b  07                   pop es
// 0080774c  07                   pop es
// 0080774d  07                   pop es
// 0080774e  07                   pop es
// 0080774f  07                   pop es
// 00807750  07                   pop es
// 00807751  07                   pop es
// 00807752  07                   pop es
// 00807753  07                   pop es
// 00807754  07                   pop es
// 00807755  07                   pop es
// 00807756  07                   pop es
// 00807757  07                   pop es
// 00807758  07                   pop es
// 00807759  07                   pop es
// 0080775a  06                   push es
// 0080775b  06                   push es
// 0080775c  ad                   lodsd eax, dword ptr [esi]
// 0080775d  7480                 je 0x8076df
// 0080775f  005c7580             add byte ptr [ebp + esi*2 - 0x80], bl
// 00807763  009675800030         add byte ptr [esi + 0x30008075], dl
// 00807769  7580                 jne 0x8076eb
// 0080776b  00be7680000a         add byte ptr [esi + 0xa008076], bh
// 00807771  7680                 jbe 0x8076f3
// 00807773  00fc                 add ah, bh
// 00807775  7480                 je 0x8076f7
// 00807777  00e1                 add cl, ah
// 00807779  7580                 jne 0x8076fb
// 0080777b  00d0                 add al, dl
// 0080777d  7580                 jne 0x8076ff
// 0080777f  00be76800000         add byte ptr [esi + 0x8076], bh
// 00807785  0001                 add byte ptr [ecx], al
// 00807787  0209                 add cl, byte ptr [ecx]
// 00807789  030409               add eax, dword ptr [ecx + ecx]
// 0080778c  0900                 or dword ptr [eax], eax
// 0080778e  0509090909           add eax, 0x9090909
// 00807793  0009                 add byte ptr [ecx], cl
// 00807795  0909                 or dword ptr [ecx], ecx
// 00807797  0909                 or dword ptr [ecx], ecx
// 00807799  0909                 or dword ptr [ecx], ecx
// 0080779b  0909                 or dword ptr [ecx], ecx
// 0080779d  0909                 or dword ptr [ecx], ecx
// 0080779f  0906                 or dword ptr [esi], eax
// 008077a1  0909                 or dword ptr [ecx], ecx
// 008077a3  0909                 or dword ptr [ecx], ecx
// 008077a5  0909                 or dword ptr [ecx], ecx
// 008077a7  0909                 or dword ptr [ecx], ecx
// 008077a9  0909                 or dword ptr [ecx], ecx
// 008077ab  0909                 or dword ptr [ecx], ecx
// 008077ad  0909                 or dword ptr [ecx], ecx
// 008077af  0909                 or dword ptr [ecx], ecx
// 008077b1  0909                 or dword ptr [ecx], ecx
// 008077b3  0909                 or dword ptr [ecx], ecx
// 008077b5  0909                 or dword ptr [ecx], ecx
// 008077b7  0909                 or dword ptr [ecx], ecx
// 008077b9  0909                 or dword ptr [ecx], ecx
// 008077bb  0909                 or dword ptr [ecx], ecx
// 008077bd  0909                 or dword ptr [ecx], ecx
// 008077bf  0909                 or dword ptr [ecx], ecx
// 008077c1  0909                 or dword ptr [ecx], ecx
// 008077c3  0909                 or dword ptr [ecx], ecx
// 008077c5  0909                 or dword ptr [ecx], ecx
// 008077c7  0909                 or dword ptr [ecx], ecx
// 008077c9  0909                 or dword ptr [ecx], ecx
// 008077cb  0909                 or dword ptr [ecx], ecx
// 008077cd  0909                 or dword ptr [ecx], ecx
// 008077cf  0909                 or dword ptr [ecx], ecx
// 008077d1  0909                 or dword ptr [ecx], ecx
// 008077d3  0909                 or dword ptr [ecx], ecx
// 008077d5  0909                 or dword ptr [ecx], ecx
// 008077d7  0909                 or dword ptr [ecx], ecx
// 008077d9  0909                 or dword ptr [ecx], ecx
// 008077db  0909                 or dword ptr [ecx], ecx
// 008077dd  0909                 or dword ptr [ecx], ecx
// 008077df  0909                 or dword ptr [ecx], ecx
// 008077e1  0909                 or dword ptr [ecx], ecx
// 008077e3  0909                 or dword ptr [ecx], ecx
// 008077e5  0907                 or dword ptr [edi], eax
// copied from an identical function in another client (function ?ExchangePropStringHelper@CXTPPropExchange@@IAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@GPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp