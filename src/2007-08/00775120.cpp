// roc 2007-08 00775120  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775120
//
// 00775120  56                   push esi
// 00775121  6a05                 push 5
// 00775123  33c9                 xor ecx, ecx
// 00775125  51                   push ecx
// 00775126  b8d0915e00           mov eax, 0x5e91d0
// 0077512b  50                   push eax
// 0077512c  33f6                 xor esi, esi
// 0077512e  56                   push esi
// 0077512f  ba90795e00           mov edx, 0x5e7990
// 00775134  52                   push edx
// 00775135  6898b67900           push 0x79b698
// 0077513a  6840dc7b00           push 0x7bdc40
// 0077513f  b9546f8c00           mov ecx, 0x8c6f54
// 00775144  e8f735e7ff           call 0x5e8740
// 00775149  6870bf7700           push 0x77bf70
// 0077514e  e8d0bbebff           call 0x630d23
// 00775153  83c404               add esp, 4
// 00775156  5e                   pop esi
// 00775157  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__EpropBlastRadius@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
