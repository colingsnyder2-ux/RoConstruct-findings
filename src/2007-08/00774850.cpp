// roc 2007-08 00774850  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774850
//
// 00774850  6a05                 push 5
// 00774852  6850945b00           push 0x5b9450
// 00774857  68f0915b00           push 0x5b91f0
// 0077485c  68fc897b00           push 0x7b89fc
// 00774861  68d08a7b00           push 0x7b8ad0
// 00774866  b9c0618c00           mov ecx, 0x8c61c0
// 0077486b  e88032e4ff           call 0x5b7af0
// 00774870  68e0b97700           push 0x77b9e0
// 00774875  e8a9c4ebff           call 0x630d23
// 0077487a  59                   pop ecx
// 0077487b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
