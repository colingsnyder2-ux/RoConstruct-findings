// roc 2007-08 00774760  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774760
//
// 00774760  6a05                 push 5
// 00774762  6880935b00           push 0x5b9380
// 00774767  6890915b00           push 0x5b9190
// 0077476c  68fc897b00           push 0x7b89fc
// 00774771  68888a7b00           push 0x7b8a88
// 00774776  b918638c00           mov ecx, 0x8c6318
// 0077477b  e8c032e4ff           call 0x5b7a40
// 00774780  6880b97700           push 0x77b980
// 00774785  e899c5ebff           call 0x630d23
// 0077478a  59                   pop ecx
// 0077478b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
