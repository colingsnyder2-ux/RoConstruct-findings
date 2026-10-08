// roc 2007-03 00773da0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773da0
//
// 00773da0  56                   push esi
// 00773da1  6a05                 push 5
// 00773da3  33c9                 xor ecx, ecx
// 00773da5  51                   push ecx
// 00773da6  b8e00a4600           mov eax, 0x460ae0
// 00773dab  50                   push eax
// 00773dac  33f6                 xor esi, esi
// 00773dae  56                   push esi
// 00773daf  bad0135900           mov edx, 0x5913d0
// 00773db4  52                   push edx
// 00773db5  6814bf7a00           push 0x7abf14
// 00773dba  68e81f7b00           push 0x7b1fe8
// 00773dbf  b9ece88b00           mov ecx, 0x8be8ec
// 00773dc4  e8873ee2ff           call 0x597c50
// 00773dc9  6850a97700           push 0x77a950
// 00773dce  e8e0b3eaff           call 0x61f1b3
// 00773dd3  83c404               add esp, 4
// 00773dd6  5e                   pop esi
// 00773dd7  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_ClearColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
