// roc 2007-03 0068afa0  unit: seg_00680000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068afa0
//
// 0068afa0  33c0                 xor eax, eax
// 0068afa2  394104               cmp dword ptr [ecx + 4], eax
// 0068afa5  0f95c0               setne al
// 0068afa8  c3                   ret 
// library rbxgs/v8world\JointStage.cpp (function ?inPipeline@IPipelined@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
