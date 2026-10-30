// roc 2009-06 005c22e0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c22e0
//
// 005c22e0  55                   push ebp
// 005c22e1  8bec                 mov ebp, esp
// 005c22e3  51                   push ecx
// 005c22e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c22e7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c22ea  83c114               add ecx, 0x14
// 005c22ed  e85e200000           call 0x5c4350
// 005c22f2  8be5                 mov esp, ebp
// 005c22f4  5d                   pop ebp
// 005c22f5  c3                   ret 
// copied from an identical function in another client (function ?GetEQuantity@MTMesh@Wml@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp