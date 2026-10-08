// roc 2007-03 007756a0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007756a0
//
// 007756a0  6a01                 push 1
// 007756a2  33c9                 xor ecx, ecx
// 007756a4  68bcda7b00           push 0x7bdabc
// 007756a9  51                   push ecx
// 007756aa  b830ad5d00           mov eax, 0x5dad30
// 007756af  50                   push eax
// 007756b0  b960068c00           mov ecx, 0x8c0660
// 007756b5  e8f681e6ff           call 0x5dd8b0
// 007756ba  68f0b87700           push 0x77b8f0
// 007756bf  e8ef9aeaff           call 0x61f1b3
// 007756c4  59                   pop ecx
// 007756c5  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForceOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
