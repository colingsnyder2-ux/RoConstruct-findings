// from server: 100% by auto
// roc 2008-06 00651420  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651420
//
// 00651420  55                   push ebp
// 00651421  8bec                 mov ebp, esp
// 00651423  6aff                 push -1
// 00651425  6820b77d00           push 0x7db720
// 0065142a  64a100000000         mov eax, dword ptr fs:[0]
// 00651430  50                   push eax
// 00651431  64892500000000       mov dword ptr fs:[0], esp
// 00651438  83ec0c               sub esp, 0xc
// 0065143b  53                   push ebx
// 0065143c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0065143f  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 00651443  56                   push esi
// 00651444  8bf1                 mov esi, ecx
// 00651446  8b4618               mov eax, dword ptr [esi + 0x18]
// 00651449  57                   push edi
// 0065144a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0065144d  8975e8               mov dword ptr [ebp - 0x18], esi
// 00651450  8945ec               mov dword ptr [ebp - 0x14], eax
// 00651453  7547                 jne 0x65149c
// 00651455  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 00651459  51                   push ecx
// 0065145a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0065145d  8d530c               lea edx, [ebx + 0xc]
// 00651460  52                   push edx
// 00651461  50                   push eax
// 00651462  51                   push ecx
// 00651463  50                   push eax
// 00651464  8bce                 mov ecx, esi
// 00651466  e8c5eb0300           call 0x690030
// 0065146b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0065146e  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 00651472  8bf8                 mov edi, eax
// 00651474  7403                 je 0x651479
// 00651476  897dec               mov dword ptr [ebp - 0x14], edi
// 00651479  8b03                 mov eax, dword ptr [ebx]
// 0065147b  57                   push edi
// 0065147c  50                   push eax
// 0065147d  8bce                 mov ecx, esi
// 0065147f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00651486  e895ffffff           call 0x651420
// 0065148b  8907                 mov dword ptr [edi], eax
// 0065148d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00651490  57                   push edi
// 00651491  51                   push ecx
// 00651492  8bce                 mov ecx, esi
// 00651494  e887ffffff           call 0x651420
// 00651499  894708               mov dword ptr [edi + 8], eax
// 0065149c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0065149f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006514a2  5f                   pop edi
// 006514a3  5e                   pop esi
// 006514a4  64890d00000000       mov dword ptr fs:[0], ecx
// 006514ab  5b                   pop ebx
// 006514ac  8be5                 mov esp, ebp
// 006514ae  5d                   pop ebp
// 006514af  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
