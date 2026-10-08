// roc 2007-03 00492390  unit: seg_00490000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00492390
//
// 00492390  56                   push esi
// 00492391  8b742408             mov esi, dword ptr [esp + 8]
// 00492395  85f6                 test esi, esi
// 00492397  7410                 je 0x4923a9
// 00492399  8bce                 mov ecx, esi
// 0049239b  e8c0fdffff           call 0x492160
// 004923a0  56                   push esi
// 004923a1  e84abd1800           call 0x61e0f0
// 004923a6  83c404               add esp, 4
// 004923a9  5e                   pop esi
// 004923aa  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
