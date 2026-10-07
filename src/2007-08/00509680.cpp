// roc 2007-08 00509680  unit: G3D::GCamera  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509680
//
// 00509680  8b442404             mov eax, dword ptr [esp + 4]
// 00509684  53                   push ebx
// 00509685  56                   push esi
// 00509686  57                   push edi
// 00509687  8bd9                 mov ebx, ecx
// 00509689  33ff                 xor edi, edi
// 0050968b  2bd8                 sub ebx, eax
// 0050968d  8bf0                 mov esi, eax
// 0050968f  90                   nop 
// 00509690  33c9                 xor ecx, ecx
// 00509692  8bd6                 mov edx, esi
// 00509694  d90413               fld dword ptr [ebx + edx]
// 00509697  d902                 fld dword ptr [edx]
// 00509699  dae9                 fucompp 
// 0050969b  dfe0                 fnstsw ax
// 0050969d  f6c444               test ah, 0x44
// 005096a0  7a1e                 jp 0x5096c0
// 005096a2  83c101               add ecx, 1
// 005096a5  83c204               add edx, 4
// 005096a8  83f903               cmp ecx, 3
// 005096ab  7ce7                 jl 0x509694
// 005096ad  83c701               add edi, 1
// 005096b0  83c60c               add esi, 0xc
// 005096b3  83ff03               cmp edi, 3
// 005096b6  7cd8                 jl 0x509690
// 005096b8  5f                   pop edi
// 005096b9  5e                   pop esi
// 005096ba  b001                 mov al, 1
// 005096bc  5b                   pop ebx
// 005096bd  c20400               ret 4
// 005096c0  5f                   pop edi
// 005096c1  5e                   pop esi
// 005096c2  32c0                 xor al, al
// 005096c4  5b                   pop ebx
// 005096c5  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??8Matrix3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
