// roc 2007-08 00771410  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771410
//
// 00771410  e82b99deff           call 0x55ad40
// 00771415  68606f7800           push 0x786f60
// 0077141a  50                   push eax
// 0077141b  b9e0208c00           mov ecx, 0x8c20e0
// 00771420  e8ebefdfff           call 0x570410
// 00771425  68f09c7700           push 0x779cf0
// 0077142a  c705e0208c00f08a7a00 mov dword ptr [0x8c20e0], 0x7a8af0
// 00771434  e8eaf8ebff           call 0x630d23
// 00771439  59                   pop ecx
// 0077143a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Eevent_Closing@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
