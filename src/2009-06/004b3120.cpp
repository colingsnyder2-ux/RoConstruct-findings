// from server: 100% by auto
// roc 2009-06 004b3120  unit: G3D::VertexAndPixelShader  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3120
//
// 004b3120  53                   push ebx
// 004b3121  56                   push esi
// 004b3122  8bf1                 mov esi, ecx
// 004b3124  8b4618               mov eax, dword ptr [esi + 0x18]
// 004b3127  57                   push edi
// 004b3128  50                   push eax
// 004b3129  ff15aceb8900         call dword ptr [0x89ebac]
// 004b312f  8b4658               mov eax, dword ptr [esi + 0x58]
// 004b3132  83e800               sub eax, 0
// 004b3135  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 004b3138  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004b313b  741a                 je 0x4b3157
// 004b313d  83e801               sub eax, 1
// 004b3140  7526                 jne 0x4b3168
// 004b3142  57                   push edi
// 004b3143  8d4e0c               lea ecx, [esi + 0xc]
// 004b3146  e835ffffff           call 0x4b3080
// 004b314b  53                   push ebx
// 004b314c  57                   push edi
// 004b314d  ff15d0d1a300         call dword ptr [0xa3d1d0]
// 004b3153  5f                   pop edi
// 004b3154  5e                   pop esi
// 004b3155  5b                   pop ebx
// 004b3156  c3                   ret 
// 004b3157  57                   push edi
// 004b3158  8d4e0c               lea ecx, [esi + 0xc]
// 004b315b  e870ffffff           call 0x4b30d0
// 004b3160  53                   push ebx
// 004b3161  57                   push edi
// 004b3162  ff15a8d1a300         call dword ptr [0xa3d1a8]
// 004b3168  5f                   pop edi
// 004b3169  5e                   pop esi
// 004b316a  5b                   pop ebx
// 004b316b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?bind@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
