// roc 2010-06 007316c0  unit: lua_exception  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007316c0
//
// 007316c0  55                   push ebp
// 007316c1  8bec                 mov ebp, esp
// 007316c3  6aff                 push -1
// 007316c5  68c08f9a00           push 0x9a8fc0
// 007316ca  64a100000000         mov eax, dword ptr fs:[0]
// 007316d0  50                   push eax
// 007316d1  64892500000000       mov dword ptr fs:[0], esp
// 007316d8  83ec30               sub esp, 0x30
// 007316db  53                   push ebx
// 007316dc  56                   push esi
// 007316dd  8bf1                 mov esi, ecx
// 007316df  8b460c               mov eax, dword ptr [esi + 0xc]
// 007316e2  57                   push edi
// 007316e3  8965f0               mov dword ptr [ebp - 0x10], esp
// 007316e6  8975e0               mov dword ptr [ebp - 0x20], esi
// 007316e9  85c0                 test eax, eax
// 007316eb  7505                 jne 0x7316f2
// 007316ed  8945ec               mov dword ptr [ebp - 0x14], eax
// 007316f0  eb19                 jmp 0x73170b
// 007316f2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007316f5  2bc8                 sub ecx, eax
// 007316f7  b8abaaaa2a           mov eax, 0x2aaaaaab
// 007316fc  f7e9                 imul ecx
// 007316fe  c1fa02               sar edx, 2
// 00731701  8bc2                 mov eax, edx
// 00731703  c1e81f               shr eax, 0x1f
// 00731706  03c2                 add eax, edx
// 00731708  8945ec               mov dword ptr [ebp - 0x14], eax
// 0073170b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0073170e  85ff                 test edi, edi
// 00731710  0f84e9020000         je 0x7319ff
// 00731716  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00731719  8bcb                 mov ecx, ebx
// 0073171b  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 0073171e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00731723  f7e9                 imul ecx
// 00731725  c1fa02               sar edx, 2
// 00731728  8bc2                 mov eax, edx
// 0073172a  c1e81f               shr eax, 0x1f
// 0073172d  03c2                 add eax, edx
// 0073172f  b9aaaaaa0a           mov ecx, 0xaaaaaaa
// 00731734  2bc8                 sub ecx, eax
// 00731736  3bcf                 cmp ecx, edi
// 00731738  7305                 jae 0x73173f
// 0073173a  e8b126cfff           call 0x423df0
// 0073173f  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00731742  03c7                 add eax, edi
// 00731744  3bc8                 cmp ecx, eax
// 00731746  0f838e010000         jae 0x7318da
// 0073174c  8bd1                 mov edx, ecx
// 0073174e  d1ea                 shr edx, 1
// 00731750  bbaaaaaa0a           mov ebx, 0xaaaaaaa
// 00731755  2bda                 sub ebx, edx
// 00731757  3bd9                 cmp ebx, ecx
// 00731759  730c                 jae 0x731767
// 0073175b  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 00731762  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00731765  eb05                 jmp 0x73176c
// 00731767  03ca                 add ecx, edx
// 00731769  894dec               mov dword ptr [ebp - 0x14], ecx
// 0073176c  3bc8                 cmp ecx, eax
// 0073176e  7305                 jae 0x731775
// 00731770  8945ec               mov dword ptr [ebp - 0x14], eax
// 00731773  8bc8                 mov ecx, eax
// 00731775  6a00                 push 0
// 00731777  51                   push ecx
// 00731778  e863efffff           call 0x7306e0
// 0073177d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00731780  2b560c               sub edx, dword ptr [esi + 0xc]
// 00731783  8bc8                 mov ecx, eax
// 00731785  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0073178a  f7ea                 imul edx
// 0073178c  c1fa02               sar edx, 2
// 0073178f  8bda                 mov ebx, edx
// 00731791  33c0                 xor eax, eax
// 00731793  83c408               add esp, 8
// 00731796  c1eb1f               shr ebx, 0x1f
// 00731799  03da                 add ebx, edx
// 0073179b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0073179e  8945e4               mov dword ptr [ebp - 0x1c], eax
// 007317a1  8945fc               mov dword ptr [ebp - 4], eax
// 007317a4  52                   push edx
// 007317a5  894de8               mov dword ptr [ebp - 0x18], ecx
// 007317a8  8d045b               lea eax, [ebx + ebx*2]
// 007317ab  8d0cc1               lea ecx, [ecx + eax*8]
// 007317ae  57                   push edi
// 007317af  51                   push ecx
// 007317b0  8bce                 mov ecx, esi
// 007317b2  895ddc               mov dword ptr [ebp - 0x24], ebx
// 007317b5  e8d6faffff           call 0x731290
// 007317ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 007317bd  c6451400             mov byte ptr [ebp + 0x14], 0
// 007317c1  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007317c4  52                   push edx
// 007317c5  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007317c8  52                   push edx
// 007317c9  8b550c               mov edx, dword ptr [ebp + 0xc]
// 007317cc  8d4e08               lea ecx, [esi + 8]
// 007317cf  51                   push ecx
// 007317d0  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 007317d3  51                   push ecx
// 007317d4  52                   push edx
// 007317d5  50                   push eax
// 007317d6  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 007317dd  e89ef6ffff           call 0x730e80
// 007317e2  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 007317e5  8b4610               mov eax, dword ptr [esi + 0x10]
// 007317e8  83c418               add esp, 0x18
// 007317eb  03df                 add ebx, edi
// 007317ed  8d0c5b               lea ecx, [ebx + ebx*2]
// 007317f0  8d0cca               lea ecx, [edx + ecx*8]
// 007317f3  c6451400             mov byte ptr [ebp + 0x14], 0
// 007317f7  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007317fa  52                   push edx
// 007317fb  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007317fe  52                   push edx
// 007317ff  8d5608               lea edx, [esi + 8]
// 00731802  52                   push edx
// 00731803  51                   push ecx
// 00731804  50                   push eax
// 00731805  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00731808  50                   push eax
// 00731809  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 00731810  e86bf6ffff           call 0x730e80
// 00731815  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00731818  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0073181b  2bcb                 sub ecx, ebx
// 0073181d  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00731822  f7e9                 imul ecx
// 00731824  c1fa02               sar edx, 2
// 00731827  8bca                 mov ecx, edx
// 00731829  c1e91f               shr ecx, 0x1f
// 0073182c  03ca                 add ecx, edx
// 0073182e  83c418               add esp, 0x18
// 00731831  03f9                 add edi, ecx
// 00731833  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0073183a  85db                 test ebx, ebx
// 0073183c  741e                 je 0x73185c
// 0073183e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00731841  52                   push edx
// 00731842  8d4608               lea eax, [esi + 8]
// 00731845  50                   push eax
// 00731846  8b4610               mov eax, dword ptr [esi + 0x10]
// 00731849  50                   push eax
// 0073184a  53                   push ebx
// 0073184b  e850faedff           call 0x6112a0
// 00731850  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00731853  51                   push ecx
// 00731854  e841610700           call 0x7a799a
// 00731859  83c414               add esp, 0x14
// 0073185c  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0073185f  8d1440               lea edx, [eax + eax*2]
// 00731862  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00731865  8d0cd0               lea ecx, [eax + edx*8]
// 00731868  8d147f               lea edx, [edi + edi*2]
// 0073186b  894e14               mov dword ptr [esi + 0x14], ecx
// 0073186e  8d0cd0               lea ecx, [eax + edx*8]
// 00731871  894e10               mov dword ptr [esi + 0x10], ecx
// 00731874  89460c               mov dword ptr [esi + 0xc], eax
// 00731877  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0073187a  64890d00000000       mov dword ptr fs:[0], ecx
// 00731881  5f                   pop edi
// 00731882  5e                   pop esi
// 00731883  5b                   pop ebx
// 00731884  8be5                 mov esp, ebp
// 00731886  5d                   pop ebp
// 00731887  c21000               ret 0x10
// library openrbx-client/App\script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
