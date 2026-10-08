// roc 2007-03 0054b520  unit: seg_00540000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b520
//
// 0054b520  56                   push esi
// 0054b521  8b742408             mov esi, dword ptr [esp + 8]
// 0054b525  85f6                 test esi, esi
// 0054b527  7410                 je 0x54b539
// 0054b529  8bce                 mov ecx, esi
// 0054b52b  e820f1ffff           call 0x54a650
// 0054b530  56                   push esi
// 0054b531  e8ba2b0d00           call 0x61e0f0
// 0054b536  83c404               add esp, 4
// 0054b539  5e                   pop esi
// 0054b53a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
