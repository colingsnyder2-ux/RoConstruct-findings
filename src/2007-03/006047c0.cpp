// roc 2007-03 006047c0  unit: seg_00600000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006047c0
//
// 006047c0  56                   push esi
// 006047c1  8b31                 mov esi, dword ptr [ecx]
// 006047c3  85f6                 test esi, esi
// 006047c5  7410                 je 0x6047d7
// 006047c7  8bce                 mov ecx, esi
// 006047c9  e8221c0100           call 0x6163f0
// 006047ce  56                   push esi
// 006047cf  e81c990100           call 0x61e0f0
// 006047d4  83c404               add esp, 4
// 006047d7  5e                   pop esi
// 006047d8  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
