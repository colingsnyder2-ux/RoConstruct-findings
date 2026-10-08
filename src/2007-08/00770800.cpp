// roc 2007-08 00770800  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770800
//
// 00770800  6a01                 push 1
// 00770802  33c9                 xor ecx, ecx
// 00770804  68e4667a00           push 0x7a66e4
// 00770809  51                   push ecx
// 0077080a  b830155300           mov eax, 0x531530
// 0077080f  50                   push eax
// 00770810  b9a8158c00           mov ecx, 0x8c15a8
// 00770815  e87609ddff           call 0x541190
// 0077081a  6840967700           push 0x779640
// 0077081f  e8ff04ecff           call 0x630d23
// 00770824  59                   pop ecx
// 00770825  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_Remove@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
