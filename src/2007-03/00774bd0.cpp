// roc 2007-03 00774bd0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774bd0
//
// 00774bd0  6a05                 push 5
// 00774bd2  6860425b00           push 0x5b4260
// 00774bd7  6800405b00           push 0x5b4000
// 00774bdc  68cc897b00           push 0x7b89cc
// 00774be1  68e8897b00           push 0x7b89e8
// 00774be6  b994fa8b00           mov ecx, 0x8bfa94
// 00774beb  e800dae3ff           call 0x5b25f0
// 00774bf0  6860b47700           push 0x77b460
// 00774bf5  e8b9a5eaff           call 0x61f1b3
// 00774bfa  59                   pop ecx
// 00774bfb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
