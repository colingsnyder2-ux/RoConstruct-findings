// roc 2008-06 007f7e60  unit: seg_007f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7e60
//
// 007f7e60  68045f8400           push 0x845f04
// 007f7e65  6860c98100           push 0x81c960
// 007f7e6a  68005f8400           push 0x845f00
// 007f7e6f  b928c09700           mov ecx, 0x97c028
// 007f7e74  e8072ee3ff           call 0x62ac80
// 007f7e79  6810048000           push 0x800410
// 007f7e7e  e82c99eaff           call 0x6a17af
// 007f7e83  59                   pop ecx
// 007f7e84  c3                   ret 
// library rbxgs/v8datamodel\Explosion.cpp (function ??__Esignal_Hit@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
