// roc 2008-06 007f12f0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f12f0
//
// 007f12f0  6888258200           push 0x822588
// 007f12f5  6880258200           push 0x822580
// 007f12fa  b950fc9600           mov ecx, 0x96fc50
// 007f12ff  e82c1acaff           call 0x492d30
// 007f1304  6860b37f00           push 0x7fb360
// 007f1309  e8a104ebff           call 0x6a17af
// 007f130e  59                   pop ecx
// 007f130f  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eevent_Idled@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
