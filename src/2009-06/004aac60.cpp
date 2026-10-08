// from server: 100% by auto
// roc 2009-06 004aac60  unit: G3D::H_N::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aac60
//
// 004aac60  56                   push esi
// 004aac61  57                   push edi
// 004aac62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004aac66  8b4704               mov eax, dword ptr [edi + 4]
// 004aac69  8bf1                 mov esi, ecx
// 004aac6b  c7460400000000       mov dword ptr [esi + 4], 0
// 004aac72  c7460800000000       mov dword ptr [esi + 8], 0
// 004aac79  c70600000000         mov dword ptr [esi], 0
// 004aac7f  85c0                 test eax, eax
// 004aac81  7e0a                 jle 0x4aac8d
// 004aac83  6a01                 push 1
// 004aac85  50                   push eax
// 004aac86  e845f8ffff           call 0x4aa4d0
// 004aac8b  eb06                 jmp 0x4aac93
// 004aac8d  c70600000000         mov dword ptr [esi], 0
// 004aac93  33c0                 xor eax, eax
// 004aac95  394604               cmp dword ptr [esi + 4], eax
// 004aac98  7e16                 jle 0x4aacb0
// 004aac9a  8d9b00000000         lea ebx, [ebx]
// 004aaca0  8b0f                 mov ecx, dword ptr [edi]
// 004aaca2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004aaca5  8b16                 mov edx, dword ptr [esi]
// 004aaca7  890c82               mov dword ptr [edx + eax*4], ecx
// 004aacaa  40                   inc eax
// 004aacab  3b4604               cmp eax, dword ptr [esi + 4]
// 004aacae  7cf0                 jl 0x4aaca0
// 004aacb0  5f                   pop edi
// 004aacb1  5e                   pop esi
// 004aacb2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
