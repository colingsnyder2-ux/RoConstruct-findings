// roc 2011-06 009c84e0  unit: RBX::AdornBillboarder  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c84e0
//
// 009c84e0  55                   push ebp
// 009c84e1  8bec                 mov ebp, esp
// 009c84e3  51                   push ecx
// 009c84e4  894dfc               mov dword ptr [ebp - 4], ecx
// 009c84e7  8be5                 mov esp, ebp
// 009c84e9  5d                   pop ebp
// 009c84ea  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnVertexInsert@VETMesh@Wml@@UAEXH_NAAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Meshes/WmlVETMesh.cpp