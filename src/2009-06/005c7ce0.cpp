// roc 2009-06 005c7ce0  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7ce0
//
// 005c7ce0  55                   push ebp
// 005c7ce1  8bec                 mov ebp, esp
// 005c7ce3  51                   push ecx
// 005c7ce4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c7ce7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c7cea  83c110               add ecx, 0x10
// 005c7ced  e82ef9ffff           call 0x5c7620
// 005c7cf2  8be5                 mov esp, ebp
// 005c7cf4  5d                   pop ebp
// 005c7cf5  c3                   ret 
// copied from an identical function in another client (function ??1Face@?$ConvexClipper@M@Wml@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp