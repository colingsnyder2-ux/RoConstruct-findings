// from server: 100% by auto
// roc 2009-06 004af7a0  unit: G3D::Shader  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af7a0
//
// 004af7a0  53                   push ebx
// 004af7a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004af7a5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004af7a9  55                   push ebp
// 004af7aa  56                   push esi
// 004af7ab  8bf1                 mov esi, ecx
// 004af7ad  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004af7b0  57                   push edi
// 004af7b1  7205                 jb 0x4af7b8
// 004af7b3  8b4304               mov eax, dword ptr [ebx + 4]
// 004af7b6  eb03                 jmp 0x4af7bb
// 004af7b8  8d4304               lea eax, [ebx + 4]
// 004af7bb  51                   push ecx
// 004af7bc  50                   push eax
// 004af7bd  e85eab0c00           call 0x57a320
// 004af7c2  33d2                 xor edx, edx
// 004af7c4  8bf8                 mov edi, eax
// 004af7c6  f7760c               div dword ptr [esi + 0xc]
// 004af7c9  8b4608               mov eax, dword ptr [esi + 8]
// 004af7cc  83c408               add esp, 8
// 004af7cf  8b3490               mov esi, dword ptr [eax + edx*4]
// 004af7d2  85f6                 test esi, esi
// 004af7d4  7423                 je 0x4af7f9
// 004af7d6  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004af7dc  8d642400             lea esp, [esp]
// 004af7e0  393e                 cmp dword ptr [esi], edi
// 004af7e2  750e                 jne 0x4af7f2
// 004af7e4  8d4e04               lea ecx, [esi + 4]
// 004af7e7  53                   push ebx
// 004af7e8  51                   push ecx
// 004af7e9  ffd5                 call ebp
// 004af7eb  83c408               add esp, 8
// 004af7ee  84c0                 test al, al
// 004af7f0  7507                 jne 0x4af7f9
// 004af7f2  8b7668               mov esi, dword ptr [esi + 0x68]
// 004af7f5  85f6                 test esi, esi
// 004af7f7  75e7                 jne 0x4af7e0
// 004af7f9  5f                   pop edi
// 004af7fa  8d4620               lea eax, [esi + 0x20]
// 004af7fd  5e                   pop esi
// 004af7fe  5d                   pop ebp
// 004af7ff  5b                   pop ebx
// 004af800  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
