// roc 2008-06 007438f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007438f0
//
// 007438f0  56                   push esi
// 007438f1  8bf1                 mov esi, ecx
// 007438f3  6810306a00           push 0x6a3010
// 007438f8  b99ced9700           mov ecx, 0x97ed9c
// 007438fd  e8d8860700           call 0x7bbfda
// 00743902  85c0                 test eax, eax
// 00743904  7505                 jne 0x74390b
// 00743906  e839d0f5ff           call 0x6a0944
// 0074390b  83780400             cmp dword ptr [eax + 4], 0
// 0074390f  7f08                 jg 0x743919
// 00743911  8bce                 mov ecx, esi
// 00743913  5e                   pop esi
// 00743914  e9c776f6ff           jmp 0x6aafe0
// 00743919  5e                   pop esi
// 0074391a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseHover@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
