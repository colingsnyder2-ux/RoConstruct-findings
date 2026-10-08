// from server: 100% by auto
// roc 2009-06 004a01d0  unit: G3D::VARArea  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a01d0
//
// 004a01d0  d9ee                 fldz 
// 004a01d2  56                   push esi
// 004a01d3  8bf1                 mov esi, ecx
// 004a01d5  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004a01dc  d95658               fst dword ptr [esi + 0x58]
// 004a01df  d916                 fst dword ptr [esi]
// 004a01e1  57                   push edi
// 004a01e2  d95604               fst dword ptr [esi + 4]
// 004a01e5  6a40                 push 0x40
// 004a01e7  d95e08               fstp dword ptr [esi + 8]
// 004a01ea  8d7e14               lea edi, [esi + 0x14]
// 004a01ed  d9e8                 fld1 
// 004a01ef  6a00                 push 0
// 004a01f1  57                   push edi
// 004a01f2  d95e0c               fstp dword ptr [esi + 0xc]
// 004a01f5  c7465404000000       mov dword ptr [esi + 0x54], 4
// 004a01fc  e8739a2700           call 0x719c74
// 004a0201  d9e8                 fld1 
// 004a0203  d917                 fst dword ptr [edi]
// 004a0205  83c40c               add esp, 0xc
// 004a0208  d95628               fst dword ptr [esi + 0x28]
// 004a020b  5f                   pop edi
// 004a020c  d9563c               fst dword ptr [esi + 0x3c]
// 004a020f  8bc6                 mov eax, esi
// 004a0211  d95e50               fstp dword ptr [esi + 0x50]
// 004a0214  5e                   pop esi
// 004a0215  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
