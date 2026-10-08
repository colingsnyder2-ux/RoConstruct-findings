// roc 2007-08 007748b0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007748b0
//
// 007748b0  6a05                 push 5
// 007748b2  68c0925b00           push 0x5b92c0
// 007748b7  6830915b00           push 0x5b9130
// 007748bc  68fc897b00           push 0x7b89fc
// 007748c1  68ec8a7b00           push 0x7b8aec
// 007748c6  b9c0648c00           mov ecx, 0x8c64c0
// 007748cb  e8603de4ff           call 0x5b8630
// 007748d0  68a0ba7700           push 0x77baa0
// 007748d5  e849c4ebff           call 0x630d23
// 007748da  59                   pop ecx
// 007748db  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
