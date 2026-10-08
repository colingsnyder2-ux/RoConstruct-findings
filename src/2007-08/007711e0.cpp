// roc 2007-08 007711e0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007711e0
//
// 007711e0  6a01                 push 1
// 007711e2  6880797800           push 0x787980
// 007711e7  33c9                 xor ecx, ecx
// 007711e9  68e88e7a00           push 0x7a8ee8
// 007711ee  51                   push ecx
// 007711ef  b8b0b35500           mov eax, 0x55b3b0
// 007711f4  50                   push eax
// 007711f5  b9a0218c00           mov ecx, 0x8c21a0
// 007711fa  e821a9deff           call 0x55bb20
// 007711ff  68e09c7700           push 0x779ce0
// 00771204  e81afbebff           call 0x630d23
// 00771209  59                   pop ecx
// 0077120a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
