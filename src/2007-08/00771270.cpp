// roc 2007-08 00771270  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771270
//
// 00771270  33c9                 xor ecx, ecx
// 00771272  51                   push ecx
// 00771273  6880797800           push 0x787980
// 00771278  68008f7a00           push 0x7a8f00
// 0077127d  51                   push ecx
// 0077127e  b860ae5500           mov eax, 0x55ae60
// 00771283  50                   push eax
// 00771284  b9d8218c00           mov ecx, 0x8c21d8
// 00771289  e8c2aadeff           call 0x55bd50
// 0077128e  68809b7700           push 0x779b80
// 00771293  e88bfaebff           call 0x630d23
// 00771298  59                   pop ecx
// 00771299  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EsaveFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
