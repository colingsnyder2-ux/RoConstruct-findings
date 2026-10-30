// roc 2009-12 004ed710  unit: seg_004e0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ed710
//
// 004ed710  55                   push ebp
// 004ed711  8bec                 mov ebp, esp
// 004ed713  83ec10               sub esp, 0x10
// 004ed716  837d0800             cmp dword ptr [ebp + 8], 0
// 004ed71a  7709                 ja 0x4ed725
// 004ed71c  c7450800000000       mov dword ptr [ebp + 8], 0
// 004ed723  eb36                 jmp 0x4ed75b
// 004ed725  83c8ff               or eax, 0xffffffff
// 004ed728  33d2                 xor edx, edx
// 004ed72a  f77508               div dword ptr [ebp + 8]
// 004ed72d  83f830               cmp eax, 0x30
// 004ed730  7329                 jae 0x4ed75b
// 004ed732  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 004ed739  8d45f0               lea eax, [ebp - 0x10]
// 004ed73c  50                   push eax
// 004ed73d  8d4df4               lea ecx, [ebp - 0xc]
// 004ed740  ff1548b79800         call dword ptr [0x98b748]
// 004ed746  c745f478f49900       mov dword ptr [ebp - 0xc], 0x99f478
// 004ed74d  6838efa800           push 0xa8ef38
// 004ed752  8d4df4               lea ecx, [ebp - 0xc]
// 004ed755  51                   push ecx
// 004ed756  e81d713000           call 0x7f4878
// 004ed75b  8b5508               mov edx, dword ptr [ebp + 8]
// 004ed75e  6bd230               imul edx, edx, 0x30
// 004ed761  52                   push edx
// 004ed762  e8f9603000           call 0x7f3860
// 004ed767  83c404               add esp, 4
// 004ed76a  8be5                 mov esp, ebp
// 004ed76c  5d                   pop ebp
// 004ed76d  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp