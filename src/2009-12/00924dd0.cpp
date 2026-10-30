// roc 2009-12 00924dd0  unit: seg_00920000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00924dd0
//
// 00924dd0  55                   push ebp
// 00924dd1  8bec                 mov ebp, esp
// 00924dd3  83ec58               sub esp, 0x58
// 00924dd6  894da8               mov dword ptr [ebp - 0x58], ecx
// 00924dd9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00924ddc  8945f8               mov dword ptr [ebp - 8], eax
// 00924ddf  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00924de2  51                   push ecx
// 00924de3  8b55f8               mov edx, dword ptr [ebp - 8]
// 00924de6  8b4204               mov eax, dword ptr [edx + 4]
// 00924de9  50                   push eax
// 00924dea  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00924ded  51                   push ecx
// 00924dee  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 00924df1  e84a060000           call 0x925440
// 00924df6  8945fc               mov dword ptr [ebp - 4], eax
// 00924df9  6a01                 push 1
// 00924dfb  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 00924dfe  e85d070000           call 0x925560
// 00924e03  8b55f8               mov edx, dword ptr [ebp - 8]
// 00924e06  8b45fc               mov eax, dword ptr [ebp - 4]
// 00924e09  894204               mov dword ptr [edx + 4], eax
// 00924e0c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00924e0f  8b5104               mov edx, dword ptr [ecx + 4]
// 00924e12  8955ac               mov dword ptr [ebp - 0x54], edx
// 00924e15  8b45ac               mov eax, dword ptr [ebp - 0x54]
// 00924e18  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00924e1b  8908                 mov dword ptr [eax], ecx
// 00924e1d  8be5                 mov esp, ebp
// 00924e1f  5d                   pop ebp
// 00924e20  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Insert@?$list@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@std@@QAEXV?$_Const_iterator@$00@12@ABQAVAnimationState@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp