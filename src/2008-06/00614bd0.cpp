// from server: 100% by auto
// roc 2008-06 00614bd0  unit: RBX::RevoluteLink  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614bd0
//
// 00614bd0  8bc1                 mov eax, ecx
// 00614bd2  33c9                 xor ecx, ecx
// 00614bd4  894804               mov dword ptr [eax + 4], ecx
// 00614bd7  894808               mov dword ptr [eax + 8], ecx
// 00614bda  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
