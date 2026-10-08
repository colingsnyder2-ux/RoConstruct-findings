// roc 2007-08 0074be04  unit: seg_00740000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074be04
//
// 0074be04  68a04c4c00           push 0x4c4ca0
// 0074be09  6a04                 push 4
// 0074be0b  6a10                 push 0x10
// 0074be0d  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0074be10  83c064               add eax, 0x64
// 0074be13  50                   push eax
// 0074be14  e8de4ceeff           call 0x630af7
// 0074be19  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
