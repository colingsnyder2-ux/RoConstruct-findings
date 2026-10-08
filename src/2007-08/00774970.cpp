// roc 2007-08 00774970  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774970
//
// 00774970  6a05                 push 5
// 00774972  68c0925b00           push 0x5b92c0
// 00774977  6830915b00           push 0x5b9130
// 0077497c  68fc897b00           push 0x7b89fc
// 00774981  68248b7b00           push 0x7b8b24
// 00774986  b9f8628c00           mov ecx, 0x8c62f8
// 0077498b  e8e03de4ff           call 0x5b8770
// 00774990  6820bb7700           push 0x77bb20
// 00774995  e889c3ebff           call 0x630d23
// 0077499a  59                   pop ecx
// 0077499b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
