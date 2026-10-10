// from server: 97% by tester
// roc 2007-08 00770760  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770760
//
// 00770760  6a05                 push 5
// 00770762  68e4000000           push 0xe8
// 00770767  6848647a00           push 0x7aa840
// 0077076c  68b4667a00           push 0x7b8378
// 00770771  b940158c00           mov ecx, 0x8c5ff4
// 00770776  e8f5ffdcff           call 0x5b6050
// 0077077b  68b0957700           push 0x77b7c0
// 00770780  e89e05ecff           call 0x630d23
// 00770785  59                   pop ecx
// 00770786  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?propArchivable@Instance@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp