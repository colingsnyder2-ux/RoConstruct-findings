// roc 2009-12 005f6a60  unit: G3D::BinaryInput  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6a60
//
// 005f6a60  8b442404             mov eax, dword ptr [esp + 4]
// 005f6a64  53                   push ebx
// 005f6a65  56                   push esi
// 005f6a66  57                   push edi
// 005f6a67  8bd9                 mov ebx, ecx
// 005f6a69  33ff                 xor edi, edi
// 005f6a6b  2bd8                 sub ebx, eax
// 005f6a6d  8bf0                 mov esi, eax
// 005f6a6f  90                   nop 
// 005f6a70  33d2                 xor edx, edx
// 005f6a72  8bce                 mov ecx, esi
// 005f6a74  f30f10040b           movss xmm0, dword ptr [ebx + ecx]
// 005f6a79  0f2e01               ucomiss xmm0, dword ptr [ecx]
// 005f6a7c  9f                   lahf 
// 005f6a7d  f6c444               test ah, 0x44
// 005f6a80  7a1a                 jp 0x5f6a9c
// 005f6a82  42                   inc edx
// 005f6a83  83c104               add ecx, 4
// 005f6a86  83fa04               cmp edx, 4
// 005f6a89  7ce9                 jl 0x5f6a74
// 005f6a8b  47                   inc edi
// 005f6a8c  83c610               add esi, 0x10
// 005f6a8f  83ff04               cmp edi, 4
// 005f6a92  7cdc                 jl 0x5f6a70
// 005f6a94  5f                   pop edi
// 005f6a95  5e                   pop esi
// 005f6a96  b001                 mov al, 1
// 005f6a98  5b                   pop ebx
// 005f6a99  c20400               ret 4
// 005f6a9c  5f                   pop edi
// 005f6a9d  5e                   pop esi
// 005f6a9e  32c0                 xor al, al
// 005f6aa0  5b                   pop ebx
// 005f6aa1  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??8Matrix4@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
