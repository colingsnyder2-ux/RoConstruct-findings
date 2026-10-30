// roc 2009-06 005bbd00  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bbd00
//
// 005bbd00  55                   push ebp
// 005bbd01  8bec                 mov ebp, esp
// 005bbd03  51                   push ecx
// 005bbd04  894dfc               mov dword ptr [ebp - 4], ecx
// 005bbd07  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bbd0a  83c10c               add ecx, 0xc
// 005bbd0d  e81e00ffff           call 0x5abd30
// 005bbd12  8be5                 mov esp, ebp
// 005bbd14  5d                   pop ebp
// 005bbd15  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp