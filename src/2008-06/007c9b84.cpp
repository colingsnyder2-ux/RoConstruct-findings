// roc 2008-06 007c9b84  unit: seg_007c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c9b84
//
// 007c9b84  68f0dd4c00           push 0x4cddf0
// 007c9b89  6a04                 push 4
// 007c9b8b  6a10                 push 0x10
// 007c9b8d  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 007c9b90  83c064               add eax, 0x64
// 007c9b93  50                   push eax
// 007c9b94  e8c27aedff           call 0x6a165b
// 007c9b99  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
