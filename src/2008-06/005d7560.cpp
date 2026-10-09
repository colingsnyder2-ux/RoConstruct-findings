// roc 2008-06 005d7560  unit: Ogre::RbxSceneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7560
//
// 005d7560  b801000000           mov eax, 1
// 005d7565  840554a29700         test byte ptr [0x97a254], al
// 005d756b  752a                 jne 0x5d7597
// 005d756d  d90514d28300         fld dword ptr [0x83d214]
// 005d7573  090554a29700         or dword ptr [0x97a254], eax
// 005d7579  d91d48a29700         fstp dword ptr [0x97a248]
// 005d757f  d90510d28300         fld dword ptr [0x83d210]
// 005d7585  d91d4ca29700         fstp dword ptr [0x97a24c]
// 005d758b  d9050cd28300         fld dword ptr [0x83d20c]
// 005d7591  d91d50a29700         fstp dword ptr [0x97a250]
// 005d7597  b848a29700           mov eax, 0x97a248
// 005d759c  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ?lightGreen@Color@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
