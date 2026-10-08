// roc 2009-12 00487960  unit: Ogre::GfxClustererPart  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00487960
//
// 00487960  55                   push ebp
// 00487961  8bec                 mov ebp, esp
// 00487963  6aff                 push -1
// 00487965  6880f59200           push 0x92f580
// 0048796a  64a100000000         mov eax, dword ptr fs:[0]
// 00487970  50                   push eax
// 00487971  64892500000000       mov dword ptr fs:[0], esp
// 00487978  83ec0c               sub esp, 0xc
// 0048797b  53                   push ebx
// 0048797c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0048797f  807b2900             cmp byte ptr [ebx + 0x29], 0
// 00487983  56                   push esi
// 00487984  8bf1                 mov esi, ecx
// 00487986  8b4618               mov eax, dword ptr [esi + 0x18]
// 00487989  57                   push edi
// 0048798a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048798d  8975e8               mov dword ptr [ebp - 0x18], esi
// 00487990  8945ec               mov dword ptr [ebp - 0x14], eax
// 00487993  7547                 jne 0x4879dc
// 00487995  0fb64b28             movzx ecx, byte ptr [ebx + 0x28]
// 00487999  51                   push ecx
// 0048799a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0048799d  8d530c               lea edx, [ebx + 0xc]
// 004879a0  52                   push edx
// 004879a1  50                   push eax
// 004879a2  51                   push ecx
// 004879a3  50                   push eax
// 004879a4  8bce                 mov ecx, esi
// 004879a6  e825e3ffff           call 0x485cd0
// 004879ab  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004879ae  807a2900             cmp byte ptr [edx + 0x29], 0
// 004879b2  8bf8                 mov edi, eax
// 004879b4  7403                 je 0x4879b9
// 004879b6  897dec               mov dword ptr [ebp - 0x14], edi
// 004879b9  8b03                 mov eax, dword ptr [ebx]
// 004879bb  57                   push edi
// 004879bc  50                   push eax
// 004879bd  8bce                 mov ecx, esi
// 004879bf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004879c6  e895ffffff           call 0x487960
// 004879cb  8907                 mov dword ptr [edi], eax
// 004879cd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004879d0  57                   push edi
// 004879d1  51                   push ecx
// 004879d2  8bce                 mov ecx, esi
// 004879d4  e887ffffff           call 0x487960
// 004879d9  894708               mov dword ptr [edi + 8], eax
// 004879dc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004879df  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004879e2  5f                   pop edi
// 004879e3  5e                   pop esi
// 004879e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004879eb  5b                   pop ebx
// 004879ec  8be5                 mov esp, ebp
// 004879ee  5d                   pop ebp
// 004879ef  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
