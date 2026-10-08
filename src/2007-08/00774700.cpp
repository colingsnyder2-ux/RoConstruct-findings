// roc 2007-08 00774700  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774700
//
// 00774700  6a05                 push 5
// 00774702  6870925b00           push 0x5b9270
// 00774707  6820915b00           push 0x5b9120
// 0077470c  68f0837b00           push 0x7b83f0
// 00774711  68688a7b00           push 0x7b8a68
// 00774716  b9d8628c00           mov ecx, 0x8c62d8
// 0077471b  e8e03be4ff           call 0x5b8300
// 00774720  68c0b97700           push 0x77b9c0
// 00774725  e8f9c5ebff           call 0x630d23
// 0077472a  59                   pop ecx
// 0077472b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
