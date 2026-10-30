// roc 2010-06 0091c070  unit: seg_00910000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0091c070
//
// 0091c070  55                   push ebp
// 0091c071  8bec                 mov ebp, esp
// 0091c073  83ec10               sub esp, 0x10
// 0091c076  837d0800             cmp dword ptr [ebp + 8], 0
// 0091c07a  7709                 ja 0x91c085
// 0091c07c  c7450800000000       mov dword ptr [ebp + 8], 0
// 0091c083  eb36                 jmp 0x91c0bb
// 0091c085  83c8ff               or eax, 0xffffffff
// 0091c088  33d2                 xor edx, edx
// 0091c08a  f77508               div dword ptr [ebp + 8]
// 0091c08d  83f80c               cmp eax, 0xc
// 0091c090  7329                 jae 0x91c0bb
// 0091c092  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 0091c099  8d45f0               lea eax, [ebp - 0x10]
// 0091c09c  50                   push eax
// 0091c09d  8d4df4               lea ecx, [ebp - 0xc]
// 0091c0a0  ff1524a99e00         call dword ptr [0x9ea924]
// 0091c0a6  c745f42000a000       mov dword ptr [ebp - 0xc], 0xa00020
// 0091c0ad  68b41ab000           push 0xb01ab4
// 0091c0b2  8d4df4               lea ecx, [ebp - 0xc]
// 0091c0b5  51                   push ecx
// 0091c0b6  e8f7c8e8ff           call 0x7a89b2
// 0091c0bb  8b5508               mov edx, dword ptr [ebp + 8]
// 0091c0be  6bd20c               imul edx, edx, 0xc
// 0091c0c1  52                   push edx
// 0091c0c2  e8d9b8e8ff           call 0x7a79a0
// 0091c0c7  83c404               add esp, 4
// 0091c0ca  8be5                 mov esp, ebp
// 0091c0cc  5d                   pop ebp
// 0091c0cd  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@U_Node@?$_List_nod@PAVListener@Resource@Ogre@@V?$allocator@PAVListener@Resource@Ogre@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVListener@Resource@Ogre@@V?$allocator@PAVListener@Resource@Ogre@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp