// roc 2007-08 00774790  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774790
//
// 00774790  6a05                 push 5
// 00774792  6850945b00           push 0x5b9450
// 00774797  68f0915b00           push 0x5b91f0
// 0077479c  68fc897b00           push 0x7b89fc
// 007747a1  68948a7b00           push 0x7b8a94
// 007747a6  b9a4638c00           mov ecx, 0x8c63a4
// 007747ab  e89032e4ff           call 0x5b7a40
// 007747b0  6860b97700           push 0x77b960
// 007747b5  e869c5ebff           call 0x630d23
// 007747ba  59                   pop ecx
// 007747bb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
