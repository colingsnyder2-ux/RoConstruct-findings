// roc 2007-08 00413780  unit: std::runtime_error  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413780
//
// 00413780  8b4904               mov ecx, dword ptr [ecx + 4]
// 00413783  85c9                 test ecx, ecx
// 00413785  7408                 je 0x41378f
// 00413787  8b01                 mov eax, dword ptr [ecx]
// 00413789  8b10                 mov edx, dword ptr [eax]
// 0041378b  6a01                 push 1
// 0041378d  ffd2                 call edx
// 0041378f  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
