// roc 2007-03 0047e620  unit: seg_00470000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e620
//
// 0047e620  56                   push esi
// 0047e621  8b3574eb7700         mov esi, dword ptr [0x77eb74]
// 0047e627  68e10d0000           push 0xde1
// 0047e62c  ffd6                 call esi
// 0047e62e  803d2d768b0000       cmp byte ptr [0x8b762d], 0
// 0047e635  7407                 je 0x47e63e
// 0047e637  686f800000           push 0x806f
// 0047e63c  ffd6                 call esi
// 0047e63e  803d32768b0000       cmp byte ptr [0x8b7632], 0
// 0047e645  7407                 je 0x47e64e
// 0047e647  6813850000           push 0x8513
// 0047e64c  ffd6                 call esi
// 0047e64e  68e00d0000           push 0xde0
// 0047e653  ffd6                 call esi
// 0047e655  803d25768b0000       cmp byte ptr [0x8b7625], 0
// 0047e65c  7407                 je 0x47e665
// 0047e65e  68f5840000           push 0x84f5
// 0047e663  ffd6                 call esi
// 0047e665  5e                   pop esi
// 0047e666  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/glcalls.cpp
