// roc 2010-06 0049c220  unit: G3D::VertexAndPixelShader  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c220
//
// 0049c220  53                   push ebx
// 0049c221  56                   push esi
// 0049c222  8bf1                 mov esi, ecx
// 0049c224  8b4618               mov eax, dword ptr [esi + 0x18]
// 0049c227  57                   push edi
// 0049c228  50                   push eax
// 0049c229  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 0049c22f  8b4658               mov eax, dword ptr [esi + 0x58]
// 0049c232  83e800               sub eax, 0
// 0049c235  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 0049c238  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0049c23b  741a                 je 0x49c257
// 0049c23d  83e801               sub eax, 1
// 0049c240  7526                 jne 0x49c268
// 0049c242  57                   push edi
// 0049c243  8d4e0c               lea ecx, [esi + 0xc]
// 0049c246  e835ffffff           call 0x49c180
// 0049c24b  53                   push ebx
// 0049c24c  57                   push edi
// 0049c24d  ff15103ac000         call dword ptr [0xc03a10]
// 0049c253  5f                   pop edi
// 0049c254  5e                   pop esi
// 0049c255  5b                   pop ebx
// 0049c256  c3                   ret 
// 0049c257  57                   push edi
// 0049c258  8d4e0c               lea ecx, [esi + 0xc]
// 0049c25b  e870ffffff           call 0x49c1d0
// 0049c260  53                   push ebx
// 0049c261  57                   push edi
// 0049c262  ff15e839c000         call dword ptr [0xc039e8]
// 0049c268  5f                   pop edi
// 0049c269  5e                   pop esi
// 0049c26a  5b                   pop ebx
// 0049c26b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?bind@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
