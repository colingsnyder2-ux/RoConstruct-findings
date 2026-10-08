// roc 2007-08 00537990  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537990
//
// 00537990  55                   push ebp
// 00537991  8bec                 mov ebp, esp
// 00537993  6aff                 push -1
// 00537995  68300b7500           push 0x750b30
// 0053799a  64a100000000         mov eax, dword ptr fs:[0]
// 005379a0  50                   push eax
// 005379a1  64892500000000       mov dword ptr fs:[0], esp
// 005379a8  83ec0c               sub esp, 0xc
// 005379ab  53                   push ebx
// 005379ac  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005379af  807b1100             cmp byte ptr [ebx + 0x11], 0
// 005379b3  56                   push esi
// 005379b4  8bf1                 mov esi, ecx
// 005379b6  8b4604               mov eax, dword ptr [esi + 4]
// 005379b9  57                   push edi
// 005379ba  8965f0               mov dword ptr [ebp - 0x10], esp
// 005379bd  8975e8               mov dword ptr [ebp - 0x18], esi
// 005379c0  8945ec               mov dword ptr [ebp - 0x14], eax
// 005379c3  7547                 jne 0x537a0c
// 005379c5  0fb64b10             movzx ecx, byte ptr [ebx + 0x10]
// 005379c9  51                   push ecx
// 005379ca  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005379cd  8d530c               lea edx, [ebx + 0xc]
// 005379d0  52                   push edx
// 005379d1  50                   push eax
// 005379d2  51                   push ecx
// 005379d3  50                   push eax
// 005379d4  8bce                 mov ecx, esi
// 005379d6  e805d40c00           call 0x604de0
// 005379db  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005379de  807a1100             cmp byte ptr [edx + 0x11], 0
// 005379e2  8bf8                 mov edi, eax
// 005379e4  7403                 je 0x5379e9
// 005379e6  897dec               mov dword ptr [ebp - 0x14], edi
// 005379e9  8b03                 mov eax, dword ptr [ebx]
// 005379eb  57                   push edi
// 005379ec  50                   push eax
// 005379ed  8bce                 mov ecx, esi
// 005379ef  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005379f6  e895ffffff           call 0x537990
// 005379fb  8907                 mov dword ptr [edi], eax
// 005379fd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00537a00  57                   push edi
// 00537a01  51                   push ecx
// 00537a02  8bce                 mov ecx, esi
// 00537a04  e887ffffff           call 0x537990
// 00537a09  894708               mov dword ptr [edi + 8], eax
// 00537a0c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00537a0f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00537a12  5f                   pop edi
// 00537a13  5e                   pop esi
// 00537a14  64890d00000000       mov dword ptr fs:[0], ecx
// 00537a1b  5b                   pop ebx
// 00537a1c  8be5                 mov esp, ebp
// 00537a1e  5d                   pop ebp
// 00537a1f  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
