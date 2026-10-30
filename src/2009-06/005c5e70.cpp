// roc 2009-06 005c5e70  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5e70
//
// 005c5e70  55                   push ebp
// 005c5e71  8bec                 mov ebp, esp
// 005c5e73  51                   push ecx
// 005c5e74  894dfc               mov dword ptr [ebp - 4], ecx
// 005c5e77  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c5e7a  83c10c               add ecx, 0xc
// 005c5e7d  e83e9fffff           call 0x5bfdc0
// 005c5e82  8be5                 mov esp, ebp
// 005c5e84  5d                   pop ebp
// 005c5e85  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp