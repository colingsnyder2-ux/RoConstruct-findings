// from server: 100% by auto
// roc 2012-06 008a21d0  unit: RBX::ToolMouseCommand  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a21d0
//
// 008a21d0  8bc1                 mov eax, ecx
// 008a21d2  33c9                 xor ecx, ecx
// 008a21d4  894804               mov dword ptr [eax + 4], ecx
// 008a21d7  894808               mov dword ptr [eax + 8], ecx
// 008a21da  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
