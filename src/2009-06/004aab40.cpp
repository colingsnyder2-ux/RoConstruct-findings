// roc 2009-06 004aab40  unit: G3D::H_N::?$Table  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aab40
//
// 004aab40  33c0                 xor eax, eax
// 004aab42  39442408             cmp dword ptr [esp + 8], eax
// 004aab46  894104               mov dword ptr [ecx + 4], eax
// 004aab49  894108               mov dword ptr [ecx + 8], eax
// 004aab4c  8901                 mov dword ptr [ecx], eax
// 004aab4e  7e0d                 jle 0x4aab5d
// 004aab50  c744240801000000     mov dword ptr [esp + 8], 1
// 004aab58  e963f5ffff           jmp 0x4aa0c0
// 004aab5d  8901                 mov dword ptr [ecx], eax
// 004aab5f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?init@?$Array@PBX@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
