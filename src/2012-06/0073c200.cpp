// roc 2012-06 0073c200  unit: RBX::VInstance::?$NonFactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073c200
//
// 0073c200  55                   push ebp
// 0073c201  8bec                 mov ebp, esp
// 0073c203  6aff                 push -1
// 0073c205  68900dac00           push 0xac0d90
// 0073c20a  64a100000000         mov eax, dword ptr fs:[0]
// 0073c210  50                   push eax
// 0073c211  64892500000000       mov dword ptr fs:[0], esp
// 0073c218  83ec0c               sub esp, 0xc
// 0073c21b  53                   push ebx
// 0073c21c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0073c21f  807b3100             cmp byte ptr [ebx + 0x31], 0
// 0073c223  56                   push esi
// 0073c224  8bf1                 mov esi, ecx
// 0073c226  8b4604               mov eax, dword ptr [esi + 4]
// 0073c229  57                   push edi
// 0073c22a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0073c22d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0073c230  8945ec               mov dword ptr [ebp - 0x14], eax
// 0073c233  7547                 jne 0x73c27c
// 0073c235  0fb64b30             movzx ecx, byte ptr [ebx + 0x30]
// 0073c239  51                   push ecx
// 0073c23a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0073c23d  8d530c               lea edx, [ebx + 0xc]
// 0073c240  52                   push edx
// 0073c241  50                   push eax
// 0073c242  51                   push ecx
// 0073c243  50                   push eax
// 0073c244  8bce                 mov ecx, esi
// 0073c246  e885a71000           call 0x8469d0
// 0073c24b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0073c24e  807a3100             cmp byte ptr [edx + 0x31], 0
// 0073c252  8bf8                 mov edi, eax
// 0073c254  7403                 je 0x73c259
// 0073c256  897dec               mov dword ptr [ebp - 0x14], edi
// 0073c259  8b03                 mov eax, dword ptr [ebx]
// 0073c25b  57                   push edi
// 0073c25c  50                   push eax
// 0073c25d  8bce                 mov ecx, esi
// 0073c25f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0073c266  e895ffffff           call 0x73c200
// 0073c26b  8907                 mov dword ptr [edi], eax
// 0073c26d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0073c270  57                   push edi
// 0073c271  51                   push ecx
// 0073c272  8bce                 mov ecx, esi
// 0073c274  e887ffffff           call 0x73c200
// 0073c279  894708               mov dword ptr [edi + 8], eax
// 0073c27c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0073c27f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0073c282  5f                   pop edi
// 0073c283  5e                   pop esi
// 0073c284  64890d00000000       mov dword ptr fs:[0], ecx
// 0073c28b  5b                   pop ebx
// 0073c28c  8be5                 mov esp, ebp
// 0073c28e  5d                   pop ebp
// 0073c28f  c20800               ret 8
// library ogre-1.6.4/OgreAnimation.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@PAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@U?$less@PAVHardwareVertexBuffer@Ogre@@@std@@V?$allocator@U?$pair@QAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@U?$less@PAVHardwareVertexBuffer@Ogre@@@std@@V?$allocator@U?$pair@QAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@@std@@@6@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp
