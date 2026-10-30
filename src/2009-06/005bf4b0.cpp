// roc 2009-06 005bf4b0  unit: RBX::AggregatingSceneManager::Bucket  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf4b0
//
// 005bf4b0  55                   push ebp
// 005bf4b1  8bec                 mov ebp, esp
// 005bf4b3  51                   push ecx
// 005bf4b4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf4b7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bf4ba  83c104               add ecx, 4
// 005bf4bd  e82e000000           call 0x5bf4f0
// 005bf4c2  8be5                 mov esp, ebp
// 005bf4c4  5d                   pop ebp
// 005bf4c5  c3                   ret 
// copied from an identical function in another client (function ?GetVQuantity@MTMesh@Wml@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp