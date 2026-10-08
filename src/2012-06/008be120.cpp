// roc 2012-06 008be120  unit: RBX::AsyncHttpQueue  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008be120
//
// 008be120  56                   push esi
// 008be121  8bf1                 mov esi, ecx
// 008be123  8d4e08               lea ecx, [esi + 8]
// 008be126  c7460400000000       mov dword ptr [esi + 4], 0
// 008be12d  e81ef8d6ff           call 0x62d950
// 008be132  8d4e38               lea ecx, [esi + 0x38]
// 008be135  e816f8d6ff           call 0x62d950
// 008be13a  8d4e68               lea ecx, [esi + 0x68]
// 008be13d  e80ef8d6ff           call 0x62d950
// 008be142  8d8e98000000         lea ecx, [esi + 0x98]
// 008be148  e803f8d6ff           call 0x62d950
// 008be14d  e8feab0400           call 0x908d50
// 008be152  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008be158  8bc6                 mov eax, esi
// 008be15a  5e                   pop esi
// 008be15b  c3                   ret 
// library rbxgs/v8kernel\Link.cpp (function ??0Link@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Link.cpp
