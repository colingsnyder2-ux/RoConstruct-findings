// roc 2007-08 00775880  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775880
//
// 00775880  56                   push esi
// 00775881  6a05                 push 5
// 00775883  33c9                 xor ecx, ecx
// 00775885  51                   push ecx
// 00775886  b8d0015f00           mov eax, 0x5f01d0
// 0077588b  50                   push eax
// 0077588c  33f6                 xor esi, esi
// 0077588e  56                   push esi
// 0077588f  ba90f95e00           mov edx, 0x5ef990
// 00775894  52                   push edx
// 00775895  6840a87a00           push 0x7aa840
// 0077589a  68d8007c00           push 0x7c00d8
// 0077589f  b98c778c00           mov ecx, 0x8c778c
// 007758a4  e837a6e7ff           call 0x5efee0
// 007758a9  68c0c37700           push 0x77c3c0
// 007758ae  e870b4ebff           call 0x630d23
// 007758b3  83c404               add esp, 4
// 007758b6  5e                   pop esi
// 007758b7  c3                   ret 
// library rbxgs/v8datamodel\Message.cpp (function ??__Edesc_Text@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Message.cpp
