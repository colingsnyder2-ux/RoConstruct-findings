// roc 2008-06 00476ec0  unit: G3D::VARArea  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476ec0
//
// 00476ec0  83f808               cmp eax, 8
// 00476ec3  7737                 ja 0x476efc
// 00476ec5  ff2485006f4700       jmp dword ptr [eax*4 + 0x476f00]
// 00476ecc  b807020000           mov eax, 0x207
// 00476ed1  c3                   ret 
// 00476ed2  b801020000           mov eax, 0x201
// 00476ed7  c3                   ret 
// 00476ed8  b803020000           mov eax, 0x203
// 00476edd  c3                   ret 
// 00476ede  b804020000           mov eax, 0x204
// 00476ee3  c3                   ret 
// 00476ee4  b806020000           mov eax, 0x206
// 00476ee9  c3                   ret 
// 00476eea  b802020000           mov eax, 0x202
// 00476eef  c3                   ret 
// 00476ef0  b805020000           mov eax, 0x205
// 00476ef5  c3                   ret 
// 00476ef6  b800020000           mov eax, 0x200
// 00476efb  c3                   ret 
// 00476efc  33c0                 xor eax, eax
// 00476efe  c3                   ret 
// 00476eff  90                   nop 
// 00476f00  de6e47               fisubr word ptr [esi + 0x47]
// 00476f03  00d2                 add dl, dl
// 00476f05  6e                   outsb dx, byte ptr [esi]
// 00476f06  47                   inc edi
// 00476f07  00e4                 add ah, ah
// 00476f09  6e                   outsb dx, byte ptr [esi]
// 00476f0a  47                   inc edi
// 00476f0b  00d8                 add al, bl
// 00476f0d  6e                   outsb dx, byte ptr [esi]
// 00476f0e  47                   inc edi
// 00476f0f  00f0                 add al, dh
// 00476f11  6e                   outsb dx, byte ptr [esi]
// 00476f12  47                   inc edi
// 00476f13  00ea                 add dl, ch
// 00476f15  6e                   outsb dx, byte ptr [esi]
// 00476f16  47                   inc edi
// 00476f17  00cc                 add ah, cl
// 00476f19  6e                   outsb dx, byte ptr [esi]
// 00476f1a  47                   inc edi
// 00476f1b  00f6                 add dh, dh
// 00476f1d  6e                   outsb dx, byte ptr [esi]
// 00476f1e  47                   inc edi
// 00476f1f  00fc                 add ah, bh
// 00476f21  6e                   outsb dx, byte ptr [esi]
// 00476f22  47                   inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\RenderDevice.cpp (function ?toGLEnum@G3D@@YAIW4StencilTest@RenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/RenderDevice.cpp
