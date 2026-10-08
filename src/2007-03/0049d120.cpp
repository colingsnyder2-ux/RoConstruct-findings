// roc 2007-03 0049d120  unit: seg_00490000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d120
//
// 0049d120  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0049d123  85c9                 test ecx, ecx
// 0049d125  7408                 je 0x49d12f
// 0049d127  8b01                 mov eax, dword ptr [ecx]
// 0049d129  8b10                 mov edx, dword ptr [eax]
// 0049d12b  6a01                 push 1
// 0049d12d  ffd2                 call edx
// 0049d12f  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1Item@SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
