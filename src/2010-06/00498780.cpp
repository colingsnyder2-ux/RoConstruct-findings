// roc 2010-06 00498780  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498780
//
// 00498780  53                   push ebx
// 00498781  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00498785  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00498789  55                   push ebp
// 0049878a  56                   push esi
// 0049878b  8bf1                 mov esi, ecx
// 0049878d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00498790  57                   push edi
// 00498791  7205                 jb 0x498798
// 00498793  8b4304               mov eax, dword ptr [ebx + 4]
// 00498796  eb03                 jmp 0x49879b
// 00498798  8d4304               lea eax, [ebx + 4]
// 0049879b  51                   push ecx
// 0049879c  50                   push eax
// 0049879d  e85eef0b00           call 0x557700
// 004987a2  33d2                 xor edx, edx
// 004987a4  8bf8                 mov edi, eax
// 004987a6  f7760c               div dword ptr [esi + 0xc]
// 004987a9  8b4608               mov eax, dword ptr [esi + 8]
// 004987ac  83c408               add esp, 8
// 004987af  8b3490               mov esi, dword ptr [eax + edx*4]
// 004987b2  85f6                 test esi, esi
// 004987b4  742a                 je 0x4987e0
// 004987b6  8b2d8ca49e00         mov ebp, dword ptr [0x9ea48c]
// 004987bc  8d642400             lea esp, [esp]
// 004987c0  393e                 cmp dword ptr [esi], edi
// 004987c2  750e                 jne 0x4987d2
// 004987c4  8d4e04               lea ecx, [esi + 4]
// 004987c7  53                   push ebx
// 004987c8  51                   push ecx
// 004987c9  ffd5                 call ebp
// 004987cb  83c408               add esp, 8
// 004987ce  84c0                 test al, al
// 004987d0  7517                 jne 0x4987e9
// 004987d2  8b7668               mov esi, dword ptr [esi + 0x68]
// 004987d5  85f6                 test esi, esi
// 004987d7  75e7                 jne 0x4987c0
// 004987d9  8da42400000000       lea esp, [esp]
// 004987e0  5f                   pop edi
// 004987e1  5e                   pop esi
// 004987e2  5d                   pop ebp
// 004987e3  32c0                 xor al, al
// 004987e5  5b                   pop ebx
// 004987e6  c20400               ret 4
// 004987e9  5f                   pop edi
// 004987ea  5e                   pop esi
// 004987eb  5d                   pop ebp
// 004987ec  b001                 mov al, 1
// 004987ee  5b                   pop ebx
// 004987ef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
