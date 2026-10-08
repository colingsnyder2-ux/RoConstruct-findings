// roc 2007-03 00475b30  unit: seg_00470000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475b30
//
// 00475b30  d9ee                 fldz 
// 00475b32  56                   push esi
// 00475b33  8bf1                 mov esi, ecx
// 00475b35  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00475b3c  d95658               fst dword ptr [esi + 0x58]
// 00475b3f  d916                 fst dword ptr [esi]
// 00475b41  57                   push edi
// 00475b42  d95604               fst dword ptr [esi + 4]
// 00475b45  6a40                 push 0x40
// 00475b47  d95e08               fstp dword ptr [esi + 8]
// 00475b4a  8d7e14               lea edi, [esi + 0x14]
// 00475b4d  d9e8                 fld1 
// 00475b4f  6a00                 push 0
// 00475b51  57                   push edi
// 00475b52  d95e0c               fstp dword ptr [esi + 0xc]
// 00475b55  c7465404000000       mov dword ptr [esi + 0x54], 4
// 00475b5c  e8bb941a00           call 0x61f01c
// 00475b61  d9e8                 fld1 
// 00475b63  d917                 fst dword ptr [edi]
// 00475b65  83c40c               add esp, 0xc
// 00475b68  d95628               fst dword ptr [esi + 0x28]
// 00475b6b  5f                   pop edi
// 00475b6c  d9563c               fst dword ptr [esi + 0x3c]
// 00475b6f  8bc6                 mov eax, esi
// 00475b71  d95e50               fstp dword ptr [esi + 0x50]
// 00475b74  5e                   pop esi
// 00475b75  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
