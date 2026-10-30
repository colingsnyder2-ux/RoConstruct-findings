// roc 2009-12 004eca10  unit: seg_004e0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004eca10
//
// 004eca10  55                   push ebp
// 004eca11  8bec                 mov ebp, esp
// 004eca13  83ec10               sub esp, 0x10
// 004eca16  894df0               mov dword ptr [ebp - 0x10], ecx
// 004eca19  8b4508               mov eax, dword ptr [ebp + 8]
// 004eca1c  8b4808               mov ecx, dword ptr [eax + 8]
// 004eca1f  894dfc               mov dword ptr [ebp - 4], ecx
// 004eca22  8b5508               mov edx, dword ptr [ebp + 8]
// 004eca25  8b45fc               mov eax, dword ptr [ebp - 4]
// 004eca28  8b08                 mov ecx, dword ptr [eax]
// 004eca2a  894a08               mov dword ptr [edx + 8], ecx
// 004eca2d  8b55fc               mov edx, dword ptr [ebp - 4]
// 004eca30  8b02                 mov eax, dword ptr [edx]
// 004eca32  0fbe482d             movsx ecx, byte ptr [eax + 0x2d]
// 004eca36  85c9                 test ecx, ecx
// 004eca38  750b                 jne 0x4eca45
// 004eca3a  8b55fc               mov edx, dword ptr [ebp - 4]
// 004eca3d  8b02                 mov eax, dword ptr [edx]
// 004eca3f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004eca42  894804               mov dword ptr [eax + 4], ecx
// 004eca45  8b55fc               mov edx, dword ptr [ebp - 4]
// 004eca48  8b4508               mov eax, dword ptr [ebp + 8]
// 004eca4b  8b4804               mov ecx, dword ptr [eax + 4]
// 004eca4e  894a04               mov dword ptr [edx + 4], ecx
// 004eca51  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004eca54  8b4218               mov eax, dword ptr [edx + 0x18]
// 004eca57  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004eca5a  3b4804               cmp ecx, dword ptr [eax + 4]
// 004eca5d  750e                 jne 0x4eca6d
// 004eca5f  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004eca62  8b4218               mov eax, dword ptr [edx + 0x18]
// 004eca65  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004eca68  894804               mov dword ptr [eax + 4], ecx
// 004eca6b  eb32                 jmp 0x4eca9f
// 004eca6d  8b5508               mov edx, dword ptr [ebp + 8]
// 004eca70  8b4204               mov eax, dword ptr [edx + 4]
// 004eca73  8945f8               mov dword ptr [ebp - 8], eax
// 004eca76  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004eca79  8b5508               mov edx, dword ptr [ebp + 8]
// 004eca7c  3b11                 cmp edx, dword ptr [ecx]
// 004eca7e  7513                 jne 0x4eca93
// 004eca80  8b4508               mov eax, dword ptr [ebp + 8]
// 004eca83  8b4804               mov ecx, dword ptr [eax + 4]
// 004eca86  894df4               mov dword ptr [ebp - 0xc], ecx
// 004eca89  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004eca8c  8b45fc               mov eax, dword ptr [ebp - 4]
// 004eca8f  8902                 mov dword ptr [edx], eax
// 004eca91  eb0c                 jmp 0x4eca9f
// 004eca93  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004eca96  8b5104               mov edx, dword ptr [ecx + 4]
// 004eca99  8b45fc               mov eax, dword ptr [ebp - 4]
// 004eca9c  894208               mov dword ptr [edx + 8], eax
// 004eca9f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ecaa2  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecaa5  8911                 mov dword ptr [ecx], edx
// 004ecaa7  8b4508               mov eax, dword ptr [ebp + 8]
// 004ecaaa  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ecaad  894804               mov dword ptr [eax + 4], ecx
// 004ecab0  8be5                 mov esp, ebp
// 004ecab2  5d                   pop ebp
// 004ecab3  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp