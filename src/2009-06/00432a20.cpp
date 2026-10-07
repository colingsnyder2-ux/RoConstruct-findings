// roc 2009-06 00432a20  unit: IIHAAH::?$CMap  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00432a20
//
// 00432a20  53                   push ebx
// 00432a21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00432a25  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00432a28  56                   push esi
// 00432a29  57                   push edi
// 00432a2a  8bf1                 mov esi, ecx
// 00432a2c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00432a2f  83c004               add eax, 4
// 00432a32  8b00                 mov eax, dword ptr [eax]
// 00432a34  57                   push edi
// 00432a35  50                   push eax
// 00432a36  e835fcffff           call 0x432670
// 00432a3b  894704               mov dword ptr [edi + 4], eax
// 00432a3e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00432a41  8b5618               mov edx, dword ptr [esi + 0x18]
// 00432a44  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00432a47  8b4204               mov eax, dword ptr [edx + 4]
// 00432a4a  80781100             cmp byte ptr [eax + 0x11], 0
// 00432a4e  7537                 jne 0x432a87
// 00432a50  8b08                 mov ecx, dword ptr [eax]
// 00432a52  80791100             cmp byte ptr [ecx + 0x11], 0
// 00432a56  750a                 jne 0x432a62
// 00432a58  8bc1                 mov eax, ecx
// 00432a5a  8b08                 mov ecx, dword ptr [eax]
// 00432a5c  80791100             cmp byte ptr [ecx + 0x11], 0
// 00432a60  74f6                 je 0x432a58
// 00432a62  8902                 mov dword ptr [edx], eax
// 00432a64  8b7618               mov esi, dword ptr [esi + 0x18]
// 00432a67  8b4e04               mov ecx, dword ptr [esi + 4]
// 00432a6a  8b4108               mov eax, dword ptr [ecx + 8]
// 00432a6d  80781100             cmp byte ptr [eax + 0x11], 0
// 00432a71  750b                 jne 0x432a7e
// 00432a73  8bc8                 mov ecx, eax
// 00432a75  8b4108               mov eax, dword ptr [ecx + 8]
// 00432a78  80781100             cmp byte ptr [eax + 0x11], 0
// 00432a7c  74f5                 je 0x432a73
// 00432a7e  5f                   pop edi
// 00432a7f  894e08               mov dword ptr [esi + 8], ecx
// 00432a82  5e                   pop esi
// 00432a83  5b                   pop ebx
// 00432a84  c20400               ret 4
// 00432a87  8912                 mov dword ptr [edx], edx
// 00432a89  8b7618               mov esi, dword ptr [esi + 0x18]
// 00432a8c  5f                   pop edi
// 00432a8d  897608               mov dword ptr [esi + 8], esi
// 00432a90  5e                   pop esi
// 00432a91  5b                   pop ebx
// 00432a92  c20400               ret 4
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
