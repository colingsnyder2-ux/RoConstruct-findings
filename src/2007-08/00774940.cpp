// roc 2007-08 00774940  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774940
//
// 00774940  6a05                 push 5
// 00774942  6870925b00           push 0x5b9270
// 00774947  6820915b00           push 0x5b9120
// 0077494c  68f0837b00           push 0x7b83f0
// 00774951  68188b7b00           push 0x7b8b18
// 00774956  b9a0618c00           mov ecx, 0x8c61a0
// 0077495b  e8703de4ff           call 0x5b86d0
// 00774960  6840bb7700           push 0x77bb40
// 00774965  e8b9c3ebff           call 0x630d23
// 0077496a  59                   pop ecx
// 0077496b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
