// roc 2009-12 004d34c0  unit: G3D::TextureManager::TextureArgs  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d34c0
//
// 004d34c0  53                   push ebx
// 004d34c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d34c5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004d34c9  55                   push ebp
// 004d34ca  56                   push esi
// 004d34cb  8bf1                 mov esi, ecx
// 004d34cd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004d34d0  57                   push edi
// 004d34d1  7205                 jb 0x4d34d8
// 004d34d3  8b4304               mov eax, dword ptr [ebx + 4]
// 004d34d6  eb03                 jmp 0x4d34db
// 004d34d8  8d4304               lea eax, [ebx + 4]
// 004d34db  51                   push ecx
// 004d34dc  50                   push eax
// 004d34dd  e8ce731200           call 0x5fa8b0
// 004d34e2  33d2                 xor edx, edx
// 004d34e4  8bf8                 mov edi, eax
// 004d34e6  f7760c               div dword ptr [esi + 0xc]
// 004d34e9  8b4608               mov eax, dword ptr [esi + 8]
// 004d34ec  83c408               add esp, 8
// 004d34ef  8b3490               mov esi, dword ptr [eax + edx*4]
// 004d34f2  85f6                 test esi, esi
// 004d34f4  742a                 je 0x4d3520
// 004d34f6  8b2d7cb69800         mov ebp, dword ptr [0x98b67c]
// 004d34fc  8d642400             lea esp, [esp]
// 004d3500  393e                 cmp dword ptr [esi], edi
// 004d3502  750e                 jne 0x4d3512
// 004d3504  8d4e04               lea ecx, [esi + 4]
// 004d3507  53                   push ebx
// 004d3508  51                   push ecx
// 004d3509  ffd5                 call ebp
// 004d350b  83c408               add esp, 8
// 004d350e  84c0                 test al, al
// 004d3510  7517                 jne 0x4d3529
// 004d3512  8b7624               mov esi, dword ptr [esi + 0x24]
// 004d3515  85f6                 test esi, esi
// 004d3517  75e7                 jne 0x4d3500
// 004d3519  8da42400000000       lea esp, [esp]
// 004d3520  5f                   pop edi
// 004d3521  5e                   pop esi
// 004d3522  5d                   pop ebp
// 004d3523  32c0                 xor al, al
// 004d3525  5b                   pop ebx
// 004d3526  c20400               ret 4
// 004d3529  5f                   pop edi
// 004d352a  5e                   pop esi
// 004d352b  5d                   pop ebp
// 004d352c  b001                 mov al, 1
// 004d352e  5b                   pop ebx
// 004d352f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
