// roc 2009-12 004ca2e0  unit: G3D::VARArea  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca2e0
//
// 004ca2e0  53                   push ebx
// 004ca2e1  55                   push ebp
// 004ca2e2  33ed                 xor ebp, ebp
// 004ca2e4  33db                 xor ebx, ebx
// 004ca2e6  392d34d0b700         cmp dword ptr [0xb7d034], ebp
// 004ca2ec  7e6b                 jle 0x4ca359
// 004ca2ee  56                   push esi
// 004ca2ef  57                   push edi
// 004ca2f0  a130d0b700           mov eax, dword ptr [0xb7d030]
// 004ca2f5  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004ca2f8  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004ca2fb  8d7e0c               lea edi, [esi + 0xc]
// 004ca2fe  7434                 je 0x4ca334
// 004ca300  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004ca303  57                   push edi
// 004ca304  e8c7230000           call 0x4cc6d0
// 004ca309  8b07                 mov eax, dword ptr [edi]
// 004ca30b  3bc5                 cmp eax, ebp
// 004ca30d  7425                 je 0x4ca334
// 004ca30f  83c004               add eax, 4
// 004ca312  50                   push eax
// 004ca313  ff1508b29800         call dword ptr [0x98b208]
// 004ca319  85c0                 test eax, eax
// 004ca31b  7515                 jne 0x4ca332
// 004ca31d  8b0f                 mov ecx, dword ptr [edi]
// 004ca31f  e8fc0cf8ff           call 0x44b020
// 004ca324  8b0f                 mov ecx, dword ptr [edi]
// 004ca326  3bcd                 cmp ecx, ebp
// 004ca328  7408                 je 0x4ca332
// 004ca32a  8b11                 mov edx, dword ptr [ecx]
// 004ca32c  8b02                 mov eax, dword ptr [edx]
// 004ca32e  6a01                 push 1
// 004ca330  ffd0                 call eax
// 004ca332  892f                 mov dword ptr [edi], ebp
// 004ca334  83461801             add dword ptr [esi + 0x18], 1
// 004ca338  896e10               mov dword ptr [esi + 0x10], ebp
// 004ca33b  55                   push ebp
// 004ca33c  116e1c               adc dword ptr [esi + 0x1c], ebp
// 004ca33f  8b0d30d0b700         mov ecx, dword ptr [0xb7d030]
// 004ca345  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 004ca348  8b11                 mov edx, dword ptr [ecx]
// 004ca34a  8b02                 mov eax, dword ptr [edx]
// 004ca34c  ffd0                 call eax
// 004ca34e  43                   inc ebx
// 004ca34f  3b1d34d0b700         cmp ebx, dword ptr [0xb7d034]
// 004ca355  7c99                 jl 0x4ca2f0
// 004ca357  5f                   pop edi
// 004ca358  5e                   pop esi
// 004ca359  6a01                 push 1
// 004ca35b  55                   push ebp
// 004ca35c  b930d0b700           mov ecx, 0xb7d030
// 004ca361  e8fafbffff           call 0x4c9f60
// 004ca366  5d                   pop ebp
// 004ca367  5b                   pop ebx
// 004ca368  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanupAllVARAreas@VARArea@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
