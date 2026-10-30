// roc 2009-06 005b6cd0  unit: seg_005b0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6cd0
//
// 005b6cd0  55                   push ebp
// 005b6cd1  8bec                 mov ebp, esp
// 005b6cd3  51                   push ecx
// 005b6cd4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6cd7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b6cda  50                   push eax
// 005b6cdb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6cde  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005b6ce1  52                   push edx
// 005b6ce2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6ce5  e8e6d4ffff           call 0x5b41d0
// 005b6cea  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6ced  8be5                 mov esp, ebp
// 005b6cef  5d                   pop ebp
// 005b6cf0  c20400               ret 4
// copied from an identical function in another client (function ?begin@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp