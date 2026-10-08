// roc 2009-12 004c8340  unit: G3D::Texture  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8340
//
// 004c8340  53                   push ebx
// 004c8341  57                   push edi
// 004c8342  8bf9                 mov edi, ecx
// 004c8344  33db                 xor ebx, ebx
// 004c8346  395f04               cmp dword ptr [edi + 4], ebx
// 004c8349  7e2a                 jle 0x4c8375
// 004c834b  55                   push ebp
// 004c834c  56                   push esi
// 004c834d  33ed                 xor ebp, ebp
// 004c834f  90                   nop 
// 004c8350  8b37                 mov esi, dword ptr [edi]
// 004c8352  8b042e               mov eax, dword ptr [esi + ebp]
// 004c8355  03f5                 add esi, ebp
// 004c8357  50                   push eax
// 004c8358  e883201200           call 0x5ea3e0
// 004c835d  33c0                 xor eax, eax
// 004c835f  43                   inc ebx
// 004c8360  83c404               add esp, 4
// 004c8363  8906                 mov dword ptr [esi], eax
// 004c8365  894604               mov dword ptr [esi + 4], eax
// 004c8368  894608               mov dword ptr [esi + 8], eax
// 004c836b  83c50c               add ebp, 0xc
// 004c836e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004c8371  7cdd                 jl 0x4c8350
// 004c8373  5e                   pop esi
// 004c8374  5d                   pop ebp
// 004c8375  8b0f                 mov ecx, dword ptr [edi]
// 004c8377  51                   push ecx
// 004c8378  e863201200           call 0x5ea3e0
// 004c837d  33c0                 xor eax, eax
// 004c837f  83c404               add esp, 4
// 004c8382  8907                 mov dword ptr [edi], eax
// 004c8384  894704               mov dword ptr [edi + 4], eax
// 004c8387  894708               mov dword ptr [edi + 8], eax
// 004c838a  5f                   pop edi
// 004c838b  5b                   pop ebx
// 004c838c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\MD2Model_load.cpp (function ??1?$Array@V?$Array@H@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/MD2Model_load.cpp
