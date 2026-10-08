// roc 2007-08 00591b80  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591b80
//
// 00591b80  d9ee                 fldz 
// 00591b82  dc11                 fcom qword ptr [ecx]
// 00591b84  dfe0                 fnstsw ax
// 00591b86  f6c405               test ah, 5
// 00591b89  7a07                 jp 0x591b92
// 00591b8b  ddd8                 fstp st(0)
// 00591b8d  db4118               fild dword ptr [ecx + 0x18]
// 00591b90  dc31                 fdiv qword ptr [ecx]
// 00591b92  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?getActualFPS@Bucket@Profiling@RBX@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
