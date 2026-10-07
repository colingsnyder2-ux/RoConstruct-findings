// roc 2008-06 00480c20  unit: G3D::H_N::?$Table  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480c20
//
// 00480c20  33c0                 xor eax, eax
// 00480c22  39442408             cmp dword ptr [esp + 8], eax
// 00480c26  894104               mov dword ptr [ecx + 4], eax
// 00480c29  894108               mov dword ptr [ecx + 8], eax
// 00480c2c  8901                 mov dword ptr [ecx], eax
// 00480c2e  7e0d                 jle 0x480c3d
// 00480c30  c744240801000000     mov dword ptr [esp + 8], 1
// 00480c38  e9e3f3ffff           jmp 0x480020
// 00480c3d  8901                 mov dword ptr [ecx], eax
// 00480c3f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?init@?$Array@PBX@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
