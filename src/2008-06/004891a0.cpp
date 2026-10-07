// roc 2008-06 004891a0  unit: G3D::VertexAndPixelShader  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004891a0
//
// 004891a0  53                   push ebx
// 004891a1  56                   push esi
// 004891a2  8bf1                 mov esi, ecx
// 004891a4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004891a7  57                   push edi
// 004891a8  50                   push eax
// 004891a9  ff1550298000         call dword ptr [0x802950]
// 004891af  8b4658               mov eax, dword ptr [esi + 0x58]
// 004891b2  83e800               sub eax, 0
// 004891b5  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 004891b8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004891bb  741a                 je 0x4891d7
// 004891bd  83e801               sub eax, 1
// 004891c0  7526                 jne 0x4891e8
// 004891c2  57                   push edi
// 004891c3  8d4e0c               lea ecx, [esi + 0xc]
// 004891c6  e835ffffff           call 0x489100
// 004891cb  53                   push ebx
// 004891cc  57                   push edi
// 004891cd  ff1570f89600         call dword ptr [0x96f870]
// 004891d3  5f                   pop edi
// 004891d4  5e                   pop esi
// 004891d5  5b                   pop ebx
// 004891d6  c3                   ret 
// 004891d7  57                   push edi
// 004891d8  8d4e0c               lea ecx, [esi + 0xc]
// 004891db  e870ffffff           call 0x489150
// 004891e0  53                   push ebx
// 004891e1  57                   push edi
// 004891e2  ff1548f89600         call dword ptr [0x96f848]
// 004891e8  5f                   pop edi
// 004891e9  5e                   pop esi
// 004891ea  5b                   pop ebx
// 004891eb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?bind@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
