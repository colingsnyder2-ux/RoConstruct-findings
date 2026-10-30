// roc 2009-12 00922750  unit: seg_00920000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00922750
//
// 00922750  55                   push ebp
// 00922751  8bec                 mov ebp, esp
// 00922753  83ec10               sub esp, 0x10
// 00922756  837d0800             cmp dword ptr [ebp + 8], 0
// 0092275a  7709                 ja 0x922765
// 0092275c  c7450800000000       mov dword ptr [ebp + 8], 0
// 00922763  eb36                 jmp 0x92279b
// 00922765  83c8ff               or eax, 0xffffffff
// 00922768  33d2                 xor edx, edx
// 0092276a  f77508               div dword ptr [ebp + 8]
// 0092276d  83f80c               cmp eax, 0xc
// 00922770  7329                 jae 0x92279b
// 00922772  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 00922779  8d45f0               lea eax, [ebp - 0x10]
// 0092277c  50                   push eax
// 0092277d  8d4df4               lea ecx, [ebp - 0xc]
// 00922780  ff1548b79800         call dword ptr [0x98b748]
// 00922786  c745f478f49900       mov dword ptr [ebp - 0xc], 0x99f478
// 0092278d  6838efa800           push 0xa8ef38
// 00922792  8d4df4               lea ecx, [ebp - 0xc]
// 00922795  51                   push ecx
// 00922796  e8dd20edff           call 0x7f4878
// 0092279b  8b5508               mov edx, dword ptr [ebp + 8]
// 0092279e  6bd20c               imul edx, edx, 0xc
// 009227a1  52                   push edx
// 009227a2  e8b910edff           call 0x7f3860
// 009227a7  83c404               add esp, 4
// 009227aa  8be5                 mov esp, ebp
// 009227ac  5d                   pop ebp
// 009227ad  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@U_Node@?$_List_nod@PAVListener@Resource@Ogre@@V?$allocator@PAVListener@Resource@Ogre@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVListener@Resource@Ogre@@V?$allocator@PAVListener@Resource@Ogre@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp