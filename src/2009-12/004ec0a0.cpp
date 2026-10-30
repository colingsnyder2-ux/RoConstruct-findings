// roc 2009-12 004ec0a0  unit: seg_004e0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ec0a0
//
// 004ec0a0  55                   push ebp
// 004ec0a1  8bec                 mov ebp, esp
// 004ec0a3  83ec08               sub esp, 8
// 004ec0a6  894df8               mov dword ptr [ebp - 8], ecx
// 004ec0a9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ec0ac  e89f070000           call 0x4ec850
// 004ec0b1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ec0b4  894118               mov dword ptr [ecx + 0x18], eax
// 004ec0b7  8b55f8               mov edx, dword ptr [ebp - 8]
// 004ec0ba  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec0bd  c6402d01             mov byte ptr [eax + 0x2d], 1
// 004ec0c1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ec0c4  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004ec0c7  8b45f8               mov eax, dword ptr [ebp - 8]
// 004ec0ca  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004ec0cd  894a04               mov dword ptr [edx + 4], ecx
// 004ec0d0  8b55f8               mov edx, dword ptr [ebp - 8]
// 004ec0d3  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec0d6  8945fc               mov dword ptr [ebp - 4], eax
// 004ec0d9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ec0dc  8b55f8               mov edx, dword ptr [ebp - 8]
// 004ec0df  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec0e2  8901                 mov dword ptr [ecx], eax
// 004ec0e4  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ec0e7  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004ec0ea  8b45f8               mov eax, dword ptr [ebp - 8]
// 004ec0ed  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004ec0f0  894a08               mov dword ptr [edx + 8], ecx
// 004ec0f3  8b55f8               mov edx, dword ptr [ebp - 8]
// 004ec0f6  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 004ec0fd  8be5                 mov esp, ebp
// 004ec0ff  5d                   pop ebp
// 004ec100  c3                   ret 
// copied from an identical function in another client (function ?_Init@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp