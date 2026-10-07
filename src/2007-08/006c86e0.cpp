// roc 2007-08 006c86e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c86e0
//
// 006c86e0  56                   push esi
// 006c86e1  8bf1                 mov esi, ecx
// 006c86e3  6880226300           push 0x632280
// 006c86e8  b914938c00           mov ecx, 0x8c9314
// 006c86ed  e878fc0600           call 0x73836a
// 006c86f2  85c0                 test eax, eax
// 006c86f4  7505                 jne 0x6c86fb
// 006c86f6  e92578f6ff           jmp 0x62ff20
// 006c86fb  83780400             cmp dword ptr [eax + 4], 0
// 006c86ff  7f08                 jg 0x6c8709
// 006c8701  8bce                 mov ecx, esi
// 006c8703  5e                   pop esi
// 006c8704  e9c716f7ff           jmp 0x639dd0
// 006c8709  5e                   pop esi
// 006c870a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseHover@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlEdit.cpp
