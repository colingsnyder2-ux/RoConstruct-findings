// roc 2010-06 0098d354  unit: seg_00980000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098d354
//
// 0098d354  6810325000           push 0x503210
// 0098d359  6a04                 push 4
// 0098d35b  6a10                 push 0x10
// 0098d35d  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0098d360  83c064               add eax, 0x64
// 0098d363  50                   push eax
// 0098d364  e875b7e1ff           call 0x7a8ade
// 0098d369  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
