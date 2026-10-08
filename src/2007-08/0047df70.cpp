// from server: 100% by auto
// roc 2007-08 0047df70  unit: G3D::Win32Window  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047df70
//
// 0047df70  8bc1                 mov eax, ecx
// 0047df72  33c9                 xor ecx, ecx
// 0047df74  894804               mov dword ptr [eax + 4], ecx
// 0047df77  894808               mov dword ptr [eax + 8], ecx
// 0047df7a  8908                 mov dword ptr [eax], ecx
// 0047df7c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$Array@PBX@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
