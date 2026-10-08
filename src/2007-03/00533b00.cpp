// roc 2007-03 00533b00  unit: seg_00530000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533b00
//
// 00533b00  8d8170010000         lea eax, [ecx + 0x170]
// 00533b06  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getModelInPrimary@ModelInstance@RBX@@QBEABVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
