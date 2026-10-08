// roc 2007-03 004aa510  unit: seg_004a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa510
//
// 004aa510  8b442404             mov eax, dword ptr [esp + 4]
// 004aa514  894104               mov dword ptr [ecx + 4], eax
// 004aa517  c20400               ret 4
// library rbxgs/reflection\reflection_function.cpp (function ?_Checked_iterator_assign_from_base@?$_Vector_iterator@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@QAEXPAPAVFunctionDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
