// from server: 100% by auto
// roc 2008-06 0047b4e0  unit: CInstanceRecord::CNameItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047b4e0
//
// 0047b4e0  33c0                 xor eax, eax
// 0047b4e2  39442408             cmp dword ptr [esp + 8], eax
// 0047b4e6  894104               mov dword ptr [ecx + 4], eax
// 0047b4e9  894108               mov dword ptr [ecx + 8], eax
// 0047b4ec  8901                 mov dword ptr [ecx], eax
// 0047b4ee  7e0d                 jle 0x47b4fd
// 0047b4f0  c744240801000000     mov dword ptr [esp + 8], 1
// 0047b4f8  e9d3d6ffff           jmp 0x478bd0
// 0047b4fd  8901                 mov dword ptr [ecx], eax
// 0047b4ff  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?init@?$Array@PBX@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
