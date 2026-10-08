// roc 2008-06 007f36a0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f36a0
//
// 007f36a0  e81b52d8ff           call 0x5788c0
// 007f36a5  68dcf08000           push 0x80f0dc
// 007f36aa  50                   push eax
// 007f36ab  b9c84f9700           mov ecx, 0x974fc8
// 007f36b0  e8fb83d7ff           call 0x56bab0
// 007f36b5  6820d67f00           push 0x7fd620
// 007f36ba  c705c84f9700a4008300 mov dword ptr [0x974fc8], 0x8300a4
// 007f36c4  e8e6e0eaff           call 0x6a17af
// 007f36c9  59                   pop ecx
// 007f36ca  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Eevent_Closing@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
