// roc 2007-03 0053c3c0  unit: seg_00530000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053c3c0
//
// 0053c3c0  8b01                 mov eax, dword ptr [ecx]
// 0053c3c2  50                   push eax
// 0053c3c3  e898ffffff           call 0x53c360
// 0053c3c8  59                   pop ecx
// 0053c3c9  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
