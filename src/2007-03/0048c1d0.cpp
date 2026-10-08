// roc 2007-03 0048c1d0  unit: seg_00480000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c1d0
//
// 0048c1d0  56                   push esi
// 0048c1d1  8b31                 mov esi, dword ptr [ecx]
// 0048c1d3  85f6                 test esi, esi
// 0048c1d5  7410                 je 0x48c1e7
// 0048c1d7  8bce                 mov ecx, esi
// 0048c1d9  e8d2c40b00           call 0x5486b0
// 0048c1de  56                   push esi
// 0048c1df  e80c1f1900           call 0x61e0f0
// 0048c1e4  83c404               add esp, 4
// 0048c1e7  5e                   pop esi
// 0048c1e8  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
