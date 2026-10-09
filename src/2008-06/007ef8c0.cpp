// roc 2008-06 007ef8c0  unit: seg_007e0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef8c0
//
// 007ef8c0  64a100000000         mov eax, dword ptr fs:[0]
// 007ef8c6  6aff                 push -1
// 007ef8c8  68ba157c00           push 0x7c15ba
// 007ef8cd  50                   push eax
// 007ef8ce  64892500000000       mov dword ptr fs:[0], esp
// 007ef8d5  6a04                 push 4
// 007ef8d7  e84410ebff           call 0x6a0920
// 007ef8dc  33c9                 xor ecx, ecx
// 007ef8de  83c404               add esp, 4
// 007ef8e1  3bc1                 cmp eax, ecx
// 007ef8e3  7408                 je 0x7ef8ed
// 007ef8e5  c70024dd9600         mov dword ptr [eax], 0x96dd24
// 007ef8eb  eb02                 jmp 0x7ef8ef
// 007ef8ed  33c0                 xor eax, eax
// 007ef8ef  a324dd9600           mov dword ptr [0x96dd24], eax
// 007ef8f4  68b0ae7f00           push 0x7faeb0
// 007ef8f9  890d30dd9600         mov dword ptr [0x96dd30], ecx
// 007ef8ff  890d34dd9600         mov dword ptr [0x96dd34], ecx
// 007ef905  890d38dd9600         mov dword ptr [0x96dd38], ecx
// 007ef90b  e89f1eebff           call 0x6a17af
// 007ef910  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ef914  64890d00000000       mov dword ptr fs:[0], ecx
// 007ef91b  83c410               add esp, 0x10
// 007ef91e  c3                   ret 
// library ogre-1.6.4/OgreConvexBody.cpp (function ??__E?msFreePolygons@ConvexBody@Ogre@@1V?$vector@PAVPolygon@Ogre@@V?$allocator@PAVPolygon@Ogre@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreConvexBody.cpp
