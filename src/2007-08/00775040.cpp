// roc 2007-08 00775040  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775040
//
// 00775040  56                   push esi
// 00775041  6a05                 push 5
// 00775043  33c9                 xor ecx, ecx
// 00775045  51                   push ecx
// 00775046  b860d15d00           mov eax, 0x5dd160
// 0077504b  50                   push eax
// 0077504c  33f6                 xor esi, esi
// 0077504e  56                   push esi
// 0077504f  ba80d34300           mov edx, 0x43d380
// 00775054  52                   push edx
// 00775055  6898b67900           push 0x79b698
// 0077505a  68b8c47b00           push 0x7bc4b8
// 0077505f  b9086d8c00           mov ecx, 0x8c6d08
// 00775064  e89771e6ff           call 0x5dc200
// 00775069  6820be7700           push 0x77be20
// 0077506e  e8b0bcebff           call 0x630d23
// 00775073  83c404               add esp, 4
// 00775076  5e                   pop esi
// 00775077  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_LeftRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
