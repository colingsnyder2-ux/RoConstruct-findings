// roc 2007-08 007748e0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007748e0
//
// 007748e0  6a05                 push 5
// 007748e2  6880935b00           push 0x5b9380
// 007748e7  6890915b00           push 0x5b9190
// 007748ec  68fc897b00           push 0x7b89fc
// 007748f1  68008b7b00           push 0x7b8b00
// 007748f6  b9bc628c00           mov ecx, 0x8c62bc
// 007748fb  e8a032e4ff           call 0x5b7ba0
// 00774900  6880ba7700           push 0x77ba80
// 00774905  e819c4ebff           call 0x630d23
// 0077490a  59                   pop ecx
// 0077490b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
