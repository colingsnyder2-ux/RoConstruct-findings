// roc 2010-06 004a02e0  unit: seg_004a0000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a02e0
//
// 004a02e0  55                   push ebp
// 004a02e1  8bec                 mov ebp, esp
// 004a02e3  83ec0c               sub esp, 0xc
// 004a02e6  894df4               mov dword ptr [ebp - 0xc], ecx
// 004a02e9  8b4508               mov eax, dword ptr [ebp + 8]
// 004a02ec  8b08                 mov ecx, dword ptr [eax]
// 004a02ee  894dfc               mov dword ptr [ebp - 4], ecx
// 004a02f1  8b5508               mov edx, dword ptr [ebp + 8]
// 004a02f4  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a02f7  8b4808               mov ecx, dword ptr [eax + 8]
// 004a02fa  890a                 mov dword ptr [edx], ecx
// 004a02fc  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a02ff  8b4208               mov eax, dword ptr [edx + 8]
// 004a0302  0fbe482d             movsx ecx, byte ptr [eax + 0x2d]
// 004a0306  85c9                 test ecx, ecx
// 004a0308  750c                 jne 0x4a0316
// 004a030a  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a030d  8b4208               mov eax, dword ptr [edx + 8]
// 004a0310  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a0313  894804               mov dword ptr [eax + 4], ecx
// 004a0316  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a0319  8b4508               mov eax, dword ptr [ebp + 8]
// 004a031c  8b4804               mov ecx, dword ptr [eax + 4]
// 004a031f  894a04               mov dword ptr [edx + 4], ecx
// 004a0322  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004a0325  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0328  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a032b  3b4804               cmp ecx, dword ptr [eax + 4]
// 004a032e  750e                 jne 0x4a033e
// 004a0330  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004a0333  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0336  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a0339  894804               mov dword ptr [eax + 4], ecx
// 004a033c  eb2d                 jmp 0x4a036b
// 004a033e  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0341  8b4204               mov eax, dword ptr [edx + 4]
// 004a0344  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a0347  3b4808               cmp ecx, dword ptr [eax + 8]
// 004a034a  750e                 jne 0x4a035a
// 004a034c  8b5508               mov edx, dword ptr [ebp + 8]
// 004a034f  8b4204               mov eax, dword ptr [edx + 4]
// 004a0352  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a0355  894808               mov dword ptr [eax + 8], ecx
// 004a0358  eb11                 jmp 0x4a036b
// 004a035a  8b5508               mov edx, dword ptr [ebp + 8]
// 004a035d  8b4204               mov eax, dword ptr [edx + 4]
// 004a0360  8945f8               mov dword ptr [ebp - 8], eax
// 004a0363  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004a0366  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a0369  8911                 mov dword ptr [ecx], edx
// 004a036b  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a036e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a0371  894808               mov dword ptr [eax + 8], ecx
// 004a0374  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0377  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a037a  894204               mov dword ptr [edx + 4], eax
// 004a037d  8be5                 mov esp, ebp
// 004a037f  5d                   pop ebp
// 004a0380  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp