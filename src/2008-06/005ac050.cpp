// roc 2008-06 005ac050  unit: RBX::VScriptContext::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac050
//
// 005ac050  53                   push ebx
// 005ac051  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005ac055  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005ac058  56                   push esi
// 005ac059  57                   push edi
// 005ac05a  8bf1                 mov esi, ecx
// 005ac05c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005ac05f  83c004               add eax, 4
// 005ac062  8b00                 mov eax, dword ptr [eax]
// 005ac064  57                   push edi
// 005ac065  50                   push eax
// 005ac066  e885f8ffff           call 0x5ab8f0
// 005ac06b  894704               mov dword ptr [edi + 4], eax
// 005ac06e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005ac071  8b5618               mov edx, dword ptr [esi + 0x18]
// 005ac074  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005ac077  8b4204               mov eax, dword ptr [edx + 4]
// 005ac07a  80781100             cmp byte ptr [eax + 0x11], 0
// 005ac07e  7537                 jne 0x5ac0b7
// 005ac080  8b08                 mov ecx, dword ptr [eax]
// 005ac082  80791100             cmp byte ptr [ecx + 0x11], 0
// 005ac086  750a                 jne 0x5ac092
// 005ac088  8bc1                 mov eax, ecx
// 005ac08a  8b08                 mov ecx, dword ptr [eax]
// 005ac08c  80791100             cmp byte ptr [ecx + 0x11], 0
// 005ac090  74f6                 je 0x5ac088
// 005ac092  8902                 mov dword ptr [edx], eax
// 005ac094  8b7618               mov esi, dword ptr [esi + 0x18]
// 005ac097  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ac09a  8b4108               mov eax, dword ptr [ecx + 8]
// 005ac09d  80781100             cmp byte ptr [eax + 0x11], 0
// 005ac0a1  750b                 jne 0x5ac0ae
// 005ac0a3  8bc8                 mov ecx, eax
// 005ac0a5  8b4108               mov eax, dword ptr [ecx + 8]
// 005ac0a8  80781100             cmp byte ptr [eax + 0x11], 0
// 005ac0ac  74f5                 je 0x5ac0a3
// 005ac0ae  5f                   pop edi
// 005ac0af  894e08               mov dword ptr [esi + 8], ecx
// 005ac0b2  5e                   pop esi
// 005ac0b3  5b                   pop ebx
// 005ac0b4  c20400               ret 4
// 005ac0b7  8912                 mov dword ptr [edx], edx
// 005ac0b9  8b7618               mov esi, dword ptr [esi + 0x18]
// 005ac0bc  5f                   pop edi
// 005ac0bd  897608               mov dword ptr [esi + 8], esi
// 005ac0c0  5e                   pop esi
// 005ac0c1  5b                   pop ebx
// 005ac0c2  c20400               ret 4
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
