// roc 2007-08 00771240  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771240
//
// 00771240  33c9                 xor ecx, ecx
// 00771242  51                   push ecx
// 00771243  6880797800           push 0x787980
// 00771248  68f88e7a00           push 0x7a8ef8
// 0077124d  51                   push ecx
// 0077124e  b870895500           mov eax, 0x558970
// 00771253  50                   push eax
// 00771254  b9a8208c00           mov ecx, 0x8c20a8
// 00771259  e8f2aadeff           call 0x55bd50
// 0077125e  68909c7700           push 0x779c90
// 00771263  e8bbfaebff           call 0x630d23
// 00771268  59                   pop ecx
// 00771269  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EloadFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
