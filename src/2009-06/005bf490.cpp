// roc 2009-06 005bf490  unit: RBX::AggregatingSceneManager::Bucket  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf490
//
// 005bf490  55                   push ebp
// 005bf491  8bec                 mov ebp, esp
// 005bf493  51                   push ecx
// 005bf494  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf497  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bf49a  83c10c               add ecx, 0xc
// 005bf49d  e8ce010000           call 0x5bf670
// 005bf4a2  8be5                 mov esp, ebp
// 005bf4a4  5d                   pop ebp
// 005bf4a5  c3                   ret 
// copied from an identical function in another client (function ?what@runtime_error@std@@UBEPBDXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp