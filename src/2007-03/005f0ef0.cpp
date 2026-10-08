// roc 2007-03 005f0ef0  unit: seg_005f0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f0ef0
//
// 005f0ef0  8b442404             mov eax, dword ptr [esp + 4]
// 005f0ef4  8b4808               mov ecx, dword ptr [eax + 8]
// 005f0ef7  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f0efb  750e                 jne 0x5f0f0b
// 005f0efd  8d4900               lea ecx, [ecx]
// 005f0f00  8bc1                 mov eax, ecx
// 005f0f02  8b4808               mov ecx, dword ptr [eax + 8]
// 005f0f05  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f0f09  74f5                 je 0x5f0f00
// 005f0f0b  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
