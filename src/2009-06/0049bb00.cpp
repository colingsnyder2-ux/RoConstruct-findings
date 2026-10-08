// from server: 100% by auto
// roc 2009-06 0049bb00  unit: G3D::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049bb00
//
// 0049bb00  56                   push esi
// 0049bb01  57                   push edi
// 0049bb02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049bb06  8b4704               mov eax, dword ptr [edi + 4]
// 0049bb09  8bf1                 mov esi, ecx
// 0049bb0b  c7460400000000       mov dword ptr [esi + 4], 0
// 0049bb12  c7460800000000       mov dword ptr [esi + 8], 0
// 0049bb19  c70600000000         mov dword ptr [esi], 0
// 0049bb1f  85c0                 test eax, eax
// 0049bb21  7e0a                 jle 0x49bb2d
// 0049bb23  6a01                 push 1
// 0049bb25  50                   push eax
// 0049bb26  e8c5f8ffff           call 0x49b3f0
// 0049bb2b  eb06                 jmp 0x49bb33
// 0049bb2d  c70600000000         mov dword ptr [esi], 0
// 0049bb33  33c0                 xor eax, eax
// 0049bb35  394604               cmp dword ptr [esi + 4], eax
// 0049bb38  7e16                 jle 0x49bb50
// 0049bb3a  8d9b00000000         lea ebx, [ebx]
// 0049bb40  8b0f                 mov ecx, dword ptr [edi]
// 0049bb42  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0049bb45  8b16                 mov edx, dword ptr [esi]
// 0049bb47  890c82               mov dword ptr [edx + eax*4], ecx
// 0049bb4a  40                   inc eax
// 0049bb4b  3b4604               cmp eax, dword ptr [esi + 4]
// 0049bb4e  7cf0                 jl 0x49bb40
// 0049bb50  5f                   pop edi
// 0049bb51  5e                   pop esi
// 0049bb52  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
