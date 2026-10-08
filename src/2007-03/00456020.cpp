// roc 2007-03 00456020  unit: seg_00450000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00456020
//
// 00456020  56                   push esi
// 00456021  8b31                 mov esi, dword ptr [ecx]
// 00456023  85f6                 test esi, esi
// 00456025  7410                 je 0x456037
// 00456027  8bce                 mov ecx, esi
// 00456029  e892290200           call 0x4789c0
// 0045602e  56                   push esi
// 0045602f  e8bc801c00           call 0x61e0f0
// 00456034  83c404               add esp, 4
// 00456037  5e                   pop esi
// 00456038  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??1?$scoped_ptr@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
