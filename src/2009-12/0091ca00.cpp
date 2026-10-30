// roc 2009-12 0091ca00  unit: RBX::AggregatingSceneManager::Bucket  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091ca00
//
// 0091ca00  55                   push ebp
// 0091ca01  8bec                 mov ebp, esp
// 0091ca03  83ec10               sub esp, 0x10
// 0091ca06  894df0               mov dword ptr [ebp - 0x10], ecx
// 0091ca09  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0091ca0c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0091ca0f  8b5104               mov edx, dword ptr [ecx + 4]
// 0091ca12  52                   push edx
// 0091ca13  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0091ca16  e825120000           call 0x91dc40
// 0091ca1b  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0091ca1e  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0091ca21  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 0091ca24  8b4218               mov eax, dword ptr [edx + 0x18]
// 0091ca27  894104               mov dword ptr [ecx + 4], eax
// 0091ca2a  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0091ca2d  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 0091ca34  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 0091ca37  8b4218               mov eax, dword ptr [edx + 0x18]
// 0091ca3a  8945f4               mov dword ptr [ebp - 0xc], eax
// 0091ca3d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091ca40  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 0091ca43  8b4218               mov eax, dword ptr [edx + 0x18]
// 0091ca46  8901                 mov dword ptr [ecx], eax
// 0091ca48  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0091ca4b  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0091ca4e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0091ca51  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0091ca54  894a08               mov dword ptr [edx + 8], ecx
// 0091ca57  8be5                 mov esp, ebp
// 0091ca59  5d                   pop ebp
// 0091ca5a  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp