// roc 2011-06 00530150  unit: RBX::Network::ProfiledRakPeer  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00530150
//
// 00530150  83ec30               sub esp, 0x30
// 00530153  8b11                 mov edx, dword ptr [ecx]
// 00530155  53                   push ebx
// 00530156  55                   push ebp
// 00530157  56                   push esi
// 00530158  57                   push edi
// 00530159  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0053015d  8bc7                 mov eax, edi
// 0053015f  c1e004               shl eax, 4
// 00530162  8b740208             mov esi, dword ptr [edx + eax + 8]
// 00530166  89742410             mov dword ptr [esp + 0x10], esi
// 0053016a  8b7104               mov esi, dword ptr [ecx + 4]
// 0053016d  c1e604               shl esi, 4
// 00530170  8b5c16f0             mov ebx, dword ptr [esi + edx - 0x10]
// 00530174  891c02               mov dword ptr [edx + eax], ebx
// 00530177  8b5c16f4             mov ebx, dword ptr [esi + edx - 0xc]
// 0053017b  8d7416f0             lea esi, [esi + edx - 0x10]
// 0053017f  895c0204             mov dword ptr [edx + eax + 4], ebx
// 00530183  8b5e08               mov ebx, dword ptr [esi + 8]
// 00530186  895c0208             mov dword ptr [edx + eax + 8], ebx
// 0053018a  8b760c               mov esi, dword ptr [esi + 0xc]
// 0053018d  8974020c             mov dword ptr [edx + eax + 0xc], esi
// 00530191  8b11                 mov edx, dword ptr [ecx]
// 00530193  8b3410               mov esi, dword ptr [eax + edx]
// 00530196  89742418             mov dword ptr [esp + 0x18], esi
// 0053019a  8b741004             mov esi, dword ptr [eax + edx + 4]
// 0053019e  ff4904               dec dword ptr [ecx + 4]
// 005301a1  8b4104               mov eax, dword ptr [ecx + 4]
// 005301a4  8d5c3f01             lea ebx, [edi + edi + 1]
// 005301a8  8d543f02             lea edx, [edi + edi + 2]
// 005301ac  8974241c             mov dword ptr [esp + 0x1c], esi
// 005301b0  89542444             mov dword ptr [esp + 0x44], edx
// 005301b4  3bd8                 cmp ebx, eax
// 005301b6  0f8351010000         jae 0x53030d
// 005301bc  eb06                 jmp 0x5301c4
// 005301be  8bff                 mov edi, edi
// 005301c0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005301c4  3b5104               cmp edx, dword ptr [ecx + 4]
// 005301c7  0f8321010000         jae 0x5302ee
// 005301cd  8b01                 mov eax, dword ptr [ecx]
// 005301cf  8bd3                 mov edx, ebx
// 005301d1  c1e204               shl edx, 4
// 005301d4  03d0                 add edx, eax
// 005301d6  397204               cmp dword ptr [edx + 4], esi
// 005301d9  7238                 jb 0x530213
// 005301db  770c                 ja 0x5301e9
// 005301dd  8b32                 mov esi, dword ptr [edx]
// 005301df  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005301e3  722e                 jb 0x530213
// 005301e5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005301e9  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005301ed  c1e504               shl ebp, 4
// 005301f0  896c2414             mov dword ptr [esp + 0x14], ebp
// 005301f4  8b6c2804             mov ebp, dword ptr [eax + ebp + 4]
// 005301f8  3bee                 cmp ebp, esi
// 005301fa  0f870d010000         ja 0x53030d
// 00530200  7211                 jb 0x530213
// 00530202  8b742414             mov esi, dword ptr [esp + 0x14]
// 00530206  8b3406               mov esi, dword ptr [esi + eax]
// 00530209  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0053020d  0f83fa000000         jae 0x53030d
// 00530213  8b742444             mov esi, dword ptr [esp + 0x44]
// 00530217  8b6a04               mov ebp, dword ptr [edx + 4]
// 0053021a  c1e604               shl esi, 4
// 0053021d  03f0                 add esi, eax
// 0053021f  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00530222  775a                 ja 0x53027e
// 00530224  7206                 jb 0x53022c
// 00530226  8b2a                 mov ebp, dword ptr [edx]
// 00530228  3b2e                 cmp ebp, dword ptr [esi]
// 0053022a  7352                 jae 0x53027e
// 0053022c  8b7204               mov esi, dword ptr [edx + 4]
// 0053022f  8b2a                 mov ebp, dword ptr [edx]
// 00530231  89742424             mov dword ptr [esp + 0x24], esi
// 00530235  8b7208               mov esi, dword ptr [edx + 8]
// 00530238  89742428             mov dword ptr [esp + 0x28], esi
// 0053023c  8b720c               mov esi, dword ptr [edx + 0xc]
// 0053023f  8974242c             mov dword ptr [esp + 0x2c], esi
// 00530243  8bf7                 mov esi, edi
// 00530245  c1e604               shl esi, 4
// 00530248  8b3c06               mov edi, dword ptr [esi + eax]
// 0053024b  893a                 mov dword ptr [edx], edi
// 0053024d  8b7c0604             mov edi, dword ptr [esi + eax + 4]
// 00530251  897a04               mov dword ptr [edx + 4], edi
// 00530254  8b7c0608             mov edi, dword ptr [esi + eax + 8]
// 00530258  897a08               mov dword ptr [edx + 8], edi
// 0053025b  8b44060c             mov eax, dword ptr [esi + eax + 0xc]
// 0053025f  89420c               mov dword ptr [edx + 0xc], eax
// 00530262  8b01                 mov eax, dword ptr [ecx]
// 00530264  8b542424             mov edx, dword ptr [esp + 0x24]
// 00530268  03c6                 add eax, esi
// 0053026a  8928                 mov dword ptr [eax], ebp
// 0053026c  895004               mov dword ptr [eax + 4], edx
// 0053026f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00530273  895008               mov dword ptr [eax + 8], edx
// 00530276  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053027a  8bfb                 mov edi, ebx
// 0053027c  eb4a                 jmp 0x5302c8
// 0053027e  8b5608               mov edx, dword ptr [esi + 8]
// 00530281  8b1e                 mov ebx, dword ptr [esi]
// 00530283  8b6e04               mov ebp, dword ptr [esi + 4]
// 00530286  89542438             mov dword ptr [esp + 0x38], edx
// 0053028a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0053028d  8954243c             mov dword ptr [esp + 0x3c], edx
// 00530291  8bd7                 mov edx, edi
// 00530293  c1e204               shl edx, 4
// 00530296  8b3c02               mov edi, dword ptr [edx + eax]
// 00530299  893e                 mov dword ptr [esi], edi
// 0053029b  8b7c0204             mov edi, dword ptr [edx + eax + 4]
// 0053029f  897e04               mov dword ptr [esi + 4], edi
// 005302a2  8b7c0208             mov edi, dword ptr [edx + eax + 8]
// 005302a6  897e08               mov dword ptr [esi + 8], edi
// 005302a9  8b44020c             mov eax, dword ptr [edx + eax + 0xc]
// 005302ad  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 005302b1  89460c               mov dword ptr [esi + 0xc], eax
// 005302b4  8b01                 mov eax, dword ptr [ecx]
// 005302b6  03c2                 add eax, edx
// 005302b8  8b542438             mov edx, dword ptr [esp + 0x38]
// 005302bc  8918                 mov dword ptr [eax], ebx
// 005302be  896804               mov dword ptr [eax + 4], ebp
// 005302c1  895008               mov dword ptr [eax + 8], edx
// 005302c4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005302c8  89500c               mov dword ptr [eax + 0xc], edx
// 005302cb  8d5c3f01             lea ebx, [edi + edi + 1]
// 005302cf  8d543f02             lea edx, [edi + edi + 2]
// 005302d3  89542444             mov dword ptr [esp + 0x44], edx
// 005302d7  3b5904               cmp ebx, dword ptr [ecx + 4]
// 005302da  0f82e0feffff         jb 0x5301c0
// 005302e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005302e4  5f                   pop edi
// 005302e5  5e                   pop esi
// 005302e6  5d                   pop ebp
// 005302e7  5b                   pop ebx
// 005302e8  83c430               add esp, 0x30
// 005302eb  c20400               ret 4
// 005302ee  8b11                 mov edx, dword ptr [ecx]
// 005302f0  8bc3                 mov eax, ebx
// 005302f2  c1e004               shl eax, 4
// 005302f5  3b741004             cmp esi, dword ptr [eax + edx + 4]
// 005302f9  7212                 jb 0x53030d
// 005302fb  7709                 ja 0x530306
// 005302fd  8b742418             mov esi, dword ptr [esp + 0x18]
// 00530301  3b3410               cmp esi, dword ptr [eax + edx]
// 00530304  7607                 jbe 0x53030d
// 00530306  57                   push edi
// 00530307  53                   push ebx
// 00530308  e8d3f0ffff           call 0x52f3e0
// 0053030d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530311  5f                   pop edi
// 00530312  5e                   pop esi
// 00530313  5d                   pop ebp
// 00530314  5b                   pop ebx
// 00530315  83c430               add esp, 0x30
// 00530318  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Pop@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEPAUInternalPacket@RakNet@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
