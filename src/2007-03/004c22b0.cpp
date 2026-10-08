// roc 2007-03 004c22b0  unit: seg_004c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c22b0
//
// 004c22b0  56                   push esi
// 004c22b1  8b31                 mov esi, dword ptr [ecx]
// 004c22b3  85f6                 test esi, esi
// 004c22b5  7410                 je 0x4c22c7
// 004c22b7  8bce                 mov ecx, esi
// 004c22b9  e862a80200           call 0x4ecb20
// 004c22be  56                   push esi
// 004c22bf  e82cbe1500           call 0x61e0f0
// 004c22c4  83c404               add esp, 4
// 004c22c7  5e                   pop esi
// 004c22c8  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
