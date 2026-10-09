// roc 2008-06 007f7540  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7540
//
// 007f7540  6a05                 push 5
// 007f7542  68e0135f00           push 0x5f13e0
// 007f7547  6890125f00           push 0x5f1290
// 007f754c  6800fd8300           push 0x83fd00
// 007f7551  6830068400           push 0x840630
// 007f7556  b928b19700           mov ecx, 0x97b128
// 007f755b  e81075dfff           call 0x5eea70
// 007f7560  6890fe7f00           push 0x7ffe90
// 007f7565  e845a2eaff           call 0x6a17af
// 007f756a  59                   pop ecx
// 007f756b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
