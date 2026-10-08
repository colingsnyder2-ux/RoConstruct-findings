// from server: 100% by auto
// roc 2009-06 005677e0  unit: RBX::RbxG3D::RenderScene  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005677e0
//
// 005677e0  8bc1                 mov eax, ecx
// 005677e2  33c9                 xor ecx, ecx
// 005677e4  894804               mov dword ptr [eax + 4], ecx
// 005677e7  894808               mov dword ptr [eax + 8], ecx
// 005677ea  8908                 mov dword ptr [eax], ecx
// 005677ec  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$Array@PBX@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
