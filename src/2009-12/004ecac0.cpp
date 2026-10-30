// roc 2009-12 004ecac0  unit: seg_004e0000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ecac0
//
// 004ecac0  55                   push ebp
// 004ecac1  8bec                 mov ebp, esp
// 004ecac3  83ec0c               sub esp, 0xc
// 004ecac6  894df4               mov dword ptr [ebp - 0xc], ecx
// 004ecac9  8b4508               mov eax, dword ptr [ebp + 8]
// 004ecacc  8b08                 mov ecx, dword ptr [eax]
// 004ecace  894dfc               mov dword ptr [ebp - 4], ecx
// 004ecad1  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecad4  8b45fc               mov eax, dword ptr [ebp - 4]
// 004ecad7  8b4808               mov ecx, dword ptr [eax + 8]
// 004ecada  890a                 mov dword ptr [edx], ecx
// 004ecadc  8b55fc               mov edx, dword ptr [ebp - 4]
// 004ecadf  8b4208               mov eax, dword ptr [edx + 8]
// 004ecae2  0fbe482d             movsx ecx, byte ptr [eax + 0x2d]
// 004ecae6  85c9                 test ecx, ecx
// 004ecae8  750c                 jne 0x4ecaf6
// 004ecaea  8b55fc               mov edx, dword ptr [ebp - 4]
// 004ecaed  8b4208               mov eax, dword ptr [edx + 8]
// 004ecaf0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ecaf3  894804               mov dword ptr [eax + 4], ecx
// 004ecaf6  8b55fc               mov edx, dword ptr [ebp - 4]
// 004ecaf9  8b4508               mov eax, dword ptr [ebp + 8]
// 004ecafc  8b4804               mov ecx, dword ptr [eax + 4]
// 004ecaff  894a04               mov dword ptr [edx + 4], ecx
// 004ecb02  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004ecb05  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ecb08  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ecb0b  3b4804               cmp ecx, dword ptr [eax + 4]
// 004ecb0e  750e                 jne 0x4ecb1e
// 004ecb10  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004ecb13  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ecb16  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ecb19  894804               mov dword ptr [eax + 4], ecx
// 004ecb1c  eb2d                 jmp 0x4ecb4b
// 004ecb1e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecb21  8b4204               mov eax, dword ptr [edx + 4]
// 004ecb24  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ecb27  3b4808               cmp ecx, dword ptr [eax + 8]
// 004ecb2a  750e                 jne 0x4ecb3a
// 004ecb2c  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecb2f  8b4204               mov eax, dword ptr [edx + 4]
// 004ecb32  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ecb35  894808               mov dword ptr [eax + 8], ecx
// 004ecb38  eb11                 jmp 0x4ecb4b
// 004ecb3a  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecb3d  8b4204               mov eax, dword ptr [edx + 4]
// 004ecb40  8945f8               mov dword ptr [ebp - 8], eax
// 004ecb43  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ecb46  8b55fc               mov edx, dword ptr [ebp - 4]
// 004ecb49  8911                 mov dword ptr [ecx], edx
// 004ecb4b  8b45fc               mov eax, dword ptr [ebp - 4]
// 004ecb4e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ecb51  894808               mov dword ptr [eax + 8], ecx
// 004ecb54  8b5508               mov edx, dword ptr [ebp + 8]
// 004ecb57  8b45fc               mov eax, dword ptr [ebp - 4]
// 004ecb5a  894204               mov dword ptr [edx + 4], eax
// 004ecb5d  8be5                 mov esp, ebp
// 004ecb5f  5d                   pop ebp
// 004ecb60  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp