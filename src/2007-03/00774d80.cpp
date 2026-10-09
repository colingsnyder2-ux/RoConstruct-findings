// roc 2007-03 00774d80  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774d80
//
// 00774d80  6a05                 push 5
// 00774d82  6880405b00           push 0x5b4080
// 00774d87  68303f5b00           push 0x5b3f30
// 00774d8c  68c0837b00           push 0x7b83c0
// 00774d91  68708a7b00           push 0x7b8a70
// 00774d96  b9b4fb8b00           mov ecx, 0x8bfbb4
// 00774d9b  e8d0e2e3ff           call 0x5b3070
// 00774da0  6840b37700           push 0x77b340
// 00774da5  e809a4eaff           call 0x61f1b3
// 00774daa  59                   pop ecx
// 00774dab  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
