// roc 2007-08 00774640  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774640
//
// 00774640  6a05                 push 5
// 00774642  6870925b00           push 0x5b9270
// 00774647  6820915b00           push 0x5b9120
// 0077464c  68f0837b00           push 0x7b83f0
// 00774651  68248a7b00           push 0x7b8a24
// 00774656  b968628c00           mov ecx, 0x8c6268
// 0077465b  e8503be4ff           call 0x5b81b0
// 00774660  6840b97700           push 0x77b940
// 00774665  e8b9c6ebff           call 0x630d23
// 0077466a  59                   pop ecx
// 0077466b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
