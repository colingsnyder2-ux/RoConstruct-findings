// roc 2008-06 00404fb0  unit: VCWorkspace::?$CComObject  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404fb0
//
// 00404fb0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00404fb3  8b4204               mov eax, dword ptr [edx + 4]
// 00404fb6  80781500             cmp byte ptr [eax + 0x15], 0
// 00404fba  53                   push ebx
// 00404fbb  55                   push ebp
// 00404fbc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00404fc0  56                   push esi
// 00404fc1  8bda                 mov ebx, edx
// 00404fc3  752e                 jne 0x404ff3
// 00404fc5  57                   push edi
// 00404fc6  8b7d00               mov edi, dword ptr [ebp]
// 00404fc9  8da42400000000       lea esp, [esp]
// 00404fd0  8b700c               mov esi, dword ptr [eax + 0xc]
// 00404fd3  3bf7                 cmp esi, edi
// 00404fd5  7305                 jae 0x404fdc
// 00404fd7  8b4008               mov eax, dword ptr [eax + 8]
// 00404fda  eb10                 jmp 0x404fec
// 00404fdc  807a1500             cmp byte ptr [edx + 0x15], 0
// 00404fe0  7406                 je 0x404fe8
// 00404fe2  3bfe                 cmp edi, esi
// 00404fe4  7302                 jae 0x404fe8
// 00404fe6  8bd0                 mov edx, eax
// 00404fe8  8bd8                 mov ebx, eax
// 00404fea  8b00                 mov eax, dword ptr [eax]
// 00404fec  80781500             cmp byte ptr [eax + 0x15], 0
// 00404ff0  74de                 je 0x404fd0
// 00404ff2  5f                   pop edi
// 00404ff3  807a1500             cmp byte ptr [edx + 0x15], 0
// 00404ff7  7408                 je 0x405001
// 00404ff9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00404ffc  8b4004               mov eax, dword ptr [eax + 4]
// 00404fff  eb02                 jmp 0x405003
// 00405001  8b02                 mov eax, dword ptr [edx]
// 00405003  80781500             cmp byte ptr [eax + 0x15], 0
// 00405007  751b                 jne 0x405024
// 00405009  8b7500               mov esi, dword ptr [ebp]
// 0040500c  8d642400             lea esp, [esp]
// 00405010  3b700c               cmp esi, dword ptr [eax + 0xc]
// 00405013  7306                 jae 0x40501b
// 00405015  8bd0                 mov edx, eax
// 00405017  8b00                 mov eax, dword ptr [eax]
// 00405019  eb03                 jmp 0x40501e
// 0040501b  8b4008               mov eax, dword ptr [eax + 8]
// 0040501e  80781500             cmp byte ptr [eax + 0x15], 0
// 00405022  74ec                 je 0x405010
// 00405024  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405028  8b09                 mov ecx, dword ptr [ecx]
// 0040502a  5e                   pop esi
// 0040502b  5d                   pop ebp
// 0040502c  895804               mov dword ptr [eax + 4], ebx
// 0040502f  8908                 mov dword ptr [eax], ecx
// 00405031  894808               mov dword ptr [eax + 8], ecx
// 00405034  89500c               mov dword ptr [eax + 0xc], edx
// 00405037  5b                   pop ebx
// 00405038  c20800               ret 8
// library ogre-1.6.4/OgreResourceBackgroundQueue.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@KPAURequest@ResourceBackgroundQueue@Ogre@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPAURequest@ResourceBackgroundQueue@Ogre@@@std@@@5@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@KPAURequest@ResourceBackgroundQueue@Ogre@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPAURequest@ResourceBackgroundQueue@Ogre@@@std@@@5@$0A@@std@@@std@@V123@@2@ABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceBackgroundQueue.cpp
