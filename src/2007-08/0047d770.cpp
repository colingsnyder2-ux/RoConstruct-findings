// from server: 100% by auto
// roc 2007-08 0047d770  unit: G3D::H_N::?$Table  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d770
//
// 0047d770  56                   push esi
// 0047d771  57                   push edi
// 0047d772  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047d776  8b4704               mov eax, dword ptr [edi + 4]
// 0047d779  85c0                 test eax, eax
// 0047d77b  8bf1                 mov esi, ecx
// 0047d77d  c7460400000000       mov dword ptr [esi + 4], 0
// 0047d784  c7460800000000       mov dword ptr [esi + 8], 0
// 0047d78b  c70600000000         mov dword ptr [esi], 0
// 0047d791  7e0a                 jle 0x47d79d
// 0047d793  6a01                 push 1
// 0047d795  50                   push eax
// 0047d796  e825f8ffff           call 0x47cfc0
// 0047d79b  eb06                 jmp 0x47d7a3
// 0047d79d  c70600000000         mov dword ptr [esi], 0
// 0047d7a3  33c0                 xor eax, eax
// 0047d7a5  394604               cmp dword ptr [esi + 4], eax
// 0047d7a8  7e18                 jle 0x47d7c2
// 0047d7aa  8d9b00000000         lea ebx, [ebx]
// 0047d7b0  8b0f                 mov ecx, dword ptr [edi]
// 0047d7b2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0047d7b5  8b16                 mov edx, dword ptr [esi]
// 0047d7b7  890c82               mov dword ptr [edx + eax*4], ecx
// 0047d7ba  83c001               add eax, 1
// 0047d7bd  3b4604               cmp eax, dword ptr [esi + 4]
// 0047d7c0  7cee                 jl 0x47d7b0
// 0047d7c2  5f                   pop edi
// 0047d7c3  5e                   pop esi
// 0047d7c4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
