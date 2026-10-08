// roc 2009-12 004dc350  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc350
//
// 004dc350  53                   push ebx
// 004dc351  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004dc355  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004dc359  55                   push ebp
// 004dc35a  56                   push esi
// 004dc35b  8bf1                 mov esi, ecx
// 004dc35d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004dc360  57                   push edi
// 004dc361  7205                 jb 0x4dc368
// 004dc363  8b4304               mov eax, dword ptr [ebx + 4]
// 004dc366  eb03                 jmp 0x4dc36b
// 004dc368  8d4304               lea eax, [ebx + 4]
// 004dc36b  51                   push ecx
// 004dc36c  50                   push eax
// 004dc36d  e83ee51100           call 0x5fa8b0
// 004dc372  33d2                 xor edx, edx
// 004dc374  8bf8                 mov edi, eax
// 004dc376  f7760c               div dword ptr [esi + 0xc]
// 004dc379  8b4608               mov eax, dword ptr [esi + 8]
// 004dc37c  83c408               add esp, 8
// 004dc37f  8b3490               mov esi, dword ptr [eax + edx*4]
// 004dc382  85f6                 test esi, esi
// 004dc384  742a                 je 0x4dc3b0
// 004dc386  8b2d7cb69800         mov ebp, dword ptr [0x98b67c]
// 004dc38c  8d642400             lea esp, [esp]
// 004dc390  393e                 cmp dword ptr [esi], edi
// 004dc392  750e                 jne 0x4dc3a2
// 004dc394  8d4e04               lea ecx, [esi + 4]
// 004dc397  53                   push ebx
// 004dc398  51                   push ecx
// 004dc399  ffd5                 call ebp
// 004dc39b  83c408               add esp, 8
// 004dc39e  84c0                 test al, al
// 004dc3a0  7517                 jne 0x4dc3b9
// 004dc3a2  8b7668               mov esi, dword ptr [esi + 0x68]
// 004dc3a5  85f6                 test esi, esi
// 004dc3a7  75e7                 jne 0x4dc390
// 004dc3a9  8da42400000000       lea esp, [esp]
// 004dc3b0  5f                   pop edi
// 004dc3b1  5e                   pop esi
// 004dc3b2  5d                   pop ebp
// 004dc3b3  32c0                 xor al, al
// 004dc3b5  5b                   pop ebx
// 004dc3b6  c20400               ret 4
// 004dc3b9  5f                   pop edi
// 004dc3ba  5e                   pop esi
// 004dc3bb  5d                   pop ebp
// 004dc3bc  b001                 mov al, 1
// 004dc3be  5b                   pop ebx
// 004dc3bf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
