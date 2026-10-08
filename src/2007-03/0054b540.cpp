// roc 2007-03 0054b540  unit: seg_00540000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b540
//
// 0054b540  56                   push esi
// 0054b541  8b742408             mov esi, dword ptr [esp + 8]
// 0054b545  85f6                 test esi, esi
// 0054b547  7410                 je 0x54b559
// 0054b549  8bce                 mov ecx, esi
// 0054b54b  e860f1ffff           call 0x54a6b0
// 0054b550  56                   push esi
// 0054b551  e89a2b0d00           call 0x61e0f0
// 0054b556  83c404               add esp, 4
// 0054b559  5e                   pop esi
// 0054b55a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
