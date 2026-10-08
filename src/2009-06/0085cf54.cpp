// roc 2009-06 0085cf54  unit: seg_00850000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cf54
//
// 0085cf54  68a05c4f00           push 0x4f5ca0
// 0085cf59  6a04                 push 4
// 0085cf5b  6a10                 push 0x10
// 0085cf5d  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0085cf60  83c064               add eax, 0x64
// 0085cf63  50                   push eax
// 0085cf64  e80dccebff           call 0x719b76
// 0085cf69  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
