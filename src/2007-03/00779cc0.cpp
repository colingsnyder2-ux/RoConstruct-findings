// roc 2007-03 00779cc0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779cc0
//
// 00779cc0  c70540c78b0064617800 mov dword ptr [0x8bc740], 0x786164
// 00779cca  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Ftype@?1???$singleton@PBVPropertyDescriptor@Reflection@RBX@@@Type@Reflection@RBX@@SAABV012@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
