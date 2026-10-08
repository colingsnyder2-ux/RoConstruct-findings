// roc 2007-08 007747f0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007747f0
//
// 007747f0  6a05                 push 5
// 007747f2  68c0925b00           push 0x5b92c0
// 007747f7  6830915b00           push 0x5b9130
// 007747fc  68fc897b00           push 0x7b89fc
// 00774801  68b08a7b00           push 0x7b8ab0
// 00774806  b9fc638c00           mov ecx, 0x8c63fc
// 0077480b  e8d03ce4ff           call 0x5b84e0
// 00774810  6820ba7700           push 0x77ba20
// 00774815  e809c5ebff           call 0x630d23
// 0077481a  59                   pop ecx
// 0077481b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
