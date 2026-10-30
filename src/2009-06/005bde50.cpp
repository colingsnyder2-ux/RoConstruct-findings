// roc 2009-06 005bde50  unit: RBX::AggregateChunk  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bde50
//
// 005bde50  55                   push ebp
// 005bde51  8bec                 mov ebp, esp
// 005bde53  51                   push ecx
// 005bde54  894dfc               mov dword ptr [ebp - 4], ecx
// 005bde57  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bde5a  83c108               add ecx, 8
// 005bde5d  e8be970000           call 0x5c7620
// 005bde62  8be5                 mov esp, ebp
// 005bde64  5d                   pop ebp
// 005bde65  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp