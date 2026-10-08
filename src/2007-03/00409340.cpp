// roc 2007-03 00409340  unit: seg_00400000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409340
//
// 00409340  56                   push esi
// 00409341  8b742408             mov esi, dword ptr [esp + 8]
// 00409345  85f6                 test esi, esi
// 00409347  7410                 je 0x409359
// 00409349  8bce                 mov ecx, esi
// 0040934b  e850f2ffff           call 0x4085a0
// 00409350  56                   push esi
// 00409351  e89a4d2100           call 0x61e0f0
// 00409356  83c404               add esp, 4
// 00409359  5e                   pop esi
// 0040935a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
