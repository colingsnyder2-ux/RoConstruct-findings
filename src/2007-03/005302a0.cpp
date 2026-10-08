// roc 2007-03 005302a0  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005302a0
//
// 005302a0  56                   push esi
// 005302a1  8b31                 mov esi, dword ptr [ecx]
// 005302a3  85f6                 test esi, esi
// 005302a5  7410                 je 0x5302b7
// 005302a7  8bce                 mov ecx, esi
// 005302a9  e8b2691f00           call 0x726c60
// 005302ae  56                   push esi
// 005302af  e83cde0e00           call 0x61e0f0
// 005302b4  83c404               add esp, 4
// 005302b7  5e                   pop esi
// 005302b8  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
