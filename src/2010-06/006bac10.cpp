// from server: 100% by auto
// roc 2010-06 006bac10  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bac10
//
// 006bac10  51                   push ecx
// 006bac11  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bac15  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bac19  56                   push esi
// 006bac1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bac1e  50                   push eax
// 006bac1f  51                   push ecx
// 006bac20  8bce                 mov ecx, esi
// 006bac22  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006bac2a  e871ffffff           call 0x6baba0
// 006bac2f  8bc6                 mov eax, esi
// 006bac31  5e                   pop esi
// 006bac32  59                   pop ecx
// 006bac33  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromPointAndDirection@Line@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
