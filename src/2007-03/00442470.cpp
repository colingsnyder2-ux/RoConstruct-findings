// roc 2007-03 00442470  unit: seg_00440000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442470
//
// 00442470  8b01                 mov eax, dword ptr [ecx]
// 00442472  50                   push eax
// 00442473  e878bc1d00           call 0x61e0f0
// 00442478  59                   pop ecx
// 00442479  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
