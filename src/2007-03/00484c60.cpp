// roc 2007-03 00484c60  unit: seg_00480000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484c60
//
// 00484c60  8a812c010000         mov al, byte ptr [ecx + 0x12c]
// 00484c66  c3                   ret 
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ?getNeutral@Player@Network@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
