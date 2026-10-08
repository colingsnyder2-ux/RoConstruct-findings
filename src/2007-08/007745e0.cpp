// roc 2007-08 007745e0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007745e0
//
// 007745e0  6a05                 push 5
// 007745e2  6880935b00           push 0x5b9380
// 007745e7  6890915b00           push 0x5b9190
// 007745ec  68fc897b00           push 0x7b89fc
// 007745f1  680c8a7b00           push 0x7b8a0c
// 007745f6  b92c628c00           mov ecx, 0x8c622c
// 007745fb  e8e032e4ff           call 0x5b78e0
// 00774600  6880bb7700           push 0x77bb80
// 00774605  e819c7ebff           call 0x630d23
// 0077460a  59                   pop ecx
// 0077460b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
