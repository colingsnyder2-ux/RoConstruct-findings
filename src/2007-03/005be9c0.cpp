// roc 2007-03 005be9c0  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be9c0
//
// 005be9c0  56                   push esi
// 005be9c1  8b742408             mov esi, dword ptr [esp + 8]
// 005be9c5  85f6                 test esi, esi
// 005be9c7  7410                 je 0x5be9d9
// 005be9c9  8bce                 mov ecx, esi
// 005be9cb  e890a01600           call 0x728a60
// 005be9d0  56                   push esi
// 005be9d1  e81af70500           call 0x61e0f0
// 005be9d6  83c404               add esp, 4
// 005be9d9  5e                   pop esi
// 005be9da  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
