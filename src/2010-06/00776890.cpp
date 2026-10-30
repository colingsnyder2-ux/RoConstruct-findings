// roc 2010-06 00776890  unit: RBX::EdgeEdgePair  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00776890
//
// 00776890  55                   push ebp
// 00776891  8bec                 mov ebp, esp
// 00776893  51                   push ecx
// 00776894  894dfc               mov dword ptr [ebp - 4], ecx
// 00776897  8b45fc               mov eax, dword ptr [ebp - 4]
// 0077689a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0077689d  8b4010               mov eax, dword ptr [eax + 0x10]
// 007768a0  2b410c               sub eax, dword ptr [ecx + 0xc]
// 007768a3  99                   cdq 
// 007768a4  b914000000           mov ecx, 0x14
// 007768a9  f7f9                 idiv ecx
// 007768ab  8be5                 mov esp, ebp
// 007768ad  5d                   pop ebp
// 007768ae  c3                   ret 
// copied from an identical function in another client (function ?size@?$vector@VEdge@?$ConvexClipper@M@Wml@@V?$allocator@VEdge@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp