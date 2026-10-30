// roc 2009-06 005c5110  unit: seg_005c0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5110
//
// 005c5110  55                   push ebp
// 005c5111  8bec                 mov ebp, esp
// 005c5113  51                   push ecx
// 005c5114  894dfc               mov dword ptr [ebp - 4], ecx
// 005c5117  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c511a  50                   push eax
// 005c511b  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c511e  51                   push ecx
// 005c511f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c5122  e8c9c1ffff           call 0x5c12f0
// 005c5127  8b4508               mov eax, dword ptr [ebp + 8]
// 005c512a  8be5                 mov esp, ebp
// 005c512c  5d                   pop ebp
// 005c512d  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Make_iter@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp