// roc 2008-06 00485920  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485920
//
// 00485920  53                   push ebx
// 00485921  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00485925  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00485929  55                   push ebp
// 0048592a  56                   push esi
// 0048592b  8bf1                 mov esi, ecx
// 0048592d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00485930  57                   push edi
// 00485931  7205                 jb 0x485938
// 00485933  8b4304               mov eax, dword ptr [ebx + 4]
// 00485936  eb03                 jmp 0x48593b
// 00485938  8d4304               lea eax, [ebx + 4]
// 0048593b  51                   push ecx
// 0048593c  50                   push eax
// 0048593d  e8dec90800           call 0x512320
// 00485942  33d2                 xor edx, edx
// 00485944  8bf8                 mov edi, eax
// 00485946  f7760c               div dword ptr [esi + 0xc]
// 00485949  8b4608               mov eax, dword ptr [esi + 8]
// 0048594c  83c408               add esp, 8
// 0048594f  8b3490               mov esi, dword ptr [eax + edx*4]
// 00485952  85f6                 test esi, esi
// 00485954  742a                 je 0x485980
// 00485956  8b2d44248000         mov ebp, dword ptr [0x802444]
// 0048595c  8d642400             lea esp, [esp]
// 00485960  393e                 cmp dword ptr [esi], edi
// 00485962  750e                 jne 0x485972
// 00485964  8d4e04               lea ecx, [esi + 4]
// 00485967  53                   push ebx
// 00485968  51                   push ecx
// 00485969  ffd5                 call ebp
// 0048596b  83c408               add esp, 8
// 0048596e  84c0                 test al, al
// 00485970  7517                 jne 0x485989
// 00485972  8b7668               mov esi, dword ptr [esi + 0x68]
// 00485975  85f6                 test esi, esi
// 00485977  75e7                 jne 0x485960
// 00485979  8da42400000000       lea esp, [esp]
// 00485980  5f                   pop edi
// 00485981  5e                   pop esi
// 00485982  5d                   pop ebp
// 00485983  32c0                 xor al, al
// 00485985  5b                   pop ebx
// 00485986  c20400               ret 4
// 00485989  5f                   pop edi
// 0048598a  5e                   pop esi
// 0048598b  5d                   pop ebp
// 0048598c  b001                 mov al, 1
// 0048598e  5b                   pop ebx
// 0048598f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
