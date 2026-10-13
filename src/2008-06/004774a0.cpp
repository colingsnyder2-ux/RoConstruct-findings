// roc 2008-06 004774a0  unit: G3D::VARArea  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004774a0
//
// 004774a0  83f804               cmp eax, 4
// 004774a3  7725                 ja 0x4774ca
// 004774a5  ff2485d0744700       jmp dword ptr [eax*4 + 0x4774d0]
// 004774ac  b807800000           mov eax, 0x8007
// 004774b1  c3                   ret 
// 004774b2  b808800000           mov eax, 0x8008
// 004774b7  c3                   ret 
// 004774b8  b806800000           mov eax, 0x8006
// 004774bd  c3                   ret 
// 004774be  b80a800000           mov eax, 0x800a
// 004774c3  c3                   ret 
// 004774c4  b80b800000           mov eax, 0x800b
// 004774c9  c3                   ret 
// 004774ca  33c0                 xor eax, eax
// 004774cc  c3                   ret 
// 004774cd  8d4900               lea ecx, [ecx]
// 004774d0  ac                   lodsb al, byte ptr [esi]
// 004774d1  7447                 je 0x47751a
// 004774d3  00b2744700b8         add byte ptr [edx - 0x47ffb88c], dh
// 004774d9  7447                 je 0x477522
// 004774db  00be744700c4         add byte ptr [esi - 0x3bffb88c], bh
// 004774e1  7447                 je 0x47752a
// library g3d-6.09-rbx2008/GLG3Dcpp\RenderDevice.cpp (function ?toGLBlendEq@G3D@@YAIW4BlendEq@RenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/RenderDevice.cpp
