// roc 2012-06 009a2520  unit: CXTPCommandBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2520
//
// 009a2520  56                   push esi
// 009a2521  8bf1                 mov esi, ecx
// 009a2523  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 009a2529  e8aa700f00           call 0xa995d8
// 009a252e  a900004000           test eax, 0x400000
// 009a2533  b801000000           mov eax, 1
// 009a2538  7506                 jne 0x9a2540
// 009a253a  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 009a2540  5e                   pop esi
// 009a2541  c3                   ret 
// library xtp-13.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsLayoutRTL@CXTPCommandBars@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPCommandBars.cpp
