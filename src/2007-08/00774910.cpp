// roc 2007-08 00774910  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774910
//
// 00774910  6a05                 push 5
// 00774912  6850945b00           push 0x5b9450
// 00774917  68f0915b00           push 0x5b91f0
// 0077491c  68fc897b00           push 0x7b89fc
// 00774921  680c8b7b00           push 0x7b8b0c
// 00774926  b968638c00           mov ecx, 0x8c6368
// 0077492b  e87032e4ff           call 0x5b7ba0
// 00774930  6860ba7700           push 0x77ba60
// 00774935  e8e9c3ebff           call 0x630d23
// 0077493a  59                   pop ecx
// 0077493b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
