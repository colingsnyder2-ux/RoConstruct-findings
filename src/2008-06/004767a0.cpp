// roc 2008-06 004767a0  unit: G3D::VARArea  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004767a0
//
// 004767a0  83f806               cmp eax, 6
// 004767a3  772b                 ja 0x4767d0
// 004767a5  ff2485d4674700       jmp dword ptr [eax*4 + 0x4767d4]
// 004767ac  b802030000           mov eax, 0x302
// 004767b1  c3                   ret 
// 004767b2  b803030000           mov eax, 0x303
// 004767b7  c3                   ret 
// 004767b8  b801000000           mov eax, 1
// 004767bd  c3                   ret 
// 004767be  b800030000           mov eax, 0x300
// 004767c3  c3                   ret 
// 004767c4  b806030000           mov eax, 0x306
// 004767c9  c3                   ret 
// 004767ca  b801030000           mov eax, 0x301
// 004767cf  c3                   ret 
// 004767d0  33c0                 xor eax, eax
// 004767d2  c3                   ret 
// 004767d3  90                   nop 
// 004767d4  ac                   lodsb al, byte ptr [esi]
// 004767d5  6747                 inc edi
// 004767d7  00b2674700b8         add byte ptr [edx - 0x47ffb899], dh
// 004767dd  6747                 inc edi
// 004767df  00d0                 add al, dl
// 004767e1  6747                 inc edi
// 004767e3  00be674700c4         add byte ptr [esi - 0x3bffb899], bh
// 004767e9  6747                 inc edi
// 004767eb  00ca                 add dl, cl
// 004767ed  6747                 inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\RenderDevice.cpp (function ?toGLBlendFunc@G3D@@YAHW4BlendFunc@RenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/RenderDevice.cpp
