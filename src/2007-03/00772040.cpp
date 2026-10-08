// roc 2007-03 00772040  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772040
//
// 00772040  56                   push esi
// 00772041  6a05                 push 5
// 00772043  33c9                 xor ecx, ecx
// 00772045  51                   push ecx
// 00772046  b8300b5500           mov eax, 0x550b30
// 0077204b  50                   push eax
// 0077204c  33f6                 xor esi, esi
// 0077204e  56                   push esi
// 0077204f  ba70045500           mov edx, 0x550470
// 00772054  52                   push edx
// 00772055  6870a77900           push 0x79a770
// 0077205a  685c827a00           push 0x7a825c
// 0077205f  b970bf8b00           mov ecx, 0x8bbf70
// 00772064  e857e9ddff           call 0x5509c0
// 00772069  6890997700           push 0x779990
// 0077206e  e840d1eaff           call 0x61f1b3
// 00772073  83c404               add esp, 4
// 00772076  5e                   pop esi
// 00772077  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_AutoAssignable@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
