// roc 2007-03 00533aa0  unit: seg_00530000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533aa0
//
// 00533aa0  8a8158010000         mov al, byte ptr [ecx + 0x158]
// 00533aa6  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ?getShowControllerFlag@PVInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
