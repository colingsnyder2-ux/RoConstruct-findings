// roc 2007-03 00474650  unit: seg_00470000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474650
//
// 00474650  8d81a8070000         lea eax, [ecx + 0x7a8]
// 00474656  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getObjectToWorldMatrix@RenderDevice@G3D@@QBEABVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
