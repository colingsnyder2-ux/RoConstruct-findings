// roc 2009-06 004097d0  unit: VAuthoringSettings::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004097d0
//
// 004097d0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004097d3  85c9                 test ecx, ecx
// 004097d5  7408                 je 0x4097df
// 004097d7  8b01                 mov eax, dword ptr [ecx]
// 004097d9  8b10                 mov edx, dword ptr [eax]
// 004097db  6a01                 push 1
// 004097dd  ffd2                 call edx
// 004097df  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
