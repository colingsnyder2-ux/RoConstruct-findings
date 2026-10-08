// from server: 100% by auto
// roc 2012-06 004cc6a0  unit: std::D::DU?$char_traits::V?$basic_string::V?$_Tset_traits::?$_Tree_nod::PAU_Node::?$STLAllocator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cc6a0
//
// 004cc6a0  c741108868b600       mov dword ptr [ecx + 0x10], 0xb66888
// 004cc6a7  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Face@Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
