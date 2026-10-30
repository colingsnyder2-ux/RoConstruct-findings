// roc 2009-12 0096b5e0  unit: seg_00960000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b5e0
//
// 0096b5e0  55                   push ebp
// 0096b5e1  8bec                 mov ebp, esp
// 0096b5e3  83ec78               sub esp, 0x78
// 0096b5e6  b9dcdcb700           mov ecx, 0xb7dcdc
// 0096b5eb  e82085b7ff           call 0x4e3b10
// 0096b5f0  68f0f09700           push 0x97f0f0
// 0096b5f5  e82f93e8ff           call 0x7f4929
// 0096b5fa  83c404               add esp, 4
// 0096b5fd  8be5                 mov esp, ebp
// 0096b5ff  5d                   pop ebp
// 0096b600  c3                   ret 
// copied from an identical function in another client (function ??__E?msFreePolygons@ConvexBody@Ogre@@1V?$vector@PAVPolygon@Ogre@@V?$allocator@PAVPolygon@Ogre@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreConvexBody.cpp