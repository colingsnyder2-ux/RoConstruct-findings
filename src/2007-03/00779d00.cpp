// roc 2007-03 00779d00  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779d00
//
// 00779d00  c705f0c68b0064617800 mov dword ptr [0x8bc6f0], 0x786164
// 00779d0a  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Ftype@?1???$singleton@PBVPropertyDescriptor@Reflection@RBX@@@Type@Reflection@RBX@@SAABV012@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
