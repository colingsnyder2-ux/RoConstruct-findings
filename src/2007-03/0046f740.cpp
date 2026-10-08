// roc 2007-03 0046f740  unit: seg_00460000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f740
//
// 0046f740  ff158cec7700         call dword ptr [0x77ec8c]
// 0046f746  ff2538eb7700         jmp dword ptr [0x77eb38]
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?glStatePop@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
