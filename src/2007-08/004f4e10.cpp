// roc 2007-08 004f4e10  unit: boost::bad_lexical_cast  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4e10
//
// 004f4e10  56                   push esi
// 004f4e11  57                   push edi
// 004f4e12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f4e16  8b4704               mov eax, dword ptr [edi + 4]
// 004f4e19  85c0                 test eax, eax
// 004f4e1b  8bf1                 mov esi, ecx
// 004f4e1d  c7460400000000       mov dword ptr [esi + 4], 0
// 004f4e24  c7460800000000       mov dword ptr [esi + 8], 0
// 004f4e2b  c70600000000         mov dword ptr [esi], 0
// 004f4e31  7e0a                 jle 0x4f4e3d
// 004f4e33  6a01                 push 1
// 004f4e35  50                   push eax
// 004f4e36  e8657cf8ff           call 0x47caa0
// 004f4e3b  eb06                 jmp 0x4f4e43
// 004f4e3d  c70600000000         mov dword ptr [esi], 0
// 004f4e43  33c0                 xor eax, eax
// 004f4e45  394604               cmp dword ptr [esi + 4], eax
// 004f4e48  7e18                 jle 0x4f4e62
// 004f4e4a  8d9b00000000         lea ebx, [ebx]
// 004f4e50  8b0f                 mov ecx, dword ptr [edi]
// 004f4e52  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004f4e55  8b16                 mov edx, dword ptr [esi]
// 004f4e57  890c82               mov dword ptr [edx + eax*4], ecx
// 004f4e5a  83c001               add eax, 1
// 004f4e5d  3b4604               cmp eax, dword ptr [esi + 4]
// 004f4e60  7cee                 jl 0x4f4e50
// 004f4e62  5f                   pop edi
// 004f4e63  5e                   pop esi
// 004f4e64  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
