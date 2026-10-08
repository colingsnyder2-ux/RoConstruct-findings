// roc 2007-03 004eeb90  unit: seg_004e0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eeb90
//
// 004eeb90  83791000             cmp dword ptr [ecx + 0x10], 0
// 004eeb94  7e19                 jle 0x4eebaf
// 004eeb96  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004eeb99  d90500617800         fld dword ptr [0x786100]
// 004eeb9f  d85824               fcomp dword ptr [eax + 0x24]
// 004eeba2  dfe0                 fnstsw ax
// 004eeba4  f6c405               test ah, 5
// 004eeba7  7a06                 jp 0x4eebaf
// 004eeba9  b801000000           mov eax, 1
// 004eebae  c3                   ret 
// 004eebaf  33c0                 xor eax, eax
// 004eebb1  c3                   ret 
// library rbxgs-render/Material.cpp (function ?veryTransparent@Material@Render@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
