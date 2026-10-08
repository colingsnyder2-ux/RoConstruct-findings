// roc 2007-03 0042c450  unit: seg_00420000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042c450
//
// 0042c450  56                   push esi
// 0042c451  8b742408             mov esi, dword ptr [esp + 8]
// 0042c455  85f6                 test esi, esi
// 0042c457  7410                 je 0x42c469
// 0042c459  8bce                 mov ecx, esi
// 0042c45b  e840f5ffff           call 0x42b9a0
// 0042c460  56                   push esi
// 0042c461  e88a1c1f00           call 0x61e0f0
// 0042c466  83c404               add esp, 4
// 0042c469  5e                   pop esi
// 0042c46a  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ??$checked_delete@V?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@boost@@YAXPAV?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
