// roc 2009-12 00784cf0  unit: RBX::ScriptMouseCommand  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00784cf0
//
// 00784cf0  8bc1                 mov eax, ecx
// 00784cf2  33c9                 xor ecx, ecx
// 00784cf4  894804               mov dword ptr [eax + 4], ecx
// 00784cf7  894808               mov dword ptr [eax + 8], ecx
// 00784cfa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
