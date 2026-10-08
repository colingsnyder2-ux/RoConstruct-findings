// roc 2007-08 00774580  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774580
//
// 00774580  6a05                 push 5
// 00774582  6870925b00           push 0x5b9270
// 00774587  6820915b00           push 0x5b9120
// 0077458c  68f0837b00           push 0x7b83f0
// 00774591  68e0897b00           push 0x7b89e0
// 00774596  b9c0638c00           mov ecx, 0x8c63c0
// 0077459b  e8a039e4ff           call 0x5b7f40
// 007745a0  68c0b87700           push 0x77b8c0
// 007745a5  e879c7ebff           call 0x630d23
// 007745aa  59                   pop ecx
// 007745ab  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
