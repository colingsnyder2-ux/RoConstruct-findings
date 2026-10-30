// from server: 100% by auto
// roc 2007-08 005bd680  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd680
//
// 005bd680  56                   push esi
// 005bd681  8b742408             mov esi, dword ptr [esp + 8]
// 005bd685  57                   push edi
// 005bd686  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bd68a  81ffefd8ffff         cmp edi, 0xffffd8ef
// 005bd690  7516                 jne 0x5bd6a8
// 005bd692  8b4614               mov eax, dword ptr [esi + 0x14]
// 005bd695  3b4628               cmp eax, dword ptr [esi + 0x28]
// 005bd698  750e                 jne 0x5bd6a8
// 005bd69a  6848907b00           push 0x7b9048
// 005bd69f  56                   push esi
// 005bd6a0  e85b990000           call 0x5c7000
// 005bd6a5  83c408               add esp, 8
// 005bd6a8  8bc7                 mov eax, edi
// 005bd6aa  8bce                 mov ecx, esi
// 005bd6ac  e87ffdffff           call 0x5bd430
// 005bd6b1  81ffefd8ffff         cmp edi, 0xffffd8ef
// 005bd6b7  7529                 jne 0x5bd6e2
// 005bd6b9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005bd6bc  8b5104               mov edx, dword ptr [ecx + 4]
// 005bd6bf  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bd6c2  8b02                 mov eax, dword ptr [edx]
// 005bd6c4  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 005bd6c7  89500c               mov dword ptr [eax + 0xc], edx
// 005bd6ca  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bd6cd  ba04000000           mov edx, 4
// 005bd6d2  3951f8               cmp dword ptr [ecx - 8], edx
// 005bd6d5  7c58                 jl 0x5bd72f
// 005bd6d7  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 005bd6da  f6410503             test byte ptr [ecx + 5], 3
// 005bd6de  744f                 je 0x5bd72f
// 005bd6e0  eb3d                 jmp 0x5bd71f
// 005bd6e2  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bd6e5  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 005bd6e8  83e910               sub ecx, 0x10
// 005bd6eb  81ffeed8ffff         cmp edi, 0xffffd8ee
// 005bd6f1  8910                 mov dword ptr [eax], edx
// 005bd6f3  8b5104               mov edx, dword ptr [ecx + 4]
// 005bd6f6  895004               mov dword ptr [eax + 4], edx
// 005bd6f9  8b4908               mov ecx, dword ptr [ecx + 8]
// 005bd6fc  894808               mov dword ptr [eax + 8], ecx
// 005bd6ff  7d2e                 jge 0x5bd72f
// 005bd701  8b4608               mov eax, dword ptr [esi + 8]
// 005bd704  ba04000000           mov edx, 4
// 005bd709  3950f8               cmp dword ptr [eax - 8], edx
// 005bd70c  7c21                 jl 0x5bd72f
// 005bd70e  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 005bd711  f6410503             test byte ptr [ecx + 5], 3
// 005bd715  7418                 je 0x5bd72f
// 005bd717  8b4614               mov eax, dword ptr [esi + 0x14]
// 005bd71a  8b4004               mov eax, dword ptr [eax + 4]
// 005bd71d  8b00                 mov eax, dword ptr [eax]
// 005bd71f  845005               test byte ptr [eax + 5], dl
// 005bd722  740b                 je 0x5bd72f
// 005bd724  51                   push ecx
// 005bd725  50                   push eax
// 005bd726  56                   push esi
// 005bd727  e8c4270500           call 0x60fef0
// 005bd72c  83c40c               add esp, 0xc
// 005bd72f  834608f0             add dword ptr [esi + 8], -0x10
// 005bd733  5f                   pop edi
// 005bd734  5e                   pop esi
// 005bd735  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
