// from server: 100% by auto
// roc 2008-06 006e21c0  unit: MyXTPCommandBars  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e21c0
//
// 006e21c0  55                   push ebp
// 006e21c1  8bec                 mov ebp, esp
// 006e21c3  6aff                 push -1
// 006e21c5  6848247e00           push 0x7e2448
// 006e21ca  64a100000000         mov eax, dword ptr fs:[0]
// 006e21d0  50                   push eax
// 006e21d1  83ec1c               sub esp, 0x1c
// 006e21d4  53                   push ebx
// 006e21d5  56                   push esi
// 006e21d6  57                   push edi
// 006e21d7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006e21dc  33c5                 xor eax, ebp
// 006e21de  50                   push eax
// 006e21df  8d45f4               lea eax, [ebp - 0xc]
// 006e21e2  64a300000000         mov dword ptr fs:[0], eax
// 006e21e8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006e21eb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006e21ee  8b01                 mov eax, dword ptr [ecx]
// 006e21f0  8b5070               mov edx, dword ptr [eax + 0x70]
// 006e21f3  33db                 xor ebx, ebx
// 006e21f5  68c00d8100           push 0x810dc0
// 006e21fa  895dfc               mov dword ptr [ebp - 4], ebx
// 006e21fd  ffd2                 call edx
// 006e21ff  8bf0                 mov esi, eax
// 006e2201  8975e8               mov dword ptr [ebp - 0x18], esi
// 006e2204  8b06                 mov eax, dword ptr [esi]
// 006e2206  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 006e220c  688c658500           push 0x85658c
// 006e2211  8bce                 mov ecx, esi
// 006e2213  c645fc01             mov byte ptr [ebp - 4], 1
// 006e2217  ffd2                 call edx
// 006e2219  8bf8                 mov edi, eax
// 006e221b  897de4               mov dword ptr [ebp - 0x1c], edi
// 006e221e  8b07                 mov eax, dword ptr [edi]
// 006e2220  8b5004               mov edx, dword ptr [eax + 4]
// 006e2223  53                   push ebx
// 006e2224  53                   push ebx
// 006e2225  8bcf                 mov ecx, edi
// 006e2227  c645fc02             mov byte ptr [ebp - 4], 2
// 006e222b  ffd2                 call edx
// 006e222d  8945ec               mov dword ptr [ebp - 0x14], eax
// 006e2230  395dec               cmp dword ptr [ebp - 0x14], ebx
// 006e2233  0f84b1000000         je 0x6e22ea
// 006e2239  8b07                 mov eax, dword ptr [edi]
// 006e223b  8b5008               mov edx, dword ptr [eax + 8]
// 006e223e  8d4dec               lea ecx, [ebp - 0x14]
// 006e2241  51                   push ecx
// 006e2242  8bcf                 mov ecx, edi
// 006e2244  ffd2                 call edx
// 006e2246  8bf0                 mov esi, eax
// 006e2248  8975e0               mov dword ptr [ebp - 0x20], esi
// 006e224b  c645fc03             mov byte ptr [ebp - 4], 3
// 006e224f  895d08               mov dword ptr [ebp + 8], ebx
// 006e2252  e87928fdff           call 0x6b4ad0
// 006e2257  8b16                 mov edx, dword ptr [esi]
// 006e2259  8b5264               mov edx, dword ptr [edx + 0x64]
// 006e225c  50                   push eax
// 006e225d  8d4508               lea eax, [ebp + 8]
// 006e2260  50                   push eax
// 006e2261  8bce                 mov ecx, esi
// 006e2263  ffd2                 call edx
// 006e2265  3bc3                 cmp eax, ebx
// 006e2267  740e                 je 0x6e2277
// 006e2269  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006e226c  8b01                 mov eax, dword ptr [ecx]
// 006e226e  8b90a4010000         mov edx, dword ptr [eax + 0x1a4]
// 006e2274  56                   push esi
// 006e2275  ffd2                 call edx
// 006e2277  8b4508               mov eax, dword ptr [ebp + 8]
// 006e227a  3bc3                 cmp eax, ebx
// 006e227c  753e                 jne 0x6e22bc
// 006e227e  8bce                 mov ecx, esi
// 006e2280  c645fc02             mov byte ptr [ebp - 4], 2
// 006e2284  e85be9fbff           call 0x6a0be4
// 006e2289  8b07                 mov eax, dword ptr [edi]
// 006e228b  8b10                 mov edx, dword ptr [eax]
// 006e228d  6a01                 push 1
// 006e228f  8bcf                 mov ecx, edi
// 006e2291  c645fc01             mov byte ptr [ebp - 4], 1
// 006e2295  ffd2                 call edx
// 006e2297  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006e229a  885dfc               mov byte ptr [ebp - 4], bl
// 006e229d  3bcb                 cmp ecx, ebx
// 006e229f  7405                 je 0x6e22a6
// 006e22a1  e83ee9fbff           call 0x6a0be4
// 006e22a6  33c0                 xor eax, eax
// 006e22a8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e22ab  64890d00000000       mov dword ptr fs:[0], ecx
// 006e22b2  59                   pop ecx
// 006e22b3  5f                   pop edi
// 006e22b4  5e                   pop esi
// 006e22b5  5b                   pop ebx
// 006e22b6  8be5                 mov esp, ebp
// 006e22b8  5d                   pop ebp
// 006e22b9  c20800               ret 8
// 006e22bc  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 006e22c2  8b01                 mov eax, dword ptr [ecx]
// 006e22c4  8b5074               mov edx, dword ptr [eax + 0x74]
// 006e22c7  ffd2                 call edx
// 006e22c9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006e22cc  8b01                 mov eax, dword ptr [ecx]
// 006e22ce  8b5508               mov edx, dword ptr [ebp + 8]
// 006e22d1  8b4058               mov eax, dword ptr [eax + 0x58]
// 006e22d4  52                   push edx
// 006e22d5  ffd0                 call eax
// 006e22d7  8bce                 mov ecx, esi
// 006e22d9  c645fc02             mov byte ptr [ebp - 4], 2
// 006e22dd  e802e9fbff           call 0x6a0be4
// 006e22e2  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 006e22e5  e946ffffff           jmp 0x6e2230
// 006e22ea  8b17                 mov edx, dword ptr [edi]
// 006e22ec  8b02                 mov eax, dword ptr [edx]
// 006e22ee  6a01                 push 1
// 006e22f0  8bcf                 mov ecx, edi
// 006e22f2  c645fc01             mov byte ptr [ebp - 4], 1
// 006e22f6  ffd0                 call eax
// 006e22f8  885dfc               mov byte ptr [ebp - 4], bl
// 006e22fb  3bf3                 cmp esi, ebx
// 006e22fd  7407                 je 0x6e2306
// 006e22ff  8bce                 mov ecx, esi
// 006e2301  e8dee8fbff           call 0x6a0be4
// 006e2306  b801000000           mov eax, 1
// 006e230b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e230e  64890d00000000       mov dword ptr fs:[0], ecx
// 006e2315  59                   pop ecx
// 006e2316  5f                   pop edi
// 006e2317  5e                   pop esi
// 006e2318  5b                   pop ebx
// 006e2319  8be5                 mov esp, ebp
// 006e231b  5d                   pop ebp
// 006e231c  c20800               ret 8
// 006e231f  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 006e2322  e829e6fbff           call 0x6a0950
// 006e2327  b8a6226e00           mov eax, 0x6e22a6
// 006e232c  c3                   ret 
// 006e232d  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 006e2330  e81be6fbff           call 0x6a0950
// 006e2335  b8a6226e00           mov eax, 0x6e22a6
// 006e233a  c3                   ret 

// from server: 100% by tester
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockState.cpp
