// roc 2007-03 00778560  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778560
//
// 00778560  c70534868b0064617800 mov dword ptr [0x8b8634], 0x786164
// 0077856a  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Ftype@?1???$singleton@PBVPropertyDescriptor@Reflection@RBX@@@Type@Reflection@RBX@@SAABV012@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
