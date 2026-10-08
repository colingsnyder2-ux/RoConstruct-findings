// roc 2007-03 00550470  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550470
//
// 00550470  8a81f8000000         mov al, byte ptr [ecx + 0xf8]
// 00550476  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ?getAutoAssignable@Team@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
