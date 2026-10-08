// roc 2007-08 00774fc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774fc0
//
// 00774fc0  56                   push esi
// 00774fc1  6a05                 push 5
// 00774fc3  33c9                 xor ecx, ecx
// 00774fc5  51                   push ecx
// 00774fc6  b800d15d00           mov eax, 0x5dd100
// 00774fcb  50                   push eax
// 00774fcc  33f6                 xor esi, esi
// 00774fce  56                   push esi
// 00774fcf  bae0634a00           mov edx, 0x4a63e0
// 00774fd4  52                   push edx
// 00774fd5  6898b67900           push 0x79b698
// 00774fda  6874ce7b00           push 0x7bce74
// 00774fdf  b9a46d8c00           mov ecx, 0x8c6da4
// 00774fe4  e8a785e6ff           call 0x5dd590
// 00774fe9  6860be7700           push 0x77be60
// 00774fee  e830bdebff           call 0x630d23
// 00774ff3  83c404               add esp, 4
// 00774ff6  5e                   pop esi
// 00774ff7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_FaceId@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
