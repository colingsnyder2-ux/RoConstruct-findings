// roc 2008-06 007f6970  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6970
//
// 007f6970  56                   push esi
// 007f6971  6a05                 push 5
// 007f6973  33c9                 xor ecx, ecx
// 007f6975  51                   push ecx
// 007f6976  b880d25d00           mov eax, 0x5dd280
// 007f697b  50                   push eax
// 007f697c  33f6                 xor esi, esi
// 007f697e  56                   push esi
// 007f697f  bad0ca5d00           mov edx, 0x5dcad0
// 007f6984  52                   push edx
// 007f6985  68ac298300           push 0x8329ac
// 007f698a  681cdb8300           push 0x83db1c
// 007f698f  b968a69700           mov ecx, 0x97a668
// 007f6994  e8a765deff           call 0x5dcf40
// 007f6999  68a0f67f00           push 0x7ff6a0
// 007f699e  e80caeeaff           call 0x6a17af
// 007f69a3  83c404               add esp, 4
// 007f69a6  5e                   pop esi
// 007f69a7  c3                   ret 
// library rbxgs/v8datamodel\Message.cpp (function ??__Edesc_Text@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Message.cpp
