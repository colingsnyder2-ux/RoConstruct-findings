// roc 2007-08 007741c0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007741c0
//
// 007741c0  56                   push esi
// 007741c1  6a05                 push 5
// 007741c3  33c9                 xor ecx, ecx
// 007741c5  51                   push ecx
// 007741c6  b810fe5a00           mov eax, 0x5afe10
// 007741cb  50                   push eax
// 007741cc  33f6                 xor esi, esi
// 007741ce  56                   push esi
// 007741cf  ba00fe5a00           mov edx, 0x5afe00
// 007741d4  52                   push edx
// 007741d5  6898b67900           push 0x79b698
// 007741da  68e07d7b00           push 0x7b7de0
// 007741df  b9745e8c00           mov ecx, 0x8c5e74
// 007741e4  e827cbe3ff           call 0x5b0d10
// 007741e9  68f0b67700           push 0x77b6f0
// 007741ee  e830cbebff           call 0x630d23
// 007741f3  83c404               add esp, 4
// 007741f6  5e                   pop esi
// 007741f7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_MaxVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
