// roc 2007-03 00773ea0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773ea0
//
// 00773ea0  56                   push esi
// 00773ea1  6a05                 push 5
// 00773ea3  33c9                 xor ecx, ecx
// 00773ea5  51                   push ecx
// 00773ea6  b840e85900           mov eax, 0x59e840
// 00773eab  50                   push eax
// 00773eac  33f6                 xor esi, esi
// 00773eae  56                   push esi
// 00773eaf  baa0cb5900           mov edx, 0x59cba0
// 00773eb4  52                   push edx
// 00773eb5  6870a77900           push 0x79a770
// 00773eba  68eccb7a00           push 0x7acbec
// 00773ebf  b908eb8b00           mov ecx, 0x8beb08
// 00773ec4  e857a2e2ff           call 0x59e120
// 00773ec9  6830aa7700           push 0x77aa30
// 00773ece  e8e0b2eaff           call 0x61f1b3
// 00773ed3  83c404               add esp, 4
// 00773ed6  5e                   pop esi
// 00773ed7  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
