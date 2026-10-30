// roc 2010-06 0049f8c0  unit: seg_00490000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049f8c0
//
// 0049f8c0  55                   push ebp
// 0049f8c1  8bec                 mov ebp, esp
// 0049f8c3  83ec08               sub esp, 8
// 0049f8c6  894df8               mov dword ptr [ebp - 8], ecx
// 0049f8c9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0049f8cc  e89f070000           call 0x4a0070
// 0049f8d1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0049f8d4  894118               mov dword ptr [ecx + 0x18], eax
// 0049f8d7  8b55f8               mov edx, dword ptr [ebp - 8]
// 0049f8da  8b4218               mov eax, dword ptr [edx + 0x18]
// 0049f8dd  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0049f8e1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0049f8e4  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0049f8e7  8b45f8               mov eax, dword ptr [ebp - 8]
// 0049f8ea  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0049f8ed  894a04               mov dword ptr [edx + 4], ecx
// 0049f8f0  8b55f8               mov edx, dword ptr [ebp - 8]
// 0049f8f3  8b4218               mov eax, dword ptr [edx + 0x18]
// 0049f8f6  8945fc               mov dword ptr [ebp - 4], eax
// 0049f8f9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0049f8fc  8b55f8               mov edx, dword ptr [ebp - 8]
// 0049f8ff  8b4218               mov eax, dword ptr [edx + 0x18]
// 0049f902  8901                 mov dword ptr [ecx], eax
// 0049f904  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0049f907  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0049f90a  8b45f8               mov eax, dword ptr [ebp - 8]
// 0049f90d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0049f910  894a08               mov dword ptr [edx + 8], ecx
// 0049f913  8b55f8               mov edx, dword ptr [ebp - 8]
// 0049f916  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 0049f91d  8be5                 mov esp, ebp
// 0049f91f  5d                   pop ebp
// 0049f920  c3                   ret 
// copied from an identical function in another client (function ?_Init@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp