// roc 2009-06 005af440  unit: RBX::TextureProxyBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005af440
//
// 005af440  55                   push ebp
// 005af441  8bec                 mov ebp, esp
// 005af443  51                   push ecx
// 005af444  894dfc               mov dword ptr [ebp - 4], ecx
// 005af447  8b45fc               mov eax, dword ptr [ebp - 4]
// 005af44a  d9402c               fld dword ptr [eax + 0x2c]
// 005af44d  8be5                 mov esp, ebp
// 005af44f  5d                   pop ebp
// 005af450  c3                   ret 
// copied from an identical function in another client (function ?getWeight@AnimationState@Ogre@@QBEMXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp