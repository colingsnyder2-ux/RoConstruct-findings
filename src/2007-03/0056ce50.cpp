// roc 2007-03 0056ce50  unit: seg_00560000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056ce50
//
// 0056ce50  56                   push esi
// 0056ce51  8bf1                 mov esi, ecx
// 0056ce53  e888ffffff           call 0x56cde0
// 0056ce58  8906                 mov dword ptr [esi], eax
// 0056ce5a  c7460400000000       mov dword ptr [esi + 4], 0
// 0056ce61  8bc6                 mov eax, esi
// 0056ce63  5e                   pop esi
// 0056ce64  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
