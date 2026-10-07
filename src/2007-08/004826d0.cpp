// roc 2007-08 004826d0  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004826d0
//
// 004826d0  53                   push ebx
// 004826d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004826d5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004826d9  55                   push ebp
// 004826da  56                   push esi
// 004826db  8bf1                 mov esi, ecx
// 004826dd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004826e0  57                   push edi
// 004826e1  7205                 jb 0x4826e8
// 004826e3  8b4304               mov eax, dword ptr [ebx + 4]
// 004826e6  eb03                 jmp 0x4826eb
// 004826e8  8d4304               lea eax, [ebx + 4]
// 004826eb  51                   push ecx
// 004826ec  50                   push eax
// 004826ed  e84e600800           call 0x508740
// 004826f2  33d2                 xor edx, edx
// 004826f4  8bf8                 mov edi, eax
// 004826f6  f7760c               div dword ptr [esi + 0xc]
// 004826f9  8b4608               mov eax, dword ptr [esi + 8]
// 004826fc  83c408               add esp, 8
// 004826ff  8b3490               mov esi, dword ptr [eax + edx*4]
// 00482702  85f6                 test esi, esi
// 00482704  742a                 je 0x482730
// 00482706  8b2d94e67700         mov ebp, dword ptr [0x77e694]
// 0048270c  8d642400             lea esp, [esp]
// 00482710  393e                 cmp dword ptr [esi], edi
// 00482712  750e                 jne 0x482722
// 00482714  8d4e04               lea ecx, [esi + 4]
// 00482717  53                   push ebx
// 00482718  51                   push ecx
// 00482719  ffd5                 call ebp
// 0048271b  83c408               add esp, 8
// 0048271e  84c0                 test al, al
// 00482720  7517                 jne 0x482739
// 00482722  8b7668               mov esi, dword ptr [esi + 0x68]
// 00482725  85f6                 test esi, esi
// 00482727  75e7                 jne 0x482710
// 00482729  8da42400000000       lea esp, [esp]
// 00482730  5f                   pop edi
// 00482731  5e                   pop esi
// 00482732  5d                   pop ebp
// 00482733  32c0                 xor al, al
// 00482735  5b                   pop ebx
// 00482736  c20400               ret 4
// 00482739  5f                   pop edi
// 0048273a  5e                   pop esi
// 0048273b  5d                   pop ebp
// 0048273c  b001                 mov al, 1
// 0048273e  5b                   pop ebx
// 0048273f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
