// roc 2009-12 0093aec4  unit: seg_00930000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0093aec4
//
// 0093aec4  68e03b5500           push 0x553be0
// 0093aec9  6a04                 push 4
// 0093aecb  6a10                 push 0x10
// 0093aecd  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0093aed0  83c064               add eax, 0x64
// 0093aed3  50                   push eax
// 0093aed4  e8cb9aebff           call 0x7f49a4
// 0093aed9  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@@QAE@XZ$5)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
