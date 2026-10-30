// roc 2009-12 008a8050  unit: CXTPDockingPaneBase  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8050
//
// 008a8050  6aff                 push -1
// 008a8052  68fa279600           push 0x9627fa
// 008a8057  64a100000000         mov eax, dword ptr fs:[0]
// 008a805d  50                   push eax
// 008a805e  83ec1c               sub esp, 0x1c
// 008a8061  53                   push ebx
// 008a8062  55                   push ebp
// 008a8063  56                   push esi
// 008a8064  57                   push edi
// 008a8065  a10052b600           mov eax, dword ptr [0xb65200]
// 008a806a  33c4                 xor eax, esp
// 008a806c  50                   push eax
// 008a806d  8d442430             lea eax, [esp + 0x30]
// 008a8071  64a300000000         mov dword ptr fs:[0], eax
// 008a8077  8bd9                 mov ebx, ecx
// 008a8079  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a807d  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a8081  833800               cmp dword ptr [eax], 0
// 008a8084  753c                 jne 0x8a80c2
// 008a8086  83780800             cmp dword ptr [eax + 8], 0
// 008a808a  7536                 jne 0x8a80c2
// 008a808c  83780400             cmp dword ptr [eax + 4], 0
// 008a8090  7530                 jne 0x8a80c2
// 008a8092  83780c00             cmp dword ptr [eax + 0xc], 0
// 008a8096  752a                 jne 0x8a80c2
// 008a8098  8d7370               lea esi, [ebx + 0x70]
// 008a809b  bf04000000           mov edi, 4
// 008a80a0  8b0e                 mov ecx, dword ptr [esi]
// 008a80a2  85c9                 test ecx, ecx
// 008a80a4  740f                 je 0x8a80b5
// 008a80a6  8b01                 mov eax, dword ptr [ecx]
// 008a80a8  8b5004               mov edx, dword ptr [eax + 4]
// 008a80ab  6a01                 push 1
// 008a80ad  ffd2                 call edx
// 008a80af  c70600000000         mov dword ptr [esi], 0
// 008a80b5  83c604               add esi, 4
// 008a80b8  83ef01               sub edi, 1
// 008a80bb  75e3                 jne 0x8a80a0
// 008a80bd  e946010000           jmp 0x8a8208
// 008a80c2  8d4370               lea eax, [ebx + 0x70]
// 008a80c5  33f6                 xor esi, esi
// 008a80c7  89442418             mov dword ptr [esp + 0x18], eax
// 008a80cb  8bf8                 mov edi, eax
// 008a80cd  83cdff               or ebp, 0xffffffff
// 008a80d0  833f00               cmp dword ptr [edi], 0
// 008a80d3  754d                 jne 0x8a8122
// 008a80d5  6a6c                 push 0x6c
// 008a80d7  e884b7f4ff           call 0x7f3860
// 008a80dc  83c404               add esp, 4
// 008a80df  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a80e3  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008a80eb  85c0                 test eax, eax
// 008a80ed  7409                 je 0x8a80f8
// 008a80ef  8bc8                 mov ecx, eax
// 008a80f1  e86ab80000           call 0x8b3960
// 008a80f6  eb02                 jmp 0x8a80fa
// 008a80f8  33c0                 xor eax, eax
// 008a80fa  896c2438             mov dword ptr [esp + 0x38], ebp
// 008a80fe  8907                 mov dword ptr [edi], eax
// 008a8100  83fe02               cmp esi, 2
// 008a8103  7409                 je 0x8a810e
// 008a8105  83fe03               cmp esi, 3
// 008a8108  7404                 je 0x8a810e
// 008a810a  33c9                 xor ecx, ecx
// 008a810c  eb05                 jmp 0x8a8113
// 008a810e  b901000000           mov ecx, 1
// 008a8113  51                   push ecx
// 008a8114  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 008a811a  51                   push ecx
// 008a811b  8bc8                 mov ecx, eax
// 008a811d  e8bebb0000           call 0x8b3ce0
// 008a8122  46                   inc esi
// 008a8123  83c704               add edi, 4
// 008a8126  83fe04               cmp esi, 4
// 008a8129  7ca5                 jl 0x8a80d0
// 008a812b  8b742440             mov esi, dword ptr [esp + 0x40]
// 008a812f  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a8133  8b3e                 mov edi, dword ptr [esi]
// 008a8135  0338                 add edi, dword ptr [eax]
// 008a8137  8b4e04               mov ecx, dword ptr [esi + 4]
// 008a813a  034804               add ecx, dword ptr [eax + 4]
// 008a813d  8b5e08               mov ebx, dword ptr [esi + 8]
// 008a8140  2b5808               sub ebx, dword ptr [eax + 8]
// 008a8143  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 008a8146  2b680c               sub ebp, dword ptr [eax + 0xc]
// 008a8149  8b5604               mov edx, dword ptr [esi + 4]
// 008a814c  8b460c               mov eax, dword ptr [esi + 0xc]
// 008a814f  6a01                 push 1
// 008a8151  2bc2                 sub eax, edx
// 008a8153  50                   push eax
// 008a8154  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008a8158  8b0e                 mov ecx, dword ptr [esi]
// 008a815a  8bc7                 mov eax, edi
// 008a815c  2bc1                 sub eax, ecx
// 008a815e  50                   push eax
// 008a815f  52                   push edx
// 008a8160  51                   push ecx
// 008a8161  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a8165  8b09                 mov ecx, dword ptr [ecx]
// 008a8167  e8c6baf4ff           call 0x7f3c32
// 008a816c  8b5604               mov edx, dword ptr [esi + 4]
// 008a816f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008a8172  8b4608               mov eax, dword ptr [esi + 8]
// 008a8175  6a01                 push 1
// 008a8177  2bca                 sub ecx, edx
// 008a8179  51                   push ecx
// 008a817a  2bc3                 sub eax, ebx
// 008a817c  50                   push eax
// 008a817d  52                   push edx
// 008a817e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8182  8b4a74               mov ecx, dword ptr [edx + 0x74]
// 008a8185  53                   push ebx
// 008a8186  e8a7baf4ff           call 0x7f3c32
// 008a818b  8b4604               mov eax, dword ptr [esi + 4]
// 008a818e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8192  6a01                 push 1
// 008a8194  2bd0                 sub edx, eax
// 008a8196  52                   push edx
// 008a8197  8bcb                 mov ecx, ebx
// 008a8199  2bcf                 sub ecx, edi
// 008a819b  51                   push ecx
// 008a819c  50                   push eax
// 008a819d  8b442424             mov eax, dword ptr [esp + 0x24]
// 008a81a1  894c2454             mov dword ptr [esp + 0x54], ecx
// 008a81a5  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008a81a8  57                   push edi
// 008a81a9  e884baf4ff           call 0x7f3c32
// 008a81ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 008a81b1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a81b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a81b9  6a01                 push 1
// 008a81bb  2bc5                 sub eax, ebp
// 008a81bd  50                   push eax
// 008a81be  51                   push ecx
// 008a81bf  8b4a7c               mov ecx, dword ptr [edx + 0x7c]
// 008a81c2  55                   push ebp
// 008a81c3  57                   push edi
// 008a81c4  e869baf4ff           call 0x7f3c32
// 008a81c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a81cd  89442444             mov dword ptr [esp + 0x44], eax
// 008a81d1  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008a81d9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a81dd  8b11                 mov edx, dword ptr [ecx]
// 008a81df  8b4220               mov eax, dword ptr [edx + 0x20]
// 008a81e2  6a00                 push 0
// 008a81e4  6a00                 push 0
// 008a81e6  50                   push eax
// 008a81e7  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008a81ed  8344244404           add dword ptr [esp + 0x44], 4
// 008a81f2  836c244001           sub dword ptr [esp + 0x40], 1
// 008a81f7  75e0                 jne 0x8a81d9
// 008a81f9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a81fd  893e                 mov dword ptr [esi], edi
// 008a81ff  894e04               mov dword ptr [esi + 4], ecx
// 008a8202  895e08               mov dword ptr [esi + 8], ebx
// 008a8205  896e0c               mov dword ptr [esi + 0xc], ebp
// 008a8208  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a820c  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8213  59                   pop ecx
// 008a8214  5f                   pop edi
// 008a8215  5e                   pop esi
// 008a8216  5d                   pop ebp
// 008a8217  5b                   pop ebx
// 008a8218  83c428               add esp, 0x28
// 008a821b  c20800               ret 8
// copied from an identical function in another client (function ?RepositionMargins@CXTPDockingPaneLayout@@AAEXAAVCRect@@ABV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp