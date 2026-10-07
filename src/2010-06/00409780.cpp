// roc 2010-06 00409780  unit: VAuthoringSettings::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409780
//
// 00409780  8b4904               mov ecx, dword ptr [ecx + 4]
// 00409783  85c9                 test ecx, ecx
// 00409785  7408                 je 0x40978f
// 00409787  8b01                 mov eax, dword ptr [ecx]
// 00409789  8b10                 mov edx, dword ptr [eax]
// 0040978b  6a01                 push 1
// 0040978d  ffd2                 call edx
// 0040978f  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
