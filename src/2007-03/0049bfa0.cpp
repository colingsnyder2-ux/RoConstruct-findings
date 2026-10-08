// roc 2007-03 0049bfa0  unit: seg_00490000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bfa0
//
// 0049bfa0  8b442404             mov eax, dword ptr [esp + 4]
// 0049bfa4  8b08                 mov ecx, dword ptr [eax]
// 0049bfa6  80791900             cmp byte ptr [ecx + 0x19], 0
// 0049bfaa  750e                 jne 0x49bfba
// 0049bfac  8d642400             lea esp, [esp]
// 0049bfb0  8bc1                 mov eax, ecx
// 0049bfb2  8b08                 mov ecx, dword ptr [eax]
// 0049bfb4  80791900             cmp byte ptr [ecx + 0x19], 0
// 0049bfb8  74f6                 je 0x49bfb0
// 0049bfba  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
