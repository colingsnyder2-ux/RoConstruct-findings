// roc 2012-06 0073c400  unit: RBX::VInstance::?$NonFactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073c400
//
// 0073c400  53                   push ebx
// 0073c401  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0073c405  8b4304               mov eax, dword ptr [ebx + 4]
// 0073c408  56                   push esi
// 0073c409  57                   push edi
// 0073c40a  8bf1                 mov esi, ecx
// 0073c40c  8b7e04               mov edi, dword ptr [esi + 4]
// 0073c40f  83c004               add eax, 4
// 0073c412  8b00                 mov eax, dword ptr [eax]
// 0073c414  57                   push edi
// 0073c415  50                   push eax
// 0073c416  e8e5fdffff           call 0x73c200
// 0073c41b  894704               mov dword ptr [edi + 4], eax
// 0073c41e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0073c421  8b5604               mov edx, dword ptr [esi + 4]
// 0073c424  894e08               mov dword ptr [esi + 8], ecx
// 0073c427  8b4204               mov eax, dword ptr [edx + 4]
// 0073c42a  80783100             cmp byte ptr [eax + 0x31], 0
// 0073c42e  7537                 jne 0x73c467
// 0073c430  8b08                 mov ecx, dword ptr [eax]
// 0073c432  80793100             cmp byte ptr [ecx + 0x31], 0
// 0073c436  750a                 jne 0x73c442
// 0073c438  8bc1                 mov eax, ecx
// 0073c43a  8b08                 mov ecx, dword ptr [eax]
// 0073c43c  80793100             cmp byte ptr [ecx + 0x31], 0
// 0073c440  74f6                 je 0x73c438
// 0073c442  8902                 mov dword ptr [edx], eax
// 0073c444  8b7604               mov esi, dword ptr [esi + 4]
// 0073c447  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073c44a  8b4108               mov eax, dword ptr [ecx + 8]
// 0073c44d  80783100             cmp byte ptr [eax + 0x31], 0
// 0073c451  750b                 jne 0x73c45e
// 0073c453  8bc8                 mov ecx, eax
// 0073c455  8b4108               mov eax, dword ptr [ecx + 8]
// 0073c458  80783100             cmp byte ptr [eax + 0x31], 0
// 0073c45c  74f5                 je 0x73c453
// 0073c45e  5f                   pop edi
// 0073c45f  894e08               mov dword ptr [esi + 8], ecx
// 0073c462  5e                   pop esi
// 0073c463  5b                   pop ebx
// 0073c464  c20400               ret 4
// 0073c467  8912                 mov dword ptr [edx], edx
// 0073c469  8b7604               mov esi, dword ptr [esi + 4]
// 0073c46c  5f                   pop edi
// 0073c46d  897608               mov dword ptr [esi + 8], esi
// 0073c470  5e                   pop esi
// 0073c471  5b                   pop ebx
// 0073c472  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@PAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@U?$less@PAVHardwareVertexBuffer@Ogre@@@std@@V?$allocator@U?$pair@QAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@@std@@@6@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp
