// roc 2007-08 00771210  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771210
//
// 00771210  6a01                 push 1
// 00771212  6880797800           push 0x787980
// 00771217  33c9                 xor ecx, ecx
// 00771219  68ec8e7a00           push 0x7a8eec
// 0077121e  51                   push ecx
// 0077121f  b8b0b35500           mov eax, 0x55b3b0
// 00771224  50                   push eax
// 00771225  b970208c00           mov ecx, 0x8c2070
// 0077122a  e8f1a8deff           call 0x55bb20
// 0077122f  68809c7700           push 0x779c80
// 00771234  e8eafaebff           call 0x630d23
// 00771239  59                   pop ecx
// 0077123a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
