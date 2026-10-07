// roc 2008-06 00507a00  unit: G3D::Shader  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507a00
//
// 00507a00  53                   push ebx
// 00507a01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00507a05  57                   push edi
// 00507a06  33ff                 xor edi, edi
// 00507a08  393b                 cmp dword ptr [ebx], edi
// 00507a0a  7e33                 jle 0x507a3f
// 00507a0c  55                   push ebp
// 00507a0d  8b2dc0288000         mov ebp, dword ptr [0x8028c0]
// 00507a13  56                   push esi
// 00507a14  8b742414             mov esi, dword ptr [esp + 0x14]
// 00507a18  8b06                 mov eax, dword ptr [esi]
// 00507a1a  50                   push eax
// 00507a1b  ffd5                 call ebp
// 00507a1d  47                   inc edi
// 00507a1e  83c404               add esp, 4
// 00507a21  c70600000000         mov dword ptr [esi], 0
// 00507a27  c7460400000000       mov dword ptr [esi + 4], 0
// 00507a2e  3b3b                 cmp edi, dword ptr [ebx]
// 00507a30  7ce6                 jl 0x507a18
// 00507a32  5e                   pop esi
// 00507a33  5d                   pop ebp
// 00507a34  5f                   pop edi
// 00507a35  c70300000000         mov dword ptr [ebx], 0
// 00507a3b  5b                   pop ebx
// 00507a3c  c20800               ret 8
// 00507a3f  893b                 mov dword ptr [ebx], edi
// 00507a41  5f                   pop edi
// 00507a42  5b                   pop ebx
// 00507a43  c20800               ret 8
// library g3d-6.09/G3Dcpp\System.cpp (function ?flushPool@BufferPool@G3D@@AAEXPAVMemBlock@12@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
