// roc 2009-12 005f39d0  unit: seg_005f0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f39d0
//
// 005f39d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f39d4  53                   push ebx
// 005f39d5  56                   push esi
// 005f39d6  57                   push edi
// 005f39d7  8bd9                 mov ebx, ecx
// 005f39d9  33ff                 xor edi, edi
// 005f39db  2bd8                 sub ebx, eax
// 005f39dd  8bf0                 mov esi, eax
// 005f39df  90                   nop 
// 005f39e0  33d2                 xor edx, edx
// 005f39e2  8bce                 mov ecx, esi
// 005f39e4  f30f10040b           movss xmm0, dword ptr [ebx + ecx]
// 005f39e9  0f2e01               ucomiss xmm0, dword ptr [ecx]
// 005f39ec  9f                   lahf 
// 005f39ed  f6c444               test ah, 0x44
// 005f39f0  7a1a                 jp 0x5f3a0c
// 005f39f2  42                   inc edx
// 005f39f3  83c104               add ecx, 4
// 005f39f6  83fa03               cmp edx, 3
// 005f39f9  7ce9                 jl 0x5f39e4
// 005f39fb  47                   inc edi
// 005f39fc  83c60c               add esi, 0xc
// 005f39ff  83ff03               cmp edi, 3
// 005f3a02  7cdc                 jl 0x5f39e0
// 005f3a04  5f                   pop edi
// 005f3a05  5e                   pop esi
// 005f3a06  b001                 mov al, 1
// 005f3a08  5b                   pop ebx
// 005f3a09  c20400               ret 4
// 005f3a0c  5f                   pop edi
// 005f3a0d  5e                   pop esi
// 005f3a0e  32c0                 xor al, al
// 005f3a10  5b                   pop ebx
// 005f3a11  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??8Matrix3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
