// roc 2009-12 0073b610  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b610
//
// 0073b610  51                   push ecx
// 0073b611  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073b615  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073b619  56                   push esi
// 0073b61a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073b61e  50                   push eax
// 0073b61f  51                   push ecx
// 0073b620  8bce                 mov ecx, esi
// 0073b622  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0073b62a  e871ffffff           call 0x73b5a0
// 0073b62f  8bc6                 mov eax, esi
// 0073b631  5e                   pop esi
// 0073b632  59                   pop ecx
// 0073b633  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
