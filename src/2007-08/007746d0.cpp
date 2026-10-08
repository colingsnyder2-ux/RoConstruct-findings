// roc 2007-08 007746d0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007746d0
//
// 007746d0  6a05                 push 5
// 007746d2  6850945b00           push 0x5b9450
// 007746d7  68f0915b00           push 0x5b91f0
// 007746dc  68fc897b00           push 0x7b89fc
// 007746e1  68588a7b00           push 0x7b8a58
// 007746e6  b98c648c00           mov ecx, 0x8c648c
// 007746eb  e8a032e4ff           call 0x5b7990
// 007746f0  68e0b87700           push 0x77b8e0
// 007746f5  e829c6ebff           call 0x630d23
// 007746fa  59                   pop ecx
// 007746fb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
