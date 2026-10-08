// roc 2007-03 00775760  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775760
//
// 00775760  56                   push esi
// 00775761  6a05                 push 5
// 00775763  33c9                 xor ecx, ecx
// 00775765  51                   push ecx
// 00775766  b800e55d00           mov eax, 0x5de500
// 0077576b  50                   push eax
// 0077576c  33f6                 xor esi, esi
// 0077576e  56                   push esi
// 0077576f  ba30dc5d00           mov edx, 0x5ddc30
// 00775774  52                   push edx
// 00775775  6814bf7a00           push 0x7abf14
// 0077577a  687cdd7b00           push 0x7bdd7c
// 0077577f  b954078c00           mov ecx, 0x8c0754
// 00775784  e8f78ae6ff           call 0x5de280
// 00775789  6810b97700           push 0x77b910
// 0077578e  e8209aeaff           call 0x61f1b3
// 00775793  83c404               add esp, 4
// 00775796  5e                   pop esi
// 00775797  c3                   ret 
// library rbxgs/v8datamodel\Message.cpp (function ??__Edesc_Text@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Message.cpp
