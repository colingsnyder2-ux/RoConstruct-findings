// roc 2010-06 004a0f30  unit: seg_004a0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a0f30
//
// 004a0f30  55                   push ebp
// 004a0f31  8bec                 mov ebp, esp
// 004a0f33  83ec10               sub esp, 0x10
// 004a0f36  837d0800             cmp dword ptr [ebp + 8], 0
// 004a0f3a  7709                 ja 0x4a0f45
// 004a0f3c  c7450800000000       mov dword ptr [ebp + 8], 0
// 004a0f43  eb36                 jmp 0x4a0f7b
// 004a0f45  83c8ff               or eax, 0xffffffff
// 004a0f48  33d2                 xor edx, edx
// 004a0f4a  f77508               div dword ptr [ebp + 8]
// 004a0f4d  83f830               cmp eax, 0x30
// 004a0f50  7329                 jae 0x4a0f7b
// 004a0f52  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 004a0f59  8d45f0               lea eax, [ebp - 0x10]
// 004a0f5c  50                   push eax
// 004a0f5d  8d4df4               lea ecx, [ebp - 0xc]
// 004a0f60  ff1524a99e00         call dword ptr [0x9ea924]
// 004a0f66  c745f42000a000       mov dword ptr [ebp - 0xc], 0xa00020
// 004a0f6d  68b41ab000           push 0xb01ab4
// 004a0f72  8d4df4               lea ecx, [ebp - 0xc]
// 004a0f75  51                   push ecx
// 004a0f76  e8377a3000           call 0x7a89b2
// 004a0f7b  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0f7e  6bd230               imul edx, edx, 0x30
// 004a0f81  52                   push edx
// 004a0f82  e8196a3000           call 0x7a79a0
// 004a0f87  83c404               add esp, 4
// 004a0f8a  8be5                 mov esp, ebp
// 004a0f8c  5d                   pop ebp
// 004a0f8d  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp