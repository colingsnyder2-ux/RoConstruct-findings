// roc 2011-06 007d0f50  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d0f50
//
// 007d0f50  55                   push ebp
// 007d0f51  8bec                 mov ebp, esp
// 007d0f53  6aff                 push -1
// 007d0f55  68f000a000           push 0xa000f0
// 007d0f5a  64a100000000         mov eax, dword ptr fs:[0]
// 007d0f60  50                   push eax
// 007d0f61  64892500000000       mov dword ptr fs:[0], esp
// 007d0f68  83ec0c               sub esp, 0xc
// 007d0f6b  53                   push ebx
// 007d0f6c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 007d0f6f  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 007d0f73  56                   push esi
// 007d0f74  8bf1                 mov esi, ecx
// 007d0f76  8b4604               mov eax, dword ptr [esi + 4]
// 007d0f79  57                   push edi
// 007d0f7a  8965f0               mov dword ptr [ebp - 0x10], esp
// 007d0f7d  8975e8               mov dword ptr [ebp - 0x18], esi
// 007d0f80  8945ec               mov dword ptr [ebp - 0x14], eax
// 007d0f83  7547                 jne 0x7d0fcc
// 007d0f85  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 007d0f89  51                   push ecx
// 007d0f8a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007d0f8d  8d530c               lea edx, [ebx + 0xc]
// 007d0f90  52                   push edx
// 007d0f91  50                   push eax
// 007d0f92  51                   push ecx
// 007d0f93  50                   push eax
// 007d0f94  8bce                 mov ecx, esi
// 007d0f96  e8c5c6fbff           call 0x78d660
// 007d0f9b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 007d0f9e  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 007d0fa2  8bf8                 mov edi, eax
// 007d0fa4  7403                 je 0x7d0fa9
// 007d0fa6  897dec               mov dword ptr [ebp - 0x14], edi
// 007d0fa9  8b03                 mov eax, dword ptr [ebx]
// 007d0fab  57                   push edi
// 007d0fac  50                   push eax
// 007d0fad  8bce                 mov ecx, esi
// 007d0faf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007d0fb6  e895ffffff           call 0x7d0f50
// 007d0fbb  8907                 mov dword ptr [edi], eax
// 007d0fbd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007d0fc0  57                   push edi
// 007d0fc1  51                   push ecx
// 007d0fc2  8bce                 mov ecx, esi
// 007d0fc4  e887ffffff           call 0x7d0f50
// 007d0fc9  894708               mov dword ptr [edi + 8], eax
// 007d0fcc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007d0fcf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 007d0fd2  5f                   pop edi
// 007d0fd3  5e                   pop esi
// 007d0fd4  64890d00000000       mov dword ptr fs:[0], ecx
// 007d0fdb  5b                   pop ebx
// 007d0fdc  8be5                 mov esp, ebp
// 007d0fde  5d                   pop ebp
// 007d0fdf  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
