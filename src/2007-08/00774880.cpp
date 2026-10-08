// roc 2007-08 00774880  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774880
//
// 00774880  6a05                 push 5
// 00774882  6870925b00           push 0x5b9270
// 00774887  6820915b00           push 0x5b9120
// 0077488c  68f0837b00           push 0x7b83f0
// 00774891  68dc8a7b00           push 0x7b8adc
// 00774896  b948628c00           mov ecx, 0x8c6248
// 0077489b  e8e03ce4ff           call 0x5b8580
// 007748a0  68c0ba7700           push 0x77bac0
// 007748a5  e879c4ebff           call 0x630d23
// 007748aa  59                   pop ecx
// 007748ab  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
