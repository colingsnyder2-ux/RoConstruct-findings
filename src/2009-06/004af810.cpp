// from server: 100% by auto
// roc 2009-06 004af810  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af810
//
// 004af810  53                   push ebx
// 004af811  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004af815  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004af819  55                   push ebp
// 004af81a  56                   push esi
// 004af81b  8bf1                 mov esi, ecx
// 004af81d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004af820  57                   push edi
// 004af821  7205                 jb 0x4af828
// 004af823  8b4304               mov eax, dword ptr [ebx + 4]
// 004af826  eb03                 jmp 0x4af82b
// 004af828  8d4304               lea eax, [ebx + 4]
// 004af82b  51                   push ecx
// 004af82c  50                   push eax
// 004af82d  e8eeaa0c00           call 0x57a320
// 004af832  33d2                 xor edx, edx
// 004af834  8bf8                 mov edi, eax
// 004af836  f7760c               div dword ptr [esi + 0xc]
// 004af839  8b4608               mov eax, dword ptr [esi + 8]
// 004af83c  83c408               add esp, 8
// 004af83f  8b3490               mov esi, dword ptr [eax + edx*4]
// 004af842  85f6                 test esi, esi
// 004af844  742a                 je 0x4af870
// 004af846  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004af84c  8d642400             lea esp, [esp]
// 004af850  393e                 cmp dword ptr [esi], edi
// 004af852  750e                 jne 0x4af862
// 004af854  8d4e04               lea ecx, [esi + 4]
// 004af857  53                   push ebx
// 004af858  51                   push ecx
// 004af859  ffd5                 call ebp
// 004af85b  83c408               add esp, 8
// 004af85e  84c0                 test al, al
// 004af860  7517                 jne 0x4af879
// 004af862  8b7668               mov esi, dword ptr [esi + 0x68]
// 004af865  85f6                 test esi, esi
// 004af867  75e7                 jne 0x4af850
// 004af869  8da42400000000       lea esp, [esp]
// 004af870  5f                   pop edi
// 004af871  5e                   pop esi
// 004af872  5d                   pop ebp
// 004af873  32c0                 xor al, al
// 004af875  5b                   pop ebx
// 004af876  c20400               ret 4
// 004af879  5f                   pop edi
// 004af87a  5e                   pop esi
// 004af87b  5d                   pop ebp
// 004af87c  b001                 mov al, 1
// 004af87e  5b                   pop ebx
// 004af87f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
