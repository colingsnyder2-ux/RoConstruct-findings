// roc 2009-06 005b8d70  unit: seg_005b0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8d70
//
// 005b8d70  55                   push ebp
// 005b8d71  8bec                 mov ebp, esp
// 005b8d73  51                   push ecx
// 005b8d74  894dfc               mov dword ptr [ebp - 4], ecx
// 005b8d77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b8d7a  50                   push eax
// 005b8d7b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b8d7e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005b8d81  52                   push edx
// 005b8d82  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b8d85  e826c1fbff           call 0x574eb0
// 005b8d8a  8b4508               mov eax, dword ptr [ebp + 8]
// 005b8d8d  8be5                 mov esp, ebp
// 005b8d8f  5d                   pop ebp
// 005b8d90  c20400               ret 4
// copied from an identical function in another client (function ?end@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp