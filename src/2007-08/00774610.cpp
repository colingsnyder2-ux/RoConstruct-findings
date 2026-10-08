// roc 2007-08 00774610  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774610
//
// 00774610  6a05                 push 5
// 00774612  6850945b00           push 0x5b9450
// 00774617  68f0915b00           push 0x5b91f0
// 0077461c  68fc897b00           push 0x7b89fc
// 00774621  68188a7b00           push 0x7b8a18
// 00774626  b94c638c00           mov ecx, 0x8c634c
// 0077462b  e8b032e4ff           call 0x5b78e0
// 00774630  6860bb7700           push 0x77bb60
// 00774635  e8e9c6ebff           call 0x630d23
// 0077463a  59                   pop ecx
// 0077463b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
