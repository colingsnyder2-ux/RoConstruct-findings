// roc 2009-12 007c6940  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c6940
//
// 007c6940  55                   push ebp
// 007c6941  8bec                 mov ebp, esp
// 007c6943  6aff                 push -1
// 007c6945  68b0689500           push 0x9568b0
// 007c694a  64a100000000         mov eax, dword ptr fs:[0]
// 007c6950  50                   push eax
// 007c6951  64892500000000       mov dword ptr fs:[0], esp
// 007c6958  83ec0c               sub esp, 0xc
// 007c695b  53                   push ebx
// 007c695c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 007c695f  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 007c6963  56                   push esi
// 007c6964  8bf1                 mov esi, ecx
// 007c6966  8b4618               mov eax, dword ptr [esi + 0x18]
// 007c6969  57                   push edi
// 007c696a  8965f0               mov dword ptr [ebp - 0x10], esp
// 007c696d  8975e8               mov dword ptr [ebp - 0x18], esi
// 007c6970  8945ec               mov dword ptr [ebp - 0x14], eax
// 007c6973  7547                 jne 0x7c69bc
// 007c6975  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 007c6979  51                   push ecx
// 007c697a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007c697d  8d530c               lea edx, [ebx + 0xc]
// 007c6980  52                   push edx
// 007c6981  50                   push eax
// 007c6982  51                   push ecx
// 007c6983  50                   push eax
// 007c6984  8bce                 mov ecx, esi
// 007c6986  e8b540cbff           call 0x47aa40
// 007c698b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 007c698e  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 007c6992  8bf8                 mov edi, eax
// 007c6994  7403                 je 0x7c6999
// 007c6996  897dec               mov dword ptr [ebp - 0x14], edi
// 007c6999  8b03                 mov eax, dword ptr [ebx]
// 007c699b  57                   push edi
// 007c699c  50                   push eax
// 007c699d  8bce                 mov ecx, esi
// 007c699f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007c69a6  e895ffffff           call 0x7c6940
// 007c69ab  8907                 mov dword ptr [edi], eax
// 007c69ad  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c69b0  57                   push edi
// 007c69b1  51                   push ecx
// 007c69b2  8bce                 mov ecx, esi
// 007c69b4  e887ffffff           call 0x7c6940
// 007c69b9  894708               mov dword ptr [edi + 8], eax
// 007c69bc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007c69bf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 007c69c2  5f                   pop edi
// 007c69c3  5e                   pop esi
// 007c69c4  64890d00000000       mov dword ptr fs:[0], ecx
// 007c69cb  5b                   pop ebx
// 007c69cc  8be5                 mov esp, ebp
// 007c69ce  5d                   pop ebp
// 007c69cf  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
