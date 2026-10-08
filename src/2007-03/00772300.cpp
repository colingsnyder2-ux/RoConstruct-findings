// roc 2007-03 00772300  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772300
//
// 00772300  e83b9cdeff           call 0x55bf40
// 00772305  6810607800           push 0x786010
// 0077230a  50                   push eax
// 0077230b  b970c48b00           mov ecx, 0x8bc470
// 00772310  e81be0dfff           call 0x570330
// 00772315  68a09b7700           push 0x779ba0
// 0077231a  c70570c48b0068a27a00 mov dword ptr [0x8bc470], 0x7aa268
// 00772324  e88aceeaff           call 0x61f1b3
// 00772329  59                   pop ecx
// 0077232a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Eevent_Closing@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
