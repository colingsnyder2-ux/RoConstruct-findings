// roc 2007-03 0054f180  unit: seg_00540000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054f180
//
// 0054f180  56                   push esi
// 0054f181  8b742408             mov esi, dword ptr [esp + 8]
// 0054f185  85f6                 test esi, esi
// 0054f187  7410                 je 0x54f199
// 0054f189  8bce                 mov ecx, esi
// 0054f18b  e860fbffff           call 0x54ecf0
// 0054f190  56                   push esi
// 0054f191  e85aef0c00           call 0x61e0f0
// 0054f196  83c404               add esp, 4
// 0054f199  5e                   pop esi
// 0054f19a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
