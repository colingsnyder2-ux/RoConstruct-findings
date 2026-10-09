// roc 2007-03 00774cf0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774cf0
//
// 00774cf0  6a05                 push 5
// 00774cf2  68d0405b00           push 0x5b40d0
// 00774cf7  68403f5b00           push 0x5b3f40
// 00774cfc  68cc897b00           push 0x7b89cc
// 00774d01  68448a7b00           push 0x7b8a44
// 00774d06  b928fc8b00           mov ecx, 0x8bfc28
// 00774d0b  e8c0e2e3ff           call 0x5b2fd0
// 00774d10  68a0b27700           push 0x77b2a0
// 00774d15  e899a4eaff           call 0x61f1b3
// 00774d1a  59                   pop ecx
// 00774d1b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
