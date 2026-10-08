// roc 2007-03 00556040  unit: seg_00550000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556040
//
// 00556040  56                   push esi
// 00556041  8b742408             mov esi, dword ptr [esp + 8]
// 00556045  85f6                 test esi, esi
// 00556047  7410                 je 0x556059
// 00556049  8bce                 mov ecx, esi
// 0055604b  e8000a1d00           call 0x726a50
// 00556050  56                   push esi
// 00556051  e89a800c00           call 0x61e0f0
// 00556056  83c404               add esp, 4
// 00556059  5e                   pop esi
// 0055605a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
