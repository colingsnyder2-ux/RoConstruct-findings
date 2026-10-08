// roc 2007-08 0076f0a0  unit: seg_00760000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f0a0
//
// 0076f0a0  33c9                 xor ecx, ecx
// 0076f0a2  51                   push ecx
// 0076f0a3  68dcb67900           push 0x79b6dc
// 0076f0a8  68c8bd7900           push 0x79bdc8
// 0076f0ad  681c0f7900           push 0x790f1c
// 0076f0b2  51                   push ecx
// 0076f0b3  b820764900           mov eax, 0x497620
// 0076f0b8  50                   push eax
// 0076f0b9  b978e18b00           mov ecx, 0x8be178
// 0076f0be  e82d70d2ff           call 0x4960f0
// 0076f0c3  68a0857700           push 0x7785a0
// 0076f0c8  e8561cecff           call 0x630d23
// 0076f0cd  59                   pop ecx
// 0076f0ce  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EfuncReportAbuse@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
