// roc 2007-08 00772660  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772660
//
// 00772660  56                   push esi
// 00772661  6a05                 push 5
// 00772663  33c9                 xor ecx, ecx
// 00772665  51                   push ecx
// 00772666  b850a65700           mov eax, 0x57a650
// 0077266b  50                   push eax
// 0077266c  33f6                 xor esi, esi
// 0077266e  56                   push esi
// 0077266f  baa0034d00           mov edx, 0x4d03a0
// 00772674  52                   push edx
// 00772675  6898b67900           push 0x79b698
// 0077267a  6830b57a00           push 0x7ab530
// 0077267f  b9542e8c00           mov ecx, 0x8c2e54
// 00772684  e8077ae0ff           call 0x57a090
// 00772689  6820a47700           push 0x77a420
// 0077268e  e890e6ebff           call 0x630d23
// 00772693  83c404               add esp, 4
// 00772696  5e                   pop esi
// 00772697  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
