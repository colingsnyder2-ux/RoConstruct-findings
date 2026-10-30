// roc 2009-06 005bf370  unit: RBX::AggregatingSceneManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf370
//
// 005bf370  55                   push ebp
// 005bf371  8bec                 mov ebp, esp
// 005bf373  51                   push ecx
// 005bf374  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf377  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bf37a  83c108               add ecx, 8
// 005bf37d  e8deddedff           call 0x49d160
// 005bf382  8be5                 mov esp, ebp
// 005bf384  5d                   pop ebp
// 005bf385  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp