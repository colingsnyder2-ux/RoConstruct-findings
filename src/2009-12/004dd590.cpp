// roc 2009-12 004dd590  unit: G3D::Shader  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd590
//
// 004dd590  53                   push ebx
// 004dd591  55                   push ebp
// 004dd592  8bd9                 mov ebx, ecx
// 004dd594  33ed                 xor ebp, ebp
// 004dd596  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004dd599  7e37                 jle 0x4dd5d2
// 004dd59b  56                   push esi
// 004dd59c  57                   push edi
// 004dd59d  8d4900               lea ecx, [ecx]
// 004dd5a0  8b4308               mov eax, dword ptr [ebx + 8]
// 004dd5a3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004dd5a6  85f6                 test esi, esi
// 004dd5a8  7420                 je 0x4dd5ca
// 004dd5aa  8d9b00000000         lea ebx, [ebx]
// 004dd5b0  8b7e68               mov edi, dword ptr [esi + 0x68]
// 004dd5b3  8d4e04               lea ecx, [esi + 4]
// 004dd5b6  e8a5f2ffff           call 0x4dc860
// 004dd5bb  56                   push esi
// 004dd5bc  e8dfeb0700           call 0x55c1a0
// 004dd5c1  83c404               add esp, 4
// 004dd5c4  8bf7                 mov esi, edi
// 004dd5c6  85ff                 test edi, edi
// 004dd5c8  75e6                 jne 0x4dd5b0
// 004dd5ca  45                   inc ebp
// 004dd5cb  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004dd5ce  7cd0                 jl 0x4dd5a0
// 004dd5d0  5f                   pop edi
// 004dd5d1  5e                   pop esi
// 004dd5d2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004dd5d5  51                   push ecx
// 004dd5d6  e805ce1000           call 0x5ea3e0
// 004dd5db  83c404               add esp, 4
// 004dd5de  33c0                 xor eax, eax
// 004dd5e0  5d                   pop ebp
// 004dd5e1  894308               mov dword ptr [ebx + 8], eax
// 004dd5e4  89430c               mov dword ptr [ebx + 0xc], eax
// 004dd5e7  894304               mov dword ptr [ebx + 4], eax
// 004dd5ea  5b                   pop ebx
// 004dd5eb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
