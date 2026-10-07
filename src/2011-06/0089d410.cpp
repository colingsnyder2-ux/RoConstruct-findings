// roc 2011-06 0089d410  unit: CXTPControlEdit  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089d410
//
// 0089d410  56                   push esi
// 0089d411  8bf1                 mov esi, ecx
// 0089d413  68b0cb8000           push 0x80cbb0
// 0089d418  b9e88ed100           mov ecx, 0xd18ee8
// 0089d41d  e8a2f11200           call 0x9cc5c4
// 0089d422  85c0                 test eax, eax
// 0089d424  7505                 jne 0x89d42b
// 0089d426  e8dfcef6ff           call 0x80a30a
// 0089d42b  83780400             cmp dword ptr [eax + 4], 0
// 0089d42f  7f08                 jg 0x89d439
// 0089d431  8bce                 mov ecx, esi
// 0089d433  5e                   pop esi
// 0089d434  e9d7f0f6ff           jmp 0x80c510
// 0089d439  5e                   pop esi
// 0089d43a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseHover@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
