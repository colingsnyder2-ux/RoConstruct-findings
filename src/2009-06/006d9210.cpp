// roc 2009-06 006d9210  unit: RBX::SleepStage  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d9210
//
// 006d9210  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006d9213  8b4204               mov eax, dword ptr [edx + 4]
// 006d9216  80781100             cmp byte ptr [eax + 0x11], 0
// 006d921a  53                   push ebx
// 006d921b  55                   push ebp
// 006d921c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006d9220  56                   push esi
// 006d9221  8bda                 mov ebx, edx
// 006d9223  752e                 jne 0x6d9253
// 006d9225  57                   push edi
// 006d9226  8b7d00               mov edi, dword ptr [ebp]
// 006d9229  8da42400000000       lea esp, [esp]
// 006d9230  8b700c               mov esi, dword ptr [eax + 0xc]
// 006d9233  3bf7                 cmp esi, edi
// 006d9235  7305                 jae 0x6d923c
// 006d9237  8b4008               mov eax, dword ptr [eax + 8]
// 006d923a  eb10                 jmp 0x6d924c
// 006d923c  807a1100             cmp byte ptr [edx + 0x11], 0
// 006d9240  7406                 je 0x6d9248
// 006d9242  3bfe                 cmp edi, esi
// 006d9244  7302                 jae 0x6d9248
// 006d9246  8bd0                 mov edx, eax
// 006d9248  8bd8                 mov ebx, eax
// 006d924a  8b00                 mov eax, dword ptr [eax]
// 006d924c  80781100             cmp byte ptr [eax + 0x11], 0
// 006d9250  74de                 je 0x6d9230
// 006d9252  5f                   pop edi
// 006d9253  807a1100             cmp byte ptr [edx + 0x11], 0
// 006d9257  7408                 je 0x6d9261
// 006d9259  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006d925c  8b4004               mov eax, dword ptr [eax + 4]
// 006d925f  eb02                 jmp 0x6d9263
// 006d9261  8b02                 mov eax, dword ptr [edx]
// 006d9263  80781100             cmp byte ptr [eax + 0x11], 0
// 006d9267  751b                 jne 0x6d9284
// 006d9269  8b7500               mov esi, dword ptr [ebp]
// 006d926c  8d642400             lea esp, [esp]
// 006d9270  3b700c               cmp esi, dword ptr [eax + 0xc]
// 006d9273  7306                 jae 0x6d927b
// 006d9275  8bd0                 mov edx, eax
// 006d9277  8b00                 mov eax, dword ptr [eax]
// 006d9279  eb03                 jmp 0x6d927e
// 006d927b  8b4008               mov eax, dword ptr [eax + 8]
// 006d927e  80781100             cmp byte ptr [eax + 0x11], 0
// 006d9282  74ec                 je 0x6d9270
// 006d9284  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d9288  8b09                 mov ecx, dword ptr [ecx]
// 006d928a  5e                   pop esi
// 006d928b  5d                   pop ebp
// 006d928c  895804               mov dword ptr [eax + 4], ebx
// 006d928f  8908                 mov dword ptr [eax], ecx
// 006d9291  894808               mov dword ptr [eax + 8], ecx
// 006d9294  89500c               mov dword ptr [eax + 0xc], edx
// 006d9297  5b                   pop ebx
// 006d9298  c20800               ret 8
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@V123@@2@ABQAVPMVertex@ProgressiveMesh@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
