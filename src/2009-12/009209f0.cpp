// roc 2009-12 009209f0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009209f0
//
// 009209f0  55                   push ebp
// 009209f1  8bec                 mov ebp, esp
// 009209f3  83ec10               sub esp, 0x10
// 009209f6  894df0               mov dword ptr [ebp - 0x10], ecx
// 009209f9  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 009209fc  8b4818               mov ecx, dword ptr [eax + 0x18]
// 009209ff  8b5104               mov edx, dword ptr [ecx + 4]
// 00920a02  52                   push edx
// 00920a03  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00920a06  e8d5080000           call 0x9212e0
// 00920a0b  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00920a0e  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00920a11  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00920a14  8b4218               mov eax, dword ptr [edx + 0x18]
// 00920a17  894104               mov dword ptr [ecx + 4], eax
// 00920a1a  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00920a1d  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00920a24  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00920a27  8b4218               mov eax, dword ptr [edx + 0x18]
// 00920a2a  8945f4               mov dword ptr [ebp - 0xc], eax
// 00920a2d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00920a30  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00920a33  8b4218               mov eax, dword ptr [edx + 0x18]
// 00920a36  8901                 mov dword ptr [ecx], eax
// 00920a38  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00920a3b  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00920a3e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00920a41  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00920a44  894a08               mov dword ptr [edx + 8], ecx
// 00920a47  8be5                 mov esp, ebp
// 00920a49  5d                   pop ebp
// 00920a4a  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp