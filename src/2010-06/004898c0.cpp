// from server: 100% by auto
// roc 2010-06 004898c0  unit: G3D::H_N::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004898c0
//
// 004898c0  56                   push esi
// 004898c1  57                   push edi
// 004898c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004898c6  8b4704               mov eax, dword ptr [edi + 4]
// 004898c9  8bf1                 mov esi, ecx
// 004898cb  c7460400000000       mov dword ptr [esi + 4], 0
// 004898d2  c7460800000000       mov dword ptr [esi + 8], 0
// 004898d9  c70600000000         mov dword ptr [esi], 0
// 004898df  85c0                 test eax, eax
// 004898e1  7e0a                 jle 0x4898ed
// 004898e3  6a01                 push 1
// 004898e5  50                   push eax
// 004898e6  e8b5f8ffff           call 0x4891a0
// 004898eb  eb06                 jmp 0x4898f3
// 004898ed  c70600000000         mov dword ptr [esi], 0
// 004898f3  33c0                 xor eax, eax
// 004898f5  394604               cmp dword ptr [esi + 4], eax
// 004898f8  7e16                 jle 0x489910
// 004898fa  8d9b00000000         lea ebx, [ebx]
// 00489900  8b0f                 mov ecx, dword ptr [edi]
// 00489902  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00489905  8b16                 mov edx, dword ptr [esi]
// 00489907  890c82               mov dword ptr [edx + eax*4], ecx
// 0048990a  40                   inc eax
// 0048990b  3b4604               cmp eax, dword ptr [esi + 4]
// 0048990e  7cf0                 jl 0x489900
// 00489910  5f                   pop edi
// 00489911  5e                   pop esi
// 00489912  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
