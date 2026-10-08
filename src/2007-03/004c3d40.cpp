// roc 2007-03 004c3d40  unit: seg_004c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3d40
//
// 004c3d40  56                   push esi
// 004c3d41  8b31                 mov esi, dword ptr [ecx]
// 004c3d43  85f6                 test esi, esi
// 004c3d45  7410                 je 0x4c3d57
// 004c3d47  8bce                 mov ecx, esi
// 004c3d49  e892feffff           call 0x4c3be0
// 004c3d4e  56                   push esi
// 004c3d4f  e89ca31500           call 0x61e0f0
// 004c3d54  83c404               add esp, 4
// 004c3d57  5e                   pop esi
// 004c3d58  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
