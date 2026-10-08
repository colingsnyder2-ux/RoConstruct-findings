// roc 2007-03 005cd0e0  unit: seg_005c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cd0e0
//
// 005cd0e0  56                   push esi
// 005cd0e1  8b31                 mov esi, dword ptr [ecx]
// 005cd0e3  85f6                 test esi, esi
// 005cd0e5  7410                 je 0x5cd0f7
// 005cd0e7  8bce                 mov ecx, esi
// 005cd0e9  e862c80000           call 0x5d9950
// 005cd0ee  56                   push esi
// 005cd0ef  e8fc0f0500           call 0x61e0f0
// 005cd0f4  83c404               add esp, 4
// 005cd0f7  5e                   pop esi
// 005cd0f8  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
