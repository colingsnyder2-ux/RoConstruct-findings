// roc 2012-06 00a15a10  unit: CXTPControlEdit  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a15a10
//
// 00a15a10  56                   push esi
// 00a15a11  8bf1                 mov esi, ecx
// 00a15a13  68704e9800           push 0x984e70
// 00a15a18  b958a0e500           mov ecx, 0xe5a058
// 00a15a1d  e85c3b0800           call 0xa9957e
// 00a15a22  85c0                 test eax, eax
// 00a15a24  7505                 jne 0xa15a2b
// 00a15a26  e895c9f6ff           call 0x9823c0
// 00a15a2b  83780400             cmp dword ptr [eax + 4], 0
// 00a15a2f  7f08                 jg 0xa15a39
// 00a15a31  8bce                 mov ecx, esi
// 00a15a33  5e                   pop esi
// 00a15a34  e967edf6ff           jmp 0x9847a0
// 00a15a39  5e                   pop esi
// 00a15a3a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseHover@CXTPControlEdit@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
