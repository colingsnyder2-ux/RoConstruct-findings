// roc 2009-12 004dfe80  unit: G3D::VertexAndPixelShader  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfe80
//
// 004dfe80  53                   push ebx
// 004dfe81  56                   push esi
// 004dfe82  8bf1                 mov esi, ecx
// 004dfe84  8b4618               mov eax, dword ptr [esi + 0x18]
// 004dfe87  57                   push edi
// 004dfe88  50                   push eax
// 004dfe89  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004dfe8f  8b4658               mov eax, dword ptr [esi + 0x58]
// 004dfe92  83e800               sub eax, 0
// 004dfe95  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 004dfe98  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004dfe9b  741a                 je 0x4dfeb7
// 004dfe9d  83e801               sub eax, 1
// 004dfea0  7526                 jne 0x4dfec8
// 004dfea2  57                   push edi
// 004dfea3  8d4e0c               lea ecx, [esi + 0xc]
// 004dfea6  e835ffffff           call 0x4dfde0
// 004dfeab  53                   push ebx
// 004dfeac  57                   push edi
// 004dfead  ff1580d9b700         call dword ptr [0xb7d980]
// 004dfeb3  5f                   pop edi
// 004dfeb4  5e                   pop esi
// 004dfeb5  5b                   pop ebx
// 004dfeb6  c3                   ret 
// 004dfeb7  57                   push edi
// 004dfeb8  8d4e0c               lea ecx, [esi + 0xc]
// 004dfebb  e870ffffff           call 0x4dfe30
// 004dfec0  53                   push ebx
// 004dfec1  57                   push edi
// 004dfec2  ff1558d9b700         call dword ptr [0xb7d958]
// 004dfec8  5f                   pop edi
// 004dfec9  5e                   pop esi
// 004dfeca  5b                   pop ebx
// 004dfecb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?bind@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
