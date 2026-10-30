// roc 2009-06 005c7880  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7880
//
// 005c7880  55                   push ebp
// 005c7881  8bec                 mov ebp, esp
// 005c7883  51                   push ecx
// 005c7884  894dfc               mov dword ptr [ebp - 4], ecx
// 005c7887  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c788a  83c10c               add ecx, 0xc
// 005c788d  e88efdffff           call 0x5c7620
// 005c7892  8be5                 mov esp, ebp
// 005c7894  5d                   pop ebp
// 005c7895  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp