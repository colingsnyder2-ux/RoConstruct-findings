// from server: 100% by auto
// roc 2007-08 004759d0  unit: CInstanceRecord::CNameItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004759d0
//
// 004759d0  d9ee                 fldz 
// 004759d2  56                   push esi
// 004759d3  8bf1                 mov esi, ecx
// 004759d5  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004759dc  d95658               fst dword ptr [esi + 0x58]
// 004759df  d916                 fst dword ptr [esi]
// 004759e1  57                   push edi
// 004759e2  d95604               fst dword ptr [esi + 4]
// 004759e5  6a40                 push 0x40
// 004759e7  d95e08               fstp dword ptr [esi + 8]
// 004759ea  8d7e14               lea edi, [esi + 0x14]
// 004759ed  d9e8                 fld1 
// 004759ef  6a00                 push 0
// 004759f1  57                   push edi
// 004759f2  d95e0c               fstp dword ptr [esi + 0xc]
// 004759f5  c7465404000000       mov dword ptr [esi + 0x54], 4
// 004759fc  e88bb11b00           call 0x630b8c
// 00475a01  d9e8                 fld1 
// 00475a03  d917                 fst dword ptr [edi]
// 00475a05  83c40c               add esp, 0xc
// 00475a08  d95628               fst dword ptr [esi + 0x28]
// 00475a0b  5f                   pop edi
// 00475a0c  d9563c               fst dword ptr [esi + 0x3c]
// 00475a0f  8bc6                 mov eax, esi
// 00475a11  d95e50               fstp dword ptr [esi + 0x50]
// 00475a14  5e                   pop esi
// 00475a15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
