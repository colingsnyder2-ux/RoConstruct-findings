// roc 2008-06 0040a310  unit: VAuthoringSettings::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a310
//
// 0040a310  8b4904               mov ecx, dword ptr [ecx + 4]
// 0040a313  85c9                 test ecx, ecx
// 0040a315  7408                 je 0x40a31f
// 0040a317  8b01                 mov eax, dword ptr [ecx]
// 0040a319  8b10                 mov edx, dword ptr [eax]
// 0040a31b  6a01                 push 1
// 0040a31d  ffd2                 call edx
// 0040a31f  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
