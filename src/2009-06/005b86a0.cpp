// roc 2009-06 005b86a0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b86a0
//
// 005b86a0  55                   push ebp
// 005b86a1  8bec                 mov ebp, esp
// 005b86a3  51                   push ecx
// 005b86a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b86a7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b86aa  83c10c               add ecx, 0xc
// 005b86ad  e80e000000           call 0x5b86c0
// 005b86b2  8be5                 mov esp, ebp
// 005b86b4  5d                   pop ebp
// 005b86b5  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp