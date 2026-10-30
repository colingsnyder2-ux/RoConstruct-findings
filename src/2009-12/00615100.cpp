// roc 2009-12 00615100  unit: seg_00610000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615100
//
// 00615100  53                   push ebx
// 00615101  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00615105  55                   push ebp
// 00615106  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061510a  56                   push esi
// 0061510b  8b7304               mov esi, dword ptr [ebx + 4]
// 0061510e  57                   push edi
// 0061510f  85ed                 test ebp, ebp
// 00615111  7c05                 jl 0x615118
// 00615113  83fd02               cmp ebp, 2
// 00615116  7c18                 jl 0x615130
// 00615118  8b03                 mov eax, dword ptr [ebx]
// 0061511a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00615121  8b0b                 mov ecx, dword ptr [ebx]
// 00615123  896918               mov dword ptr [ecx + 0x18], ebp
// 00615126  8b13                 mov edx, dword ptr [ebx]
// 00615128  8b02                 mov eax, dword ptr [edx]
// 0061512a  53                   push ebx
// 0061512b  ffd0                 call eax
// 0061512d  83c404               add esp, 4
// 00615130  83fd01               cmp ebp, 1
// 00615133  7560                 jne 0x615195
// 00615135  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00615138  85ff                 test edi, edi
// 0061513a  7422                 je 0x61515e
// 0061513c  8d642400             lea esp, [esp]
// 00615140  807f2200             cmp byte ptr [edi + 0x22], 0
// 00615144  7411                 je 0x615157
// 00615146  8b5730               mov edx, dword ptr [edi + 0x30]
// 00615149  8d4f28               lea ecx, [edi + 0x28]
// 0061514c  51                   push ecx
// 0061514d  53                   push ebx
// 0061514e  c6472200             mov byte ptr [edi + 0x22], 0
// 00615152  ffd2                 call edx
// 00615154  83c408               add esp, 8
// 00615157  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0061515a  85ff                 test edi, edi
// 0061515c  75e2                 jne 0x615140
// 0061515e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00615161  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00615168  85ff                 test edi, edi
// 0061516a  7422                 je 0x61518e
// 0061516c  8d642400             lea esp, [esp]
// 00615170  807f2200             cmp byte ptr [edi + 0x22], 0
// 00615174  7411                 je 0x615187
// 00615176  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 00615179  8d4728               lea eax, [edi + 0x28]
// 0061517c  50                   push eax
// 0061517d  53                   push ebx
// 0061517e  c6472200             mov byte ptr [edi + 0x22], 0
// 00615182  ffd1                 call ecx
// 00615184  83c408               add esp, 8
// 00615187  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0061518a  85ff                 test edi, edi
// 0061518c  75e2                 jne 0x615170
// 0061518e  c7464800000000       mov dword ptr [esi + 0x48], 0
// 00615195  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 00615199  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 006151a1  85c0                 test eax, eax
// 006151a3  7424                 je 0x6151c9
// 006151a5  8b5008               mov edx, dword ptr [eax + 8]
// 006151a8  8b4804               mov ecx, dword ptr [eax + 4]
// 006151ab  8b38                 mov edi, dword ptr [eax]
// 006151ad  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 006151b1  55                   push ebp
// 006151b2  50                   push eax
// 006151b3  53                   push ebx
// 006151b4  e8c7780000           call 0x61ca80
// 006151b9  296e4c               sub dword ptr [esi + 0x4c], ebp
// 006151bc  83c40c               add esp, 0xc
// 006151bf  8bc7                 mov eax, edi
// 006151c1  85ff                 test edi, edi
// 006151c3  75e0                 jne 0x6151a5
// 006151c5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006151c9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 006151cd  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 006151d5  85c0                 test eax, eax
// 006151d7  7427                 je 0x615200
// 006151d9  8da42400000000       lea esp, [esp]
// 006151e0  8b5008               mov edx, dword ptr [eax + 8]
// 006151e3  8b4804               mov ecx, dword ptr [eax + 4]
// 006151e6  8b38                 mov edi, dword ptr [eax]
// 006151e8  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 006151ec  55                   push ebp
// 006151ed  50                   push eax
// 006151ee  53                   push ebx
// 006151ef  e88c780000           call 0x61ca80
// 006151f4  296e4c               sub dword ptr [esi + 0x4c], ebp
// 006151f7  83c40c               add esp, 0xc
// 006151fa  8bc7                 mov eax, edi
// 006151fc  85ff                 test edi, edi
// 006151fe  75e0                 jne 0x6151e0
// 00615200  5f                   pop edi
// 00615201  5e                   pop esi
// 00615202  5d                   pop ebp
// 00615203  5b                   pop ebx
// 00615204  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
