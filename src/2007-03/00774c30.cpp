// roc 2007-03 00774c30  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774c30
//
// 00774c30  6a05                 push 5
// 00774c32  68d0405b00           push 0x5b40d0
// 00774c37  68403f5b00           push 0x5b3f40
// 00774c3c  68cc897b00           push 0x7b89cc
// 00774c41  68048a7b00           push 0x7b8a04
// 00774c46  b9ccfa8b00           mov ecx, 0x8bfacc
// 00774c4b  e840e2e3ff           call 0x5b2e90
// 00774c50  6820b27700           push 0x77b220
// 00774c55  e859a5eaff           call 0x61f1b3
// 00774c5a  59                   pop ecx
// 00774c5b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
