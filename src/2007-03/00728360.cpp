// roc 2007-03 00728360  unit: seg_00720000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728360
//
// 00728360  56                   push esi
// 00728361  8b742408             mov esi, dword ptr [esp + 8]
// 00728365  85f6                 test esi, esi
// 00728367  7410                 je 0x728379
// 00728369  8bce                 mov ecx, esi
// 0072836b  e800ffffff           call 0x728270
// 00728370  56                   push esi
// 00728371  e87a5defff           call 0x61e0f0
// 00728376  83c404               add esp, 4
// 00728379  5e                   pop esi
// 0072837a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
