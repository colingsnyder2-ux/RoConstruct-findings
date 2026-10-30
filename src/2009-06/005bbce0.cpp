// roc 2009-06 005bbce0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bbce0
//
// 005bbce0  55                   push ebp
// 005bbce1  8bec                 mov ebp, esp
// 005bbce3  51                   push ecx
// 005bbce4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bbce7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bbcea  83c104               add ecx, 4
// 005bbced  e83e00ffff           call 0x5abd30
// 005bbcf2  8be5                 mov esp, ebp
// 005bbcf4  5d                   pop ebp
// 005bbcf5  c3                   ret 
// copied from an identical function in another client (function ?GetVQuantity@MTMesh@Wml@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp