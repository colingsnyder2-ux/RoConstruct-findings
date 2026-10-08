// roc 2007-03 0056cf40  unit: seg_00560000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056cf40
//
// 0056cf40  56                   push esi
// 0056cf41  57                   push edi
// 0056cf42  8bf1                 mov esi, ecx
// 0056cf44  e897feffff           call 0x56cde0
// 0056cf49  8d7e04               lea edi, [esi + 4]
// 0056cf4c  8bcf                 mov ecx, edi
// 0056cf4e  8906                 mov dword ptr [esi], eax
// 0056cf50  e81bffffff           call 0x56ce70
// 0056cf55  894704               mov dword ptr [edi + 4], eax
// 0056cf58  c7470800000000       mov dword ptr [edi + 8], 0
// 0056cf5f  5f                   pop edi
// 0056cf60  8bc6                 mov eax, esi
// 0056cf62  5e                   pop esi
// 0056cf63  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
