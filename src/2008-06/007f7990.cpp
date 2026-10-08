// roc 2008-06 007f7990  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7990
//
// 007f7990  e87bbedcff           call 0x5c3810
// 007f7995  688c1e8400           push 0x841e8c
// 007f799a  50                   push eax
// 007f799b  b9d4b69700           mov ecx, 0x97b6d4
// 007f79a0  e80b41d7ff           call 0x56bab0
// 007f79a5  6890008000           push 0x800090
// 007f79aa  c705d4b69700501c8400 mov dword ptr [0x97b6d4], 0x841c50
// 007f79b4  e8f69deaff           call 0x6a17af
// 007f79b9  59                   pop ecx
// 007f79ba  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Deactivated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
