// roc 2009-06 005c5e90  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5e90
//
// 005c5e90  55                   push ebp
// 005c5e91  8bec                 mov ebp, esp
// 005c5e93  51                   push ecx
// 005c5e94  894dfc               mov dword ptr [ebp - 4], ecx
// 005c5e97  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c5e9a  83c10c               add ecx, 0xc
// 005c5e9d  e80ea1ffff           call 0x5bffb0
// 005c5ea2  8be5                 mov esp, ebp
// 005c5ea4  5d                   pop ebp
// 005c5ea5  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp