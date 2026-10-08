// roc 2007-03 0056cac0  unit: seg_00560000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056cac0
//
// 0056cac0  56                   push esi
// 0056cac1  8b742408             mov esi, dword ptr [esp + 8]
// 0056cac5  85f6                 test esi, esi
// 0056cac7  7410                 je 0x56cad9
// 0056cac9  8bce                 mov ecx, esi
// 0056cacb  e860fdffff           call 0x56c830
// 0056cad0  56                   push esi
// 0056cad1  e81a160b00           call 0x61e0f0
// 0056cad6  83c404               add esp, 4
// 0056cad9  5e                   pop esi
// 0056cada  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
