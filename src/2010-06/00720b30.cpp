// roc 2010-06 00720b30  unit: RBX::UniversalTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720b30
//
// 00720b30  8bc1                 mov eax, ecx
// 00720b32  33c9                 xor ecx, ecx
// 00720b34  894804               mov dword ptr [eax + 4], ecx
// 00720b37  894808               mov dword ptr [eax + 8], ecx
// 00720b3a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??0Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
