// roc 2012-06 00ab1750  unit: seg_00ab0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ab1750
//
// 00ab1750  68a0c45b00           push 0x5bc4a0
// 00ab1755  6a20                 push 0x20
// 00ab1757  6a10                 push 0x10
// 00ab1759  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00ab175c  05a80b0000           add eax, 0xba8
// 00ab1761  50                   push eax
// 00ab1762  e8091bedff           call 0x983270
// 00ab1767  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@RakNet@@QAE@XZ$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
