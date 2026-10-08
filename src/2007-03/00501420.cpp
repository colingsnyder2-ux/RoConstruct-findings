// roc 2007-03 00501420  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501420
//
// 00501420  e8fb2affff           call 0x4f3f20
// 00501425  33c9                 xor ecx, ecx
// 00501427  39442404             cmp dword ptr [esp + 4], eax
// 0050142b  0f95c1               setne cl
// 0050142e  8ac1                 mov al, cl
// 00501430  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?needSwapBytes@G3D@@YA_NW4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
