// roc 2009-06 007af030  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007af030
//
// 007af030  6aff                 push -1
// 007af032  6891c98700           push 0x87c991
// 007af037  64a100000000         mov eax, dword ptr fs:[0]
// 007af03d  50                   push eax
// 007af03e  83ec54               sub esp, 0x54
// 007af041  53                   push ebx
// 007af042  55                   push ebp
// 007af043  56                   push esi
// 007af044  57                   push edi
// 007af045  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007af04a  33c4                 xor eax, esp
// 007af04c  50                   push eax
// 007af04d  8d442468             lea eax, [esp + 0x68]
// 007af051  64a300000000         mov dword ptr fs:[0], eax
// 007af057  8be9                 mov ebp, ecx
// 007af059  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 007af060  85c0                 test eax, eax
// 007af062  7414                 je 0x7af078
// 007af064  8b4074               mov eax, dword ptr [eax + 0x74]
// 007af067  83787400             cmp dword ptr [eax + 0x74], 0
// 007af06b  7506                 jne 0x7af073
// 007af06d  83787800             cmp dword ptr [eax + 0x78], 0
// 007af071  7405                 je 0x7af078
// 007af073  83c074               add eax, 0x74
// 007af076  eb0c                 jmp 0x7af084
// 007af078  6a00                 push 0
// 007af07a  8d44241c             lea eax, [esp + 0x1c]
// 007af07e  50                   push eax
// 007af07f  e81c41f7ff           call 0x7231a0
// 007af084  8b10                 mov edx, dword ptr [eax]
// 007af086  8b4004               mov eax, dword ptr [eax + 4]
// 007af089  8d4806               lea ecx, [eax + 6]
// 007af08c  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 007af092  3bc8                 cmp ecx, eax
// 007af094  89542428             mov dword ptr [esp + 0x28], edx
// 007af098  894c2418             mov dword ptr [esp + 0x18], ecx
// 007af09c  7f04                 jg 0x7af0a2
// 007af09e  89442418             mov dword ptr [esp + 0x18], eax
// 007af0a2  8d4a04               lea ecx, [edx + 4]
// 007af0a5  83c004               add eax, 4
// 007af0a8  3bc8                 cmp ecx, eax
// 007af0aa  894c2414             mov dword ptr [esp + 0x14], ecx
// 007af0ae  7f04                 jg 0x7af0b4
// 007af0b0  89442414             mov dword ptr [esp + 0x14], eax
// 007af0b4  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 007af0bc  0f847c050000         je 0x7af63e
// 007af0c2  6a29                 push 0x29
// 007af0c4  8bcd                 mov ecx, ebp
// 007af0c6  e8b536f7ff           call 0x722780
// 007af0cb  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 007af0cf  50                   push eax
// 007af0d0  8d8c2488000000       lea ecx, [esp + 0x88]
// 007af0d7  51                   push ecx
// 007af0d8  8bce                 mov ecx, esi
// 007af0da  e8f1a6f6ff           call 0x7197d0
// 007af0df  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007af0e6  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007af0ed  8b5500               mov edx, dword ptr [ebp]
// 007af0f0  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 007af0f6  6a00                 push 0
// 007af0f8  2bc8                 sub ecx, eax
// 007af0fa  51                   push ecx
// 007af0fb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007af0ff  41                   inc ecx
// 007af100  51                   push ecx
// 007af101  50                   push eax
// 007af102  6a00                 push 0
// 007af104  56                   push esi
// 007af105  8bcd                 mov ecx, ebp
// 007af107  ffd2                 call edx
// 007af109  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 007af110  85db                 test ebx, ebx
// 007af112  750e                 jne 0x7af122
// 007af114  8b442478             mov eax, dword ptr [esp + 0x78]
// 007af118  8918                 mov dword ptr [eax], ebx
// 007af11a  895804               mov dword ptr [eax + 4], ebx
// 007af11d  e92d050000           jmp 0x7af64f
// 007af122  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 007af128  8bcb                 mov ecx, ebx
// 007af12a  8944247c             mov dword ptr [esp + 0x7c], eax
// 007af12e  e83d05f7ff           call 0x71f670
// 007af133  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 007af13a  89442420             mov dword ptr [esp + 0x20], eax
// 007af13e  85ff                 test edi, edi
// 007af140  744b                 je 0x7af18d
// 007af142  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007af149  6a05                 push 5
// 007af14b  8b5500               mov edx, dword ptr [ebp]
// 007af14e  6a02                 push 2
// 007af150  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007af156  6a00                 push 0
// 007af158  6a00                 push 0
// 007af15a  6a01                 push 1
// 007af15c  6a00                 push 0
// 007af15e  57                   push edi
// 007af15f  83ec10               sub esp, 0x10
// 007af162  8bc4                 mov eax, esp
// 007af164  8908                 mov dword ptr [eax], ecx
// 007af166  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007af16d  894804               mov dword ptr [eax + 4], ecx
// 007af170  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007af177  894808               mov dword ptr [eax + 8], ecx
// 007af17a  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 007af181  89480c               mov dword ptr [eax + 0xc], ecx
// 007af184  56                   push esi
// 007af185  8bcd                 mov ecx, ebp
// 007af187  ffd2                 call edx
// 007af189  8b442420             mov eax, dword ptr [esp + 0x20]
// 007af18d  85c0                 test eax, eax
// 007af18f  7536                 jne 0x7af1c7
// 007af191  837c247c02           cmp dword ptr [esp + 0x7c], 2
// 007af196  7439                 je 0x7af1d1
// 007af198  ba01000000           mov edx, 1
// 007af19d  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 007af1a3  85c0                 test eax, eax
// 007af1a5  753c                 jne 0x7af1e3
// 007af1a7  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 007af1ad  85c0                 test eax, eax
// 007af1af  7f32                 jg 0x7af1e3
// 007af1b1  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 007af1b7  85c9                 test ecx, ecx
// 007af1b9  741a                 je 0x7af1d5
// 007af1bb  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007af1be  85c0                 test eax, eax
// 007af1c0  7f21                 jg 0x7af1e3
// 007af1c2  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007af1c5  eb14                 jmp 0x7af1db
// 007af1c7  83f802               cmp eax, 2
// 007af1ca  74cc                 je 0x7af198
// 007af1cc  83f803               cmp eax, 3
// 007af1cf  74c7                 je 0x7af198
// 007af1d1  33d2                 xor edx, edx
// 007af1d3  ebc8                 jmp 0x7af19d
// 007af1d5  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 007af1db  85c0                 test eax, eax
// 007af1dd  0f84c5000000         je 0x7af2a8
// 007af1e3  85d2                 test edx, edx
// 007af1e5  0f84bd000000         je 0x7af2a8
// 007af1eb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007af1ef  8b03                 mov eax, dword ptr [ebx]
// 007af1f1  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007af1f7  51                   push ecx
// 007af1f8  8bcb                 mov ecx, ebx
// 007af1fa  ffd2                 call edx
// 007af1fc  89842494000000       mov dword ptr [esp + 0x94], eax
// 007af203  85c0                 test eax, eax
// 007af205  0f849d000000         je 0x7af2a8
// 007af20b  8bc8                 mov ecx, eax
// 007af20d  e89edcf9ff           call 0x74ceb0
// 007af212  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007af219  8bd8                 mov ebx, eax
// 007af21b  0faf5c2428           imul ebx, dword ptr [esp + 0x28]
// 007af220  e8fb8f0100           call 0x7c8220
// 007af225  8bc8                 mov ecx, eax
// 007af227  8bc3                 mov eax, ebx
// 007af229  99                   cdq 
// 007af22a  f7f9                 idiv ecx
// 007af22c  6a00                 push 0
// 007af22e  6a00                 push 0
// 007af230  6a00                 push 0
// 007af232  6a01                 push 1
// 007af234  6a00                 push 0
// 007af236  57                   push edi
// 007af237  8bd8                 mov ebx, eax
// 007af239  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 007af240  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 007af247  895c2444             mov dword ptr [esp + 0x44], ebx
// 007af24b  99                   cdq 
// 007af24c  2bc2                 sub eax, edx
// 007af24e  8bc8                 mov ecx, eax
// 007af250  8bc3                 mov eax, ebx
// 007af252  99                   cdq 
// 007af253  2bc2                 sub eax, edx
// 007af255  d1f8                 sar eax, 1
// 007af257  d1f9                 sar ecx, 1
// 007af259  2bc8                 sub ecx, eax
// 007af25b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007af25f  038c24a0000000       add ecx, dword ptr [esp + 0xa0]
// 007af266  99                   cdq 
// 007af267  2bc2                 sub eax, edx
// 007af269  8bd8                 mov ebx, eax
// 007af26b  8b442440             mov eax, dword ptr [esp + 0x40]
// 007af26f  99                   cdq 
// 007af270  2bc2                 sub eax, edx
// 007af272  8b5500               mov edx, dword ptr [ebp]
// 007af275  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 007af27b  d1f8                 sar eax, 1
// 007af27d  d1fb                 sar ebx, 1
// 007af27f  2bd8                 sub ebx, eax
// 007af281  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 007af288  039c249c000000       add ebx, dword ptr [esp + 0x9c]
// 007af28f  50                   push eax
// 007af290  8b442448             mov eax, dword ptr [esp + 0x48]
// 007af294  50                   push eax
// 007af295  8b442448             mov eax, dword ptr [esp + 0x48]
// 007af299  50                   push eax
// 007af29a  51                   push ecx
// 007af29b  53                   push ebx
// 007af29c  56                   push esi
// 007af29d  8bcd                 mov ecx, ebp
// 007af29f  ffd2                 call edx
// 007af2a1  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 007af2a8  8bcd                 mov ecx, ebp
// 007af2aa  85ff                 test edi, edi
// 007af2ac  7404                 je 0x7af2b2
// 007af2ae  6a2d                 push 0x2d
// 007af2b0  eb02                 jmp 0x7af2b4
// 007af2b2  6a2c                 push 0x2c
// 007af2b4  e8c734f7ff           call 0x722780
// 007af2b9  8b16                 mov edx, dword ptr [esi]
// 007af2bb  89842480000000       mov dword ptr [esp + 0x80], eax
// 007af2c2  50                   push eax
// 007af2c3  8b4238               mov eax, dword ptr [edx + 0x38]
// 007af2c6  8bce                 mov ecx, esi
// 007af2c8  ffd0                 call eax
// 007af2ca  6a01                 push 1
// 007af2cc  8bce                 mov ecx, esi
// 007af2ce  e833cc0900           call 0x84bf06
// 007af2d3  8b13                 mov edx, dword ptr [ebx]
// 007af2d5  8b5258               mov edx, dword ptr [edx + 0x58]
// 007af2d8  8d842498000000       lea eax, [esp + 0x98]
// 007af2df  50                   push eax
// 007af2e0  8bcb                 mov ecx, ebx
// 007af2e2  ffd2                 call edx
// 007af2e4  8d842498000000       lea eax, [esp + 0x98]
// 007af2eb  33db                 xor ebx, ebx
// 007af2ed  50                   push eax
// 007af2ee  895c2474             mov dword ptr [esp + 0x74], ebx
// 007af2f2  e81937f7ff           call 0x722a10
// 007af2f7  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007af2fe  83c404               add esp, 4
// 007af301  3bcb                 cmp ecx, ebx
// 007af303  741e                 je 0x7af323
// 007af305  e8a6a3f7ff           call 0x7296b0
// 007af30a  85c0                 test eax, eax
// 007af30c  7415                 je 0x7af323
// 007af30e  8b5500               mov edx, dword ptr [ebp]
// 007af311  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 007af317  8d842498000000       lea eax, [esp + 0x98]
// 007af31e  50                   push eax
// 007af31f  8bcd                 mov ecx, ebp
// 007af321  ffd2                 call edx
// 007af323  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007af32a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007af32e  8d540108             lea edx, [ecx + eax + 8]
// 007af332  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007af339  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007af340  89542438             mov dword ptr [esp + 0x38], edx
// 007af344  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007af34b  89542444             mov dword ptr [esp + 0x44], edx
// 007af34f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007af353  8944243c             mov dword ptr [esp + 0x3c], eax
// 007af357  894c2440             mov dword ptr [esp + 0x40], ecx
// 007af35b  83fa02               cmp edx, 2
// 007af35e  740e                 je 0x7af36e
// 007af360  83fa03               cmp edx, 3
// 007af363  7409                 je 0x7af36e
// 007af365  83fa04               cmp edx, 4
// 007af368  0f85a3000000         jne 0x7af411
// 007af36e  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007af375  03c2                 add eax, edx
// 007af377  99                   cdq 
// 007af378  2bc2                 sub eax, edx
// 007af37a  d1f8                 sar eax, 1
// 007af37c  8d58fb               lea ebx, [eax - 5]
// 007af37f  8d5005               lea edx, [eax + 5]
// 007af382  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 007af389  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 007af390  53                   push ebx
// 007af391  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 007af398  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 007af39f  53                   push ebx
// 007af3a0  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 007af3a7  83c1f9               add ecx, -7
// 007af3aa  8d51fb               lea edx, [ecx - 5]
// 007af3ad  52                   push edx
// 007af3ae  53                   push ebx
// 007af3af  52                   push edx
// 007af3b0  50                   push eax
// 007af3b1  51                   push ecx
// 007af3b2  56                   push esi
// 007af3b3  e8f81ffcff           call 0x7713b0
// 007af3b8  836c246007           sub dword ptr [esp + 0x60], 7
// 007af3bd  83c420               add esp, 0x20
// 007af3c0  837c247c04           cmp dword ptr [esp + 0x7c], 4
// 007af3c5  7544                 jne 0x7af40b
// 007af3c7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007af3ce  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007af3d5  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007af3dc  83c0ec               add eax, -0x14
// 007af3df  f7df                 neg edi
// 007af3e1  1bff                 sbb edi, edi
// 007af3e3  83e710               and edi, 0x10
// 007af3e6  83c710               add edi, 0x10
// 007af3e9  57                   push edi
// 007af3ea  49                   dec ecx
// 007af3eb  51                   push ecx
// 007af3ec  50                   push eax
// 007af3ed  42                   inc edx
// 007af3ee  52                   push edx
// 007af3ef  50                   push eax
// 007af3f0  56                   push esi
// 007af3f1  8bcd                 mov ecx, ebp
// 007af3f3  e83848f7ff           call 0x723c30
// 007af3f8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007af3ff  83c0ec               add eax, -0x14
// 007af402  89442440             mov dword ptr [esp + 0x40], eax
// 007af406  e9d3010000           jmp 0x7af5de
// 007af40b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007af40f  33db                 xor ebx, ebx
// 007af411  83fa05               cmp edx, 5
// 007af414  7409                 je 0x7af41f
// 007af416  83fa06               cmp edx, 6
// 007af419  0f85bf010000         jne 0x7af5de
// 007af41f  6820040000           push 0x420
// 007af424  8d4c244c             lea ecx, [esp + 0x4c]
// 007af428  51                   push ecx
// 007af429  895c2450             mov dword ptr [esp + 0x50], ebx
// 007af42d  895c2454             mov dword ptr [esp + 0x54], ebx
// 007af431  895c2458             mov dword ptr [esp + 0x58], ebx
// 007af435  895c245c             mov dword ptr [esp + 0x5c], ebx
// 007af439  8b1e                 mov ebx, dword ptr [esi]
// 007af43b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007af442  ff1554fb8900         call dword ptr [0x89fb54]
// 007af448  50                   push eax
// 007af449  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007af450  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007af456  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007af459  50                   push eax
// 007af45a  8bce                 mov ecx, esi
// 007af45c  ffd2                 call edx
// 007af45e  8b4e08               mov ecx, dword ptr [esi + 8]
// 007af461  8d442420             lea eax, [esp + 0x20]
// 007af465  50                   push eax
// 007af466  6a01                 push 1
// 007af468  68f8338b00           push 0x8b33f8
// 007af46d  51                   push ecx
// 007af46e  ff1550e18900         call dword ptr [0x89e150]
// 007af474  8b542450             mov edx, dword ptr [esp + 0x50]
// 007af478  2b542448             sub edx, dword ptr [esp + 0x48]
// 007af47c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007af483  03542414             add edx, dword ptr [esp + 0x14]
// 007af487  8b442424             mov eax, dword ptr [esp + 0x24]
// 007af48b  83c002               add eax, 2
// 007af48e  8d540a0d             lea edx, [edx + ecx + 0xd]
// 007af492  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007af499  8bd9                 mov ebx, ecx
// 007af49b  2bd8                 sub ebx, eax
// 007af49d  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007af4a4  8944242c             mov dword ptr [esp + 0x2c], eax
// 007af4a8  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007af4af  89442434             mov dword ptr [esp + 0x34], eax
// 007af4b3  8bc7                 mov eax, edi
// 007af4b5  f7d8                 neg eax
// 007af4b7  1bc0                 sbb eax, eax
// 007af4b9  83e011               and eax, 0x11
// 007af4bc  6a05                 push 5
// 007af4be  83c00f               add eax, 0xf
// 007af4c1  50                   push eax
// 007af4c2  83ec10               sub esp, 0x10
// 007af4c5  8bc4                 mov eax, esp
// 007af4c7  8910                 mov dword ptr [eax], edx
// 007af4c9  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007af4d0  895004               mov dword ptr [eax + 4], edx
// 007af4d3  894808               mov dword ptr [eax + 8], ecx
// 007af4d6  894c2448             mov dword ptr [esp + 0x48], ecx
// 007af4da  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007af4e1  89480c               mov dword ptr [eax + 0xc], ecx
// 007af4e4  56                   push esi
// 007af4e5  8bcd                 mov ecx, ebp
// 007af4e7  e80443f7ff           call 0x7237f0
// 007af4ec  837c247c05           cmp dword ptr [esp + 0x7c], 5
// 007af4f1  0f85e7000000         jne 0x7af5de
// 007af4f7  85ff                 test edi, edi
// 007af4f9  7551                 jne 0x7af54c
// 007af4fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 007af4ff  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 007af503  6a0f                 push 0xf
// 007af505  89842484000000       mov dword ptr [esp + 0x84], eax
// 007af50c  8b442434             mov eax, dword ptr [esp + 0x34]
// 007af510  2bc3                 sub eax, ebx
// 007af512  8bcd                 mov ecx, ebp
// 007af514  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 007af51b  e86032f7ff           call 0x722780
// 007af520  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007af527  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007af52b  50                   push eax
// 007af52c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007af533  83c2fc               add edx, -4
// 007af536  52                   push edx
// 007af537  83c0fc               add eax, -4
// 007af53a  50                   push eax
// 007af53b  83c102               add ecx, 2
// 007af53e  51                   push ecx
// 007af53f  8d5302               lea edx, [ebx + 2]
// 007af542  52                   push edx
// 007af543  8bce                 mov ecx, esi
// 007af545  e8e6c90900           call 0x84bf30
// 007af54a  eb37                 jmp 0x7af583
// 007af54c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007af550  8b5500               mov edx, dword ptr [ebp]
// 007af553  6a05                 push 5
// 007af555  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007af55b  6a02                 push 2
// 007af55d  6a00                 push 0
// 007af55f  6a00                 push 0
// 007af561  6a01                 push 1
// 007af563  6a00                 push 0
// 007af565  57                   push edi
// 007af566  83ec10               sub esp, 0x10
// 007af569  8bc4                 mov eax, esp
// 007af56b  8918                 mov dword ptr [eax], ebx
// 007af56d  894804               mov dword ptr [eax + 4], ecx
// 007af570  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007af574  894808               mov dword ptr [eax + 8], ecx
// 007af577  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007af57b  89480c               mov dword ptr [eax + 0xc], ecx
// 007af57e  56                   push esi
// 007af57f  8bcd                 mov ecx, ebp
// 007af581  ffd2                 call edx
// 007af583  b801000000           mov eax, 1
// 007af588  0144242c             add dword ptr [esp + 0x2c], eax
// 007af58c  29442430             sub dword ptr [esp + 0x30], eax
// 007af590  29442434             sub dword ptr [esp + 0x34], eax
// 007af594  03d8                 add ebx, eax
// 007af596  8b4500               mov eax, dword ptr [ebp]
// 007af599  f7df                 neg edi
// 007af59b  1bff                 sbb edi, edi
// 007af59d  83c72e               add edi, 0x2e
// 007af5a0  57                   push edi
// 007af5a1  8bcd                 mov ecx, ebp
// 007af5a3  89842484000000       mov dword ptr [esp + 0x84], eax
// 007af5aa  e8d131f7ff           call 0x722780
// 007af5af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007af5b3  8b542430             mov edx, dword ptr [esp + 0x30]
// 007af5b7  50                   push eax
// 007af5b8  83ec10               sub esp, 0x10
// 007af5bb  8bc4                 mov eax, esp
// 007af5bd  8918                 mov dword ptr [eax], ebx
// 007af5bf  894804               mov dword ptr [eax + 4], ecx
// 007af5c2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007af5c6  895008               mov dword ptr [eax + 8], edx
// 007af5c9  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007af5d0  89480c               mov dword ptr [eax + 0xc], ecx
// 007af5d3  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 007af5d9  56                   push esi
// 007af5da  8bcd                 mov ecx, ebp
// 007af5dc  ffd0                 call eax
// 007af5de  81c5f0000000         add ebp, 0xf0
// 007af5e4  55                   push ebp
// 007af5e5  56                   push esi
// 007af5e6  8d4c2460             lea ecx, [esp + 0x60]
// 007af5ea  e87112fcff           call 0x770860
// 007af5ef  8b3e                 mov edi, dword ptr [esi]
// 007af5f1  6824880000           push 0x8824
// 007af5f6  8d4c243c             lea ecx, [esp + 0x3c]
// 007af5fa  51                   push ecx
// 007af5fb  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007af602  c644247801           mov byte ptr [esp + 0x78], 1
// 007af607  ff1554fb8900         call dword ptr [0x89fb54]
// 007af60d  50                   push eax
// 007af60e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007af615  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007af61b  8b5770               mov edx, dword ptr [edi + 0x70]
// 007af61e  50                   push eax
// 007af61f  8bce                 mov ecx, esi
// 007af621  ffd2                 call edx
// 007af623  8d4c2458             lea ecx, [esp + 0x58]
// 007af627  c644247000           mov byte ptr [esp + 0x70], 0
// 007af62c  e8af12fcff           call 0x7708e0
// 007af631  8d8c2498000000       lea ecx, [esp + 0x98]
// 007af638  ff1510fd8900         call dword ptr [0x89fd10]
// 007af63e  8b442478             mov eax, dword ptr [esp + 0x78]
// 007af642  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007af646  8b542418             mov edx, dword ptr [esp + 0x18]
// 007af64a  8908                 mov dword ptr [eax], ecx
// 007af64c  895004               mov dword ptr [eax + 4], edx
// 007af64f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007af653  64890d00000000       mov dword ptr fs:[0], ecx
// 007af65a  59                   pop ecx
// 007af65b  5f                   pop edi
// 007af65c  5e                   pop esi
// 007af65d  5d                   pop ebp
// 007af65e  5b                   pop ebx
// 007af65f  83c460               add esp, 0x60
// 007af662  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOfficeTheme.cpp