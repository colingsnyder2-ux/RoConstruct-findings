// roc 2009-12 004ec7f0  unit: seg_004e0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ec7f0
//
// 004ec7f0  55                   push ebp
// 004ec7f1  8bec                 mov ebp, esp
// 004ec7f3  83ec10               sub esp, 0x10
// 004ec7f6  894df0               mov dword ptr [ebp - 0x10], ecx
// 004ec7f9  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004ec7fc  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004ec7ff  8b5104               mov edx, dword ptr [ecx + 4]
// 004ec802  52                   push edx
// 004ec803  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004ec806  e885010000           call 0x4ec990
// 004ec80b  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004ec80e  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004ec811  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004ec814  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec817  894104               mov dword ptr [ecx + 4], eax
// 004ec81a  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004ec81d  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 004ec824  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004ec827  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec82a  8945f4               mov dword ptr [ebp - 0xc], eax
// 004ec82d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ec830  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 004ec833  8b4218               mov eax, dword ptr [edx + 0x18]
// 004ec836  8901                 mov dword ptr [ecx], eax
// 004ec838  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004ec83b  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004ec83e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 004ec841  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004ec844  894a08               mov dword ptr [edx + 8], ecx
// 004ec847  8be5                 mov esp, ebp
// 004ec849  5d                   pop ebp
// 004ec84a  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp