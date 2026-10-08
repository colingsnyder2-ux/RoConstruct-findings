// from server: 100% by auto
// roc 2008-06 00480d40  unit: G3D::H_N::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480d40
//
// 00480d40  56                   push esi
// 00480d41  57                   push edi
// 00480d42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00480d46  8b4704               mov eax, dword ptr [edi + 4]
// 00480d49  8bf1                 mov esi, ecx
// 00480d4b  c7460400000000       mov dword ptr [esi + 4], 0
// 00480d52  c7460800000000       mov dword ptr [esi + 8], 0
// 00480d59  c70600000000         mov dword ptr [esi], 0
// 00480d5f  85c0                 test eax, eax
// 00480d61  7e0a                 jle 0x480d6d
// 00480d63  6a01                 push 1
// 00480d65  50                   push eax
// 00480d66  e845f8ffff           call 0x4805b0
// 00480d6b  eb06                 jmp 0x480d73
// 00480d6d  c70600000000         mov dword ptr [esi], 0
// 00480d73  33c0                 xor eax, eax
// 00480d75  394604               cmp dword ptr [esi + 4], eax
// 00480d78  7e16                 jle 0x480d90
// 00480d7a  8d9b00000000         lea ebx, [ebx]
// 00480d80  8b0f                 mov ecx, dword ptr [edi]
// 00480d82  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00480d85  8b16                 mov edx, dword ptr [esi]
// 00480d87  890c82               mov dword ptr [edx + eax*4], ecx
// 00480d8a  40                   inc eax
// 00480d8b  3b4604               cmp eax, dword ptr [esi + 4]
// 00480d8e  7cf0                 jl 0x480d80
// 00480d90  5f                   pop edi
// 00480d91  5e                   pop esi
// 00480d92  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
