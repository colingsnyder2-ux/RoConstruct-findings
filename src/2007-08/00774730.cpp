// roc 2007-08 00774730  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774730
//
// 00774730  6a05                 push 5
// 00774732  68c0925b00           push 0x5b92c0
// 00774737  6830915b00           push 0x5b9130
// 0077473c  68fc897b00           push 0x7b89fc
// 00774741  68748a7b00           push 0x7b8a74
// 00774746  b9e0648c00           mov ecx, 0x8c64e0
// 0077474b  e8503ce4ff           call 0x5b83a0
// 00774750  68a0b97700           push 0x77b9a0
// 00774755  e8c9c5ebff           call 0x630d23
// 0077475a  59                   pop ecx
// 0077475b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
