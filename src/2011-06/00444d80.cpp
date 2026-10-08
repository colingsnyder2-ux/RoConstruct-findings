// roc 2011-06 00444d80  unit: CPropGrid::UpdateItemsJob  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00444d80
//
// 00444d80  55                   push ebp
// 00444d81  8bec                 mov ebp, esp
// 00444d83  6aff                 push -1
// 00444d85  6830149d00           push 0x9d1430
// 00444d8a  64a100000000         mov eax, dword ptr fs:[0]
// 00444d90  50                   push eax
// 00444d91  64892500000000       mov dword ptr fs:[0], esp
// 00444d98  83ec0c               sub esp, 0xc
// 00444d9b  53                   push ebx
// 00444d9c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00444d9f  807b1100             cmp byte ptr [ebx + 0x11], 0
// 00444da3  56                   push esi
// 00444da4  8bf1                 mov esi, ecx
// 00444da6  8b4604               mov eax, dword ptr [esi + 4]
// 00444da9  57                   push edi
// 00444daa  8965f0               mov dword ptr [ebp - 0x10], esp
// 00444dad  8975e8               mov dword ptr [ebp - 0x18], esi
// 00444db0  8945ec               mov dword ptr [ebp - 0x14], eax
// 00444db3  7547                 jne 0x444dfc
// 00444db5  0fb64b10             movzx ecx, byte ptr [ebx + 0x10]
// 00444db9  51                   push ecx
// 00444dba  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00444dbd  8d530c               lea edx, [ebx + 0xc]
// 00444dc0  52                   push edx
// 00444dc1  50                   push eax
// 00444dc2  51                   push ecx
// 00444dc3  50                   push eax
// 00444dc4  8bce                 mov ecx, esi
// 00444dc6  e8456d2900           call 0x6dbb10
// 00444dcb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00444dce  807a1100             cmp byte ptr [edx + 0x11], 0
// 00444dd2  8bf8                 mov edi, eax
// 00444dd4  7403                 je 0x444dd9
// 00444dd6  897dec               mov dword ptr [ebp - 0x14], edi
// 00444dd9  8b03                 mov eax, dword ptr [ebx]
// 00444ddb  57                   push edi
// 00444ddc  50                   push eax
// 00444ddd  8bce                 mov ecx, esi
// 00444ddf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00444de6  e895ffffff           call 0x444d80
// 00444deb  8907                 mov dword ptr [edi], eax
// 00444ded  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00444df0  57                   push edi
// 00444df1  51                   push ecx
// 00444df2  8bce                 mov ecx, esi
// 00444df4  e887ffffff           call 0x444d80
// 00444df9  894708               mov dword ptr [edi + 8], eax
// 00444dfc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00444dff  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00444e02  5f                   pop edi
// 00444e03  5e                   pop esi
// 00444e04  64890d00000000       mov dword ptr fs:[0], ecx
// 00444e0b  5b                   pop ebx
// 00444e0c  8be5                 mov esp, ebp
// 00444e0e  5d                   pop ebp
// 00444e0f  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
