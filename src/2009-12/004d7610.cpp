// roc 2009-12 004d7610  unit: G3D::H_N::?$Table  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7610
//
// 004d7610  33c0                 xor eax, eax
// 004d7612  39442408             cmp dword ptr [esp + 8], eax
// 004d7616  894104               mov dword ptr [ecx + 4], eax
// 004d7619  894108               mov dword ptr [ecx + 8], eax
// 004d761c  8901                 mov dword ptr [ecx], eax
// 004d761e  7e0d                 jle 0x4d762d
// 004d7620  c744240801000000     mov dword ptr [esp + 8], 1
// 004d7628  e9b3f5ffff           jmp 0x4d6be0
// 004d762d  8901                 mov dword ptr [ecx], eax
// 004d762f  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?init@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
