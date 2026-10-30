// roc 2007-03 006b38f0  unit: seg_006b0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b38f0
//
// 006b38f0  56                   push esi
// 006b38f1  8bf1                 mov esi, ecx
// 006b38f3  68300c6200           push 0x620c30
// 006b38f8  b910238c00           mov ecx, 0x8c2310
// 006b38fd  e8a2710800           call 0x73aaa4
// 006b3902  85c0                 test eax, eax
// 006b3904  7505                 jne 0x6b390b
// 006b3906  e9a3aaf6ff           jmp 0x61e3ae
// 006b390b  83780400             cmp dword ptr [eax + 4], 0
// 006b390f  7f08                 jg 0x6b3919
// 006b3911  8bce                 mov ecx, esi
// 006b3913  5e                   pop esi
// 006b3914  e9f7b9f7ff           jmp 0x62f310
// 006b3919  5e                   pop esi
// 006b391a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseHover@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlEdit.cpp
