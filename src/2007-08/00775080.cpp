// roc 2007-08 00775080  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775080
//
// 00775080  56                   push esi
// 00775081  6a05                 push 5
// 00775083  33c9                 xor ecx, ecx
// 00775085  51                   push ecx
// 00775086  b890d15d00           mov eax, 0x5dd190
// 0077508b  50                   push eax
// 0077508c  33f6                 xor esi, esi
// 0077508e  56                   push esi
// 0077508f  bab09d5d00           mov edx, 0x5d9db0
// 00775094  52                   push edx
// 00775095  6898b67900           push 0x79b698
// 0077509a  68d4c47b00           push 0x7bc4d4
// 0077509f  b9846d8c00           mov ecx, 0x8c6d84
// 007750a4  e8c772e6ff           call 0x5dc370
// 007750a9  6800be7700           push 0x77be00
// 007750ae  e870bcebff           call 0x630d23
// 007750b3  83c404               add esp, 4
// 007750b6  5e                   pop esi
// 007750b7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_InOut@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
