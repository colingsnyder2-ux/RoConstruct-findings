// roc 2008-06 00613d20  unit: RBX::RevoluteLink  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613d20
//
// 00613d20  56                   push esi
// 00613d21  8bf1                 mov esi, ecx
// 00613d23  8d4e08               lea ecx, [esi + 8]
// 00613d26  c7460400000000       mov dword ptr [esi + 4], 0
// 00613d2d  e89e45e6ff           call 0x4782d0
// 00613d32  8d4e38               lea ecx, [esi + 0x38]
// 00613d35  e89645e6ff           call 0x4782d0
// 00613d3a  8d4e68               lea ecx, [esi + 0x68]
// 00613d3d  e88e45e6ff           call 0x4782d0
// 00613d42  8d8e98000000         lea ecx, [esi + 0x98]
// 00613d48  e88345e6ff           call 0x4782d0
// 00613d4d  e8ce010000           call 0x613f20
// 00613d52  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00613d58  8bc6                 mov eax, esi
// 00613d5a  5e                   pop esi
// 00613d5b  c3                   ret 
// library rbxgs/v8kernel\Link.cpp (function ??0Link@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Link.cpp
