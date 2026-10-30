// roc 2009-06 005b86c0  unit: seg_005b0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b86c0
//
// 005b86c0  55                   push ebp
// 005b86c1  8bec                 mov ebp, esp
// 005b86c3  51                   push ecx
// 005b86c4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b86c7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b86ca  ff15c4e48900         call dword ptr [0x89e4c4]
// 005b86d0  8be5                 mov esp, ebp
// 005b86d2  5d                   pop ebp
// 005b86d3  c3                   ret 
// copied from an identical function in another client (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp