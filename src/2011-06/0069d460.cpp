// roc 2011-06 0069d460  unit: RBX::VObjectValue::?$EventDesc  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069d460
//
// 0069d460  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069d463  85c9                 test ecx, ecx
// 0069d465  7408                 je 0x69d46f
// 0069d467  8b01                 mov eax, dword ptr [ecx]
// 0069d469  8b10                 mov edx, dword ptr [eax]
// 0069d46b  6a01                 push 1
// 0069d46d  ffd2                 call edx
// 0069d46f  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
