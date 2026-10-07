// roc 2012-06 0041b1d0  unit: VCRbxObject::?$CComObjectNoLock  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b1d0
//
// 0041b1d0  56                   push esi
// 0041b1d1  8bf1                 mov esi, ecx
// 0041b1d3  e8c8e02e00           call 0x7092a0
// 0041b1d8  8906                 mov dword ptr [esi], eax
// 0041b1da  c7460400000000       mov dword ptr [esi + 4], 0
// 0041b1e1  8bc6                 mov eax, esi
// 0041b1e3  5e                   pop esi
// 0041b1e4  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
