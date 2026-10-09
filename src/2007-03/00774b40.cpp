// roc 2007-03 00774b40  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774b40
//
// 00774b40  6a05                 push 5
// 00774b42  6880405b00           push 0x5b4080
// 00774b47  68303f5b00           push 0x5b3f30
// 00774b4c  68c0837b00           push 0x7b83c0
// 00774b51  68b0897b00           push 0x7b89b0
// 00774b56  b908fb8b00           mov ecx, 0x8bfb08
// 00774b5b  e8d0e0e3ff           call 0x5b2c30
// 00774b60  68c0b17700           push 0x77b1c0
// 00774b65  e849a6eaff           call 0x61f1b3
// 00774b6a  59                   pop ecx
// 00774b6b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
