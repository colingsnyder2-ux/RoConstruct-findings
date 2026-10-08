// from server: 100% by auto
// roc 2009-06 006b86f0  unit: RBX::UniversalTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b86f0
//
// 006b86f0  8bc1                 mov eax, ecx
// 006b86f2  33c9                 xor ecx, ecx
// 006b86f4  894804               mov dword ptr [eax + 4], ecx
// 006b86f7  894808               mov dword ptr [eax + 8], ecx
// 006b86fa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
