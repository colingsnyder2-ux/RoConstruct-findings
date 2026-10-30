// roc 2009-06 005c4f70  unit: seg_005c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4f70
//
// 005c4f70  55                   push ebp
// 005c4f71  8bec                 mov ebp, esp
// 005c4f73  51                   push ecx
// 005c4f74  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4f77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4f7a  50                   push eax
// 005c4f7b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4f7e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005c4f81  52                   push edx
// 005c4f82  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c4f85  e866c3ffff           call 0x5c12f0
// 005c4f8a  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4f8d  8be5                 mov esp, ebp
// 005c4f8f  5d                   pop ebp
// 005c4f90  c20400               ret 4
// copied from an identical function in another client (function ?begin@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp