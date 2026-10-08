// roc 2007-08 007751c0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007751c0
//
// 007751c0  6860dc7b00           push 0x7bdc60
// 007751c5  6808617900           push 0x796108
// 007751ca  685cdc7b00           push 0x7bdc5c
// 007751cf  b9a86f8c00           mov ecx, 0x8c6fa8
// 007751d4  e8973ae7ff           call 0x5e8c70
// 007751d9  6890bf7700           push 0x77bf90
// 007751de  e840bbebff           call 0x630d23
// 007751e3  59                   pop ecx
// 007751e4  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__Esignal_Hit@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
