// roc 2008-06 007f2830  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2830
//
// 007f2830  6854d68200           push 0x82d654
// 007f2835  6848d68200           push 0x82d648
// 007f283a  b9403b9700           mov ecx, 0x973b40
// 007f283f  e81c41d6ff           call 0x556960
// 007f2844  6810c87f00           push 0x7fc810
// 007f2849  e861efeaff           call 0x6a17af
// 007f284e  59                   pop ecx
// 007f284f  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__Eevent_Heartbeat@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
