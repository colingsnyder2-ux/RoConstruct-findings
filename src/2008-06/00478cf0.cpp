// roc 2008-06 00478cf0  unit: CInstanceRecord::CNameItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478cf0
//
// 00478cf0  d9ee                 fldz 
// 00478cf2  56                   push esi
// 00478cf3  8bf1                 mov esi, ecx
// 00478cf5  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00478cfc  d95658               fst dword ptr [esi + 0x58]
// 00478cff  d916                 fst dword ptr [esi]
// 00478d01  57                   push edi
// 00478d02  d95604               fst dword ptr [esi + 4]
// 00478d05  6a40                 push 0x40
// 00478d07  d95e08               fstp dword ptr [esi + 8]
// 00478d0a  8d7e14               lea edi, [esi + 0x14]
// 00478d0d  d9e8                 fld1 
// 00478d0f  6a00                 push 0
// 00478d11  57                   push edi
// 00478d12  d95e0c               fstp dword ptr [esi + 0xc]
// 00478d15  c7465404000000       mov dword ptr [esi + 0x54], 4
// 00478d1c  e8e3892200           call 0x6a1704
// 00478d21  d9e8                 fld1 
// 00478d23  d917                 fst dword ptr [edi]
// 00478d25  83c40c               add esp, 0xc
// 00478d28  d95628               fst dword ptr [esi + 0x28]
// 00478d2b  5f                   pop edi
// 00478d2c  d9563c               fst dword ptr [esi + 0x3c]
// 00478d2f  8bc6                 mov eax, esi
// 00478d31  d95e50               fstp dword ptr [esi + 0x50]
// 00478d34  5e                   pop esi
// 00478d35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
