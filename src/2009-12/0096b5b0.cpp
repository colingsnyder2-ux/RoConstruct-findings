// roc 2009-12 0096b5b0  unit: seg_00960000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b5b0
//
// 0096b5b0  55                   push ebp
// 0096b5b1  8bec                 mov ebp, esp
// 0096b5b3  83ec78               sub esp, 0x78
// 0096b5b6  b914dcb700           mov ecx, 0xb7dc14
// 0096b5bb  e820d9b7ff           call 0x4e8ee0
// 0096b5c0  68d0f09700           push 0x97f0d0
// 0096b5c5  e85f93e8ff           call 0x7f4929
// 0096b5ca  83c404               add esp, 4
// 0096b5cd  8be5                 mov esp, ebp
// 0096b5cf  5d                   pop ebp
// 0096b5d0  c3                   ret 
// copied from an identical function in another client (function ??__E?msFreePolygons@ConvexBody@Ogre@@1V?$vector@PAVPolygon@Ogre@@V?$allocator@PAVPolygon@Ogre@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreConvexBody.cpp