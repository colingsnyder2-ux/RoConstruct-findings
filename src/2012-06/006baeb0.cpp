// roc 2012-06 006baeb0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006baeb0
//
// 006baeb0  55                   push ebp
// 006baeb1  8bec                 mov ebp, esp
// 006baeb3  6aff                 push -1
// 006baeb5  686092ab00           push 0xab9260
// 006baeba  64a100000000         mov eax, dword ptr fs:[0]
// 006baec0  50                   push eax
// 006baec1  64892500000000       mov dword ptr fs:[0], esp
// 006baec8  83ec0c               sub esp, 0xc
// 006baecb  53                   push ebx
// 006baecc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006baecf  807b4500             cmp byte ptr [ebx + 0x45], 0
// 006baed3  56                   push esi
// 006baed4  8bf1                 mov esi, ecx
// 006baed6  8b4604               mov eax, dword ptr [esi + 4]
// 006baed9  57                   push edi
// 006baeda  8965f0               mov dword ptr [ebp - 0x10], esp
// 006baedd  8975e8               mov dword ptr [ebp - 0x18], esi
// 006baee0  8945ec               mov dword ptr [ebp - 0x14], eax
// 006baee3  7547                 jne 0x6baf2c
// 006baee5  0fb64b44             movzx ecx, byte ptr [ebx + 0x44]
// 006baee9  51                   push ecx
// 006baeea  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006baeed  8d530c               lea edx, [ebx + 0xc]
// 006baef0  52                   push edx
// 006baef1  50                   push eax
// 006baef2  51                   push ecx
// 006baef3  50                   push eax
// 006baef4  8bce                 mov ecx, esi
// 006baef6  e8b5fdd4ff           call 0x40acb0
// 006baefb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006baefe  807a4500             cmp byte ptr [edx + 0x45], 0
// 006baf02  8bf8                 mov edi, eax
// 006baf04  7403                 je 0x6baf09
// 006baf06  897dec               mov dword ptr [ebp - 0x14], edi
// 006baf09  8b03                 mov eax, dword ptr [ebx]
// 006baf0b  57                   push edi
// 006baf0c  50                   push eax
// 006baf0d  8bce                 mov ecx, esi
// 006baf0f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006baf16  e895ffffff           call 0x6baeb0
// 006baf1b  8907                 mov dword ptr [edi], eax
// 006baf1d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006baf20  57                   push edi
// 006baf21  51                   push ecx
// 006baf22  8bce                 mov ecx, esi
// 006baf24  e887ffffff           call 0x6baeb0
// 006baf29  894708               mov dword ptr [edi + 8], eax
// 006baf2c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006baf2f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006baf32  5f                   pop edi
// 006baf33  5e                   pop esi
// 006baf34  64890d00000000       mov dword ptr fs:[0], ecx
// 006baf3b  5b                   pop ebx
// 006baf3c  8be5                 mov esp, ebp
// 006baf3e  5d                   pop ebp
// 006baf3f  c20800               ret 8
// library ogre-1.7.0/OgreMesh.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
