// roc 2007-03 00480310  unit: seg_00480000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480310
//
// 00480310  8b01                 mov eax, dword ptr [ecx]
// 00480312  50                   push eax
// 00480313  e89ce01900           call 0x61e3b4
// 00480318  59                   pop ecx
// 00480319  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
