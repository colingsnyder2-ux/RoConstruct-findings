// roc 2007-03 0040b0c0  unit: seg_00400000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040b0c0
//
// 0040b0c0  56                   push esi
// 0040b0c1  8b742408             mov esi, dword ptr [esp + 8]
// 0040b0c5  85f6                 test esi, esi
// 0040b0c7  7410                 je 0x40b0d9
// 0040b0c9  8bce                 mov ecx, esi
// 0040b0cb  e870fbffff           call 0x40ac40
// 0040b0d0  56                   push esi
// 0040b0d1  e81a302100           call 0x61e0f0
// 0040b0d6  83c404               add esp, 4
// 0040b0d9  5e                   pop esi
// 0040b0da  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
