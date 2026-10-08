// roc 2007-08 00625100  unit: RBX::ArrowButton  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625100
//
// 00625100  56                   push esi
// 00625101  8bf1                 mov esi, ecx
// 00625103  e888fcffff           call 0x624d90
// 00625108  8d4618               lea eax, [esi + 0x18]
// 0062510b  5e                   pop esi
// 0062510c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMoment@Cofm@RBX@@QBEABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
