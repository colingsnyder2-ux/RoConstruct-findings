// roc 2011-06 00784b90  unit: RBX::ScriptMouseCommand  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00784b90
//
// 00784b90  8bc1                 mov eax, ecx
// 00784b92  33c9                 xor ecx, ecx
// 00784b94  894804               mov dword ptr [eax + 4], ecx
// 00784b97  894808               mov dword ptr [eax + 8], ecx
// 00784b9a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
