// roc 2008-06 007eee80  unit: seg_007e0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eee80
//
// 007eee80  33c9                 xor ecx, ecx
// 007eee82  51                   push ecx
// 007eee83  68dcf08000           push 0x80f0dc
// 007eee88  51                   push ecx
// 007eee89  b8906e4100           mov eax, 0x416e90
// 007eee8e  50                   push eax
// 007eee8f  b9b8cd9600           mov ecx, 0x96cdb8
// 007eee94  e847d5c2ff           call 0x41c3e0
// 007eee99  6850a67f00           push 0x7fa650
// 007eee9e  e80c29ebff           call 0x6a17af
// 007eeea3  59                   pop ecx
// 007eeea4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EcloseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
