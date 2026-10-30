// roc 2010-06 004a0230  unit: seg_004a0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a0230
//
// 004a0230  55                   push ebp
// 004a0231  8bec                 mov ebp, esp
// 004a0233  83ec10               sub esp, 0x10
// 004a0236  894df0               mov dword ptr [ebp - 0x10], ecx
// 004a0239  8b4508               mov eax, dword ptr [ebp + 8]
// 004a023c  8b4808               mov ecx, dword ptr [eax + 8]
// 004a023f  894dfc               mov dword ptr [ebp - 4], ecx
// 004a0242  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0245  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a0248  8b08                 mov ecx, dword ptr [eax]
// 004a024a  894a08               mov dword ptr [edx + 8], ecx
// 004a024d  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a0250  8b02                 mov eax, dword ptr [edx]
// 004a0252  0fbe482d             movsx ecx, byte ptr [eax + 0x2d]
// 004a0256  85c9                 test ecx, ecx
// 004a0258  750b                 jne 0x4a0265
// 004a025a  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a025d  8b02                 mov eax, dword ptr [edx]
// 004a025f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a0262  894804               mov dword ptr [eax + 4], ecx
// 004a0265  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a0268  8b4508               mov eax, dword ptr [ebp + 8]
// 004a026b  8b4804               mov ecx, dword ptr [eax + 4]
// 004a026e  894a04               mov dword ptr [edx + 4], ecx
// 004a0271  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004a0274  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0277  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a027a  3b4804               cmp ecx, dword ptr [eax + 4]
// 004a027d  750e                 jne 0x4a028d
// 004a027f  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004a0282  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0285  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a0288  894804               mov dword ptr [eax + 4], ecx
// 004a028b  eb32                 jmp 0x4a02bf
// 004a028d  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0290  8b4204               mov eax, dword ptr [edx + 4]
// 004a0293  8945f8               mov dword ptr [ebp - 8], eax
// 004a0296  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004a0299  8b5508               mov edx, dword ptr [ebp + 8]
// 004a029c  3b11                 cmp edx, dword ptr [ecx]
// 004a029e  7513                 jne 0x4a02b3
// 004a02a0  8b4508               mov eax, dword ptr [ebp + 8]
// 004a02a3  8b4804               mov ecx, dword ptr [eax + 4]
// 004a02a6  894df4               mov dword ptr [ebp - 0xc], ecx
// 004a02a9  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004a02ac  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a02af  8902                 mov dword ptr [edx], eax
// 004a02b1  eb0c                 jmp 0x4a02bf
// 004a02b3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a02b6  8b5104               mov edx, dword ptr [ecx + 4]
// 004a02b9  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a02bc  894208               mov dword ptr [edx + 8], eax
// 004a02bf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a02c2  8b5508               mov edx, dword ptr [ebp + 8]
// 004a02c5  8911                 mov dword ptr [ecx], edx
// 004a02c7  8b4508               mov eax, dword ptr [ebp + 8]
// 004a02ca  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a02cd  894804               mov dword ptr [eax + 4], ecx
// 004a02d0  8be5                 mov esp, ebp
// 004a02d2  5d                   pop ebp
// 004a02d3  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp