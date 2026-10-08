// from server: 100% by auto
// roc 2007-08 004ff4e0  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff4e0
//
// 004ff4e0  53                   push ebx
// 004ff4e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004ff4e5  57                   push edi
// 004ff4e6  33ff                 xor edi, edi
// 004ff4e8  393b                 cmp dword ptr [ebx], edi
// 004ff4ea  7e35                 jle 0x4ff521
// 004ff4ec  55                   push ebp
// 004ff4ed  8b2dc4e67700         mov ebp, dword ptr [0x77e6c4]
// 004ff4f3  56                   push esi
// 004ff4f4  8b742414             mov esi, dword ptr [esp + 0x14]
// 004ff4f8  8b06                 mov eax, dword ptr [esi]
// 004ff4fa  50                   push eax
// 004ff4fb  ffd5                 call ebp
// 004ff4fd  83c701               add edi, 1
// 004ff500  83c404               add esp, 4
// 004ff503  c70600000000         mov dword ptr [esi], 0
// 004ff509  c7460400000000       mov dword ptr [esi + 4], 0
// 004ff510  3b3b                 cmp edi, dword ptr [ebx]
// 004ff512  7ce4                 jl 0x4ff4f8
// 004ff514  5e                   pop esi
// 004ff515  5d                   pop ebp
// 004ff516  5f                   pop edi
// 004ff517  c70300000000         mov dword ptr [ebx], 0
// 004ff51d  5b                   pop ebx
// 004ff51e  c20800               ret 8
// 004ff521  893b                 mov dword ptr [ebx], edi
// 004ff523  5f                   pop edi
// 004ff524  5b                   pop ebx
// 004ff525  c20800               ret 8
// library g3d-6.09/G3Dcpp\System.cpp (function ?flushPool@BufferPool@G3D@@AAEXPAVMemBlock@12@AAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
