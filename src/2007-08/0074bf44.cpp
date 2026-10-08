// roc 2007-08 0074bf44  unit: seg_00740000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074bf44
//
// 0074bf44  68a04c4c00           push 0x4c4ca0
// 0074bf49  6a04                 push 4
// 0074bf4b  6a10                 push 0x10
// 0074bf4d  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0074bf50  83c064               add eax, 0x64
// 0074bf53  50                   push eax
// 0074bf54  e89e4beeff           call 0x630af7
// 0074bf59  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
