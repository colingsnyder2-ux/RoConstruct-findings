// roc 2007-08 007749d0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007749d0
//
// 007749d0  6a05                 push 5
// 007749d2  6850945b00           push 0x5b9450
// 007749d7  68f0915b00           push 0x5b91f0
// 007749dc  68fc897b00           push 0x7b89fc
// 007749e1  68448b7b00           push 0x7b8b44
// 007749e6  b938648c00           mov ecx, 0x8c6438
// 007749eb  e86032e4ff           call 0x5b7c50
// 007749f0  68e0ba7700           push 0x77bae0
// 007749f5  e829c3ebff           call 0x630d23
// 007749fa  59                   pop ecx
// 007749fb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
