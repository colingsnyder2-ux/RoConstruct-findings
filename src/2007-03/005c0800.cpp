// roc 2007-03 005c0800  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0800
//
// 005c0800  56                   push esi
// 005c0801  8b742408             mov esi, dword ptr [esp + 8]
// 005c0805  85f6                 test esi, esi
// 005c0807  7410                 je 0x5c0819
// 005c0809  8bce                 mov ecx, esi
// 005c080b  e8a0befaff           call 0x56c6b0
// 005c0810  56                   push esi
// 005c0811  e8dad80500           call 0x61e0f0
// 005c0816  83c404               add esp, 4
// 005c0819  5e                   pop esi
// 005c081a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
