// roc 2010-06 004a0010  unit: seg_004a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a0010
//
// 004a0010  55                   push ebp
// 004a0011  8bec                 mov ebp, esp
// 004a0013  83ec10               sub esp, 0x10
// 004a0016  894df0               mov dword ptr [ebp - 0x10], ecx
// 004a0019  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004a001c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a001f  8b5104               mov edx, dword ptr [ecx + 4]
// 004a0022  52                   push edx
// 004a0023  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004a0026  e885010000           call 0x4a01b0
// 004a002b  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004a002e  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a0031  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004a0034  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0037  894104               mov dword ptr [ecx + 4], eax
// 004a003a  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004a003d  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 004a0044  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004a0047  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a004a  8945f4               mov dword ptr [ebp - 0xc], eax
// 004a004d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a0050  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004a0053  8b4218               mov eax, dword ptr [edx + 0x18]
// 004a0056  8901                 mov dword ptr [ecx], eax
// 004a0058  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004a005b  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004a005e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004a0061  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a0064  894a08               mov dword ptr [edx + 8], ecx
// 004a0067  8be5                 mov esp, ebp
// 004a0069  5d                   pop ebp
// 004a006a  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp