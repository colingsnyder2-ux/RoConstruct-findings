// roc 2007-03 00774db0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774db0
//
// 00774db0  6a05                 push 5
// 00774db2  68d0405b00           push 0x5b40d0
// 00774db7  68403f5b00           push 0x5b3f40
// 00774dbc  68cc897b00           push 0x7b89cc
// 00774dc1  68808a7b00           push 0x7b8a80
// 00774dc6  b944fb8b00           mov ecx, 0x8bfb44
// 00774dcb  e850e3e3ff           call 0x5b3120
// 00774dd0  6820b37700           push 0x77b320
// 00774dd5  e8d9a3eaff           call 0x61f1b3
// 00774dda  59                   pop ecx
// 00774ddb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
