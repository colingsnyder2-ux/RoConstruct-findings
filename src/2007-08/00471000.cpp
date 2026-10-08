// from server: 100% by auto
// roc 2007-08 00471000  unit: G3D::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00471000
//
// 00471000  56                   push esi
// 00471001  57                   push edi
// 00471002  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00471006  8b4704               mov eax, dword ptr [edi + 4]
// 00471009  85c0                 test eax, eax
// 0047100b  8bf1                 mov esi, ecx
// 0047100d  c7460400000000       mov dword ptr [esi + 4], 0
// 00471014  c7460800000000       mov dword ptr [esi + 8], 0
// 0047101b  c70600000000         mov dword ptr [esi], 0
// 00471021  7e0a                 jle 0x47102d
// 00471023  6a01                 push 1
// 00471025  50                   push eax
// 00471026  e8e5f8ffff           call 0x470910
// 0047102b  eb06                 jmp 0x471033
// 0047102d  c70600000000         mov dword ptr [esi], 0
// 00471033  33c0                 xor eax, eax
// 00471035  394604               cmp dword ptr [esi + 4], eax
// 00471038  7e18                 jle 0x471052
// 0047103a  8d9b00000000         lea ebx, [ebx]
// 00471040  8b0f                 mov ecx, dword ptr [edi]
// 00471042  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00471045  8b16                 mov edx, dword ptr [esi]
// 00471047  890c82               mov dword ptr [edx + eax*4], ecx
// 0047104a  83c001               add eax, 1
// 0047104d  3b4604               cmp eax, dword ptr [esi + 4]
// 00471050  7cee                 jl 0x471040
// 00471052  5f                   pop edi
// 00471053  5e                   pop esi
// 00471054  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
