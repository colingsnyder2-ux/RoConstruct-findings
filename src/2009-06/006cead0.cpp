// roc 2009-06 006cead0  unit: RBX::RevoluteLink  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cead0
//
// 006cead0  56                   push esi
// 006cead1  8bf1                 mov esi, ecx
// 006cead3  8d4e08               lea ecx, [esi + 8]
// 006cead6  c7460400000000       mov dword ptr [esi + 4], 0
// 006ceadd  e8ce0dddff           call 0x49f8b0
// 006ceae2  8d4e38               lea ecx, [esi + 0x38]
// 006ceae5  e8c60dddff           call 0x49f8b0
// 006ceaea  8d4e68               lea ecx, [esi + 0x68]
// 006ceaed  e8be0dddff           call 0x49f8b0
// 006ceaf2  8d8e98000000         lea ecx, [esi + 0x98]
// 006ceaf8  e8b30dddff           call 0x49f8b0
// 006ceafd  e80e570000           call 0x6d4210
// 006ceb02  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 006ceb08  8bc6                 mov eax, esi
// 006ceb0a  5e                   pop esi
// 006ceb0b  c3                   ret 
// library rbxgs/v8kernel\Link.cpp (function ??0Link@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Link.cpp
