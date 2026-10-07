// roc 2012-06 00ab1802  unit: seg_00ab0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ab1802
//
// 00ab1802  6890ca5900           push 0x59ca90
// 00ab1807  6a07                 push 7
// 00ab1809  6a20                 push 0x20
// 00ab180b  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00ab180e  05800f0000           add eax, 0xf80
// 00ab1813  50                   push eax
// 00ab1814  e8571aedff           call 0x983270
// 00ab1819  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function __unwindfunclet$??0ReliabilityLayer@RakNet@@QAE@XZ$19)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
