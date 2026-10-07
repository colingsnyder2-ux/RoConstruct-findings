// roc 2010-06 0071f0c0  unit: RBX::BoxSelectCommand  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071f0c0
//
// 0071f0c0  55                   push ebp
// 0071f0c1  8bec                 mov ebp, esp
// 0071f0c3  6aff                 push -1
// 0071f0c5  68c0859a00           push 0x9a85c0
// 0071f0ca  64a100000000         mov eax, dword ptr fs:[0]
// 0071f0d0  50                   push eax
// 0071f0d1  64892500000000       mov dword ptr fs:[0], esp
// 0071f0d8  83ec0c               sub esp, 0xc
// 0071f0db  53                   push ebx
// 0071f0dc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0071f0df  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0071f0e3  56                   push esi
// 0071f0e4  8bf1                 mov esi, ecx
// 0071f0e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071f0e9  57                   push edi
// 0071f0ea  8965f0               mov dword ptr [ebp - 0x10], esp
// 0071f0ed  8975e8               mov dword ptr [ebp - 0x18], esi
// 0071f0f0  8945ec               mov dword ptr [ebp - 0x14], eax
// 0071f0f3  7547                 jne 0x71f13c
// 0071f0f5  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 0071f0f9  51                   push ecx
// 0071f0fa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0071f0fd  8d530c               lea edx, [ebx + 0xc]
// 0071f100  52                   push edx
// 0071f101  50                   push eax
// 0071f102  51                   push ecx
// 0071f103  50                   push eax
// 0071f104  8bce                 mov ecx, esi
// 0071f106  e825f6cfff           call 0x41e730
// 0071f10b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0071f10e  807a1500             cmp byte ptr [edx + 0x15], 0
// 0071f112  8bf8                 mov edi, eax
// 0071f114  7403                 je 0x71f119
// 0071f116  897dec               mov dword ptr [ebp - 0x14], edi
// 0071f119  8b03                 mov eax, dword ptr [ebx]
// 0071f11b  57                   push edi
// 0071f11c  50                   push eax
// 0071f11d  8bce                 mov ecx, esi
// 0071f11f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0071f126  e895ffffff           call 0x71f0c0
// 0071f12b  8907                 mov dword ptr [edi], eax
// 0071f12d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0071f130  57                   push edi
// 0071f131  51                   push ecx
// 0071f132  8bce                 mov ecx, esi
// 0071f134  e887ffffff           call 0x71f0c0
// 0071f139  894708               mov dword ptr [edi + 8], eax
// 0071f13c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0071f13f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0071f142  5f                   pop edi
// 0071f143  5e                   pop esi
// 0071f144  64890d00000000       mov dword ptr fs:[0], ecx
// 0071f14b  5b                   pop ebx
// 0071f14c  8be5                 mov esp, ebp
// 0071f14e  5d                   pop ebp
// 0071f14f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
