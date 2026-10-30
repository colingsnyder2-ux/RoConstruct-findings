// roc 2009-06 005b6ea0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6ea0
//
// 005b6ea0  55                   push ebp
// 005b6ea1  8bec                 mov ebp, esp
// 005b6ea3  51                   push ecx
// 005b6ea4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6ea7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6eaa  83c110               add ecx, 0x10
// 005b6ead  e83e000000           call 0x5b6ef0
// 005b6eb2  8be5                 mov esp, ebp
// 005b6eb4  5d                   pop ebp
// 005b6eb5  c3                   ret 
// copied from an identical function in another client (function ??1Face@?$ConvexClipper@M@Wml@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp