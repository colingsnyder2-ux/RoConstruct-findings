// roc 2007-03 00442870  unit: seg_00440000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442870
//
// 00442870  56                   push esi
// 00442871  8b31                 mov esi, dword ptr [ecx]
// 00442873  85f6                 test esi, esi
// 00442875  7410                 je 0x442887
// 00442877  8bce                 mov ecx, esi
// 00442879  e832ddfcff           call 0x4105b0
// 0044287e  56                   push esi
// 0044287f  e86cb81d00           call 0x61e0f0
// 00442884  83c404               add esp, 4
// 00442887  5e                   pop esi
// 00442888  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
