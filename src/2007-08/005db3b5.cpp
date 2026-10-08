// from server: 100% by auto
// roc 2007-08 005db3b5  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db3b5
//
// 005db3b5  6a00                 push 0
// 005db3b7  6a00                 push 0
// 005db3b9  e8e0570500           call 0x630b9e
// 005db3be  8b5e08               mov ebx, dword ptr [esi + 8]
// 005db3c1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005db3c4  8bc3                 mov eax, ebx
// 005db3c6  2bc7                 sub eax, edi
// 005db3c8  c1f802               sar eax, 2
// 005db3cb  3bc2                 cmp eax, edx
// 005db3cd  7365                 jae 0x5db434
// 005db3cf  8d049500000000       lea eax, [edx*4]
// 005db3d6  89450c               mov dword ptr [ebp + 0xc], eax
// 005db3d9  03c7                 add eax, edi
// 005db3db  50                   push eax
// 005db3dc  53                   push ebx
// 005db3dd  57                   push edi
// 005db3de  8bce                 mov ecx, esi
// 005db3e0  e84bfdffff           call 0x5db130
// 005db3e5  8b4608               mov eax, dword ptr [esi + 8]
// 005db3e8  8bd0                 mov edx, eax
// 005db3ea  8d4d14               lea ecx, [ebp + 0x14]
// 005db3ed  51                   push ecx
// 005db3ee  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005db3f1  2bd7                 sub edx, edi
// 005db3f3  c1fa02               sar edx, 2
// 005db3f6  2bca                 sub ecx, edx
// 005db3f8  51                   push ecx
// 005db3f9  50                   push eax
// 005db3fa  8bce                 mov ecx, esi
// 005db3fc  c745fc02000000       mov dword ptr [ebp - 4], 2
// 005db403  e85822fcff           call 0x59d660
// 005db408  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005db40b  014608               add dword ptr [esi + 8], eax
// 005db40e  8b7608               mov esi, dword ptr [esi + 8]
// 005db411  8d4d14               lea ecx, [ebp + 0x14]
// 005db414  51                   push ecx
// 005db415  2bf0                 sub esi, eax
// 005db417  56                   push esi
// 005db418  57                   push edi
// 005db419  e8d2bcfaff           call 0x5870f0
// 005db41e  83c40c               add esp, 0xc
// 005db421  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005db424  64890d00000000       mov dword ptr fs:[0], ecx
// 005db42b  5f                   pop edi
// 005db42c  5e                   pop esi
// 005db42d  5b                   pop ebx
// 005db42e  8be5                 mov esp, ebp
// 005db430  5d                   pop ebp
// 005db431  c21000               ret 0x10
// 005db434  8d0c9500000000       lea ecx, [edx*4]
// 005db43b  53                   push ebx
// 005db43c  8bc3                 mov eax, ebx
// 005db43e  2bc1                 sub eax, ecx
// 005db440  53                   push ebx
// 005db441  894d0c               mov dword ptr [ebp + 0xc], ecx
// 005db444  50                   push eax
// 005db445  8bce                 mov ecx, esi
// 005db447  894510               mov dword ptr [ebp + 0x10], eax
// 005db44a  e8e1fcffff           call 0x5db130
// 005db44f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005db452  53                   push ebx
// 005db453  52                   push edx
// 005db454  57                   push edi
// 005db455  894608               mov dword ptr [esi + 8], eax
// 005db458  e8c345f9ff           call 0x56fa20
// 005db45d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005db460  8d4514               lea eax, [ebp + 0x14]
// 005db463  50                   push eax
// 005db464  03cf                 add ecx, edi
// 005db466  51                   push ecx
// 005db467  57                   push edi
// 005db468  e883bcfaff           call 0x5870f0
// 005db46d  83c418               add esp, 0x18
// 005db470  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005db473  5f                   pop edi
// 005db474  5e                   pop esi
// 005db475  64890d00000000       mov dword ptr fs:[0], ecx
// 005db47c  5b                   pop ebx
// 005db47d  8be5                 mov esp, ebp
// 005db47f  5d                   pop ebp
// 005db480  c21000               ret 0x10
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function __catch$?_Insert_n@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEXV?$_Vector_iterator@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@2@IABU?$digraph@G@re_detail@boost@@@Z$2)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
