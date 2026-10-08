// roc 2007-03 005e7170  unit: seg_005e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7170
//
// 005e7170  56                   push esi
// 005e7171  8b31                 mov esi, dword ptr [ecx]
// 005e7173  85f6                 test esi, esi
// 005e7175  7410                 je 0x5e7187
// 005e7177  8bce                 mov ecx, esi
// 005e7179  e822890200           call 0x60faa0
// 005e717e  56                   push esi
// 005e717f  e86c6f0300           call 0x61e0f0
// 005e7184  83c404               add esp, 4
// 005e7187  5e                   pop esi
// 005e7188  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
