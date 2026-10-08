// roc 2007-03 0046f490  unit: seg_00460000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f490
//
// 0046f490  e80b660800           call 0x4f5aa0
// 0046f495  50                   push eax
// 0046f496  e885eeffff           call 0x46e320
// 0046f49b  59                   pop ecx
// 0046f49c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?init@GLCaps@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp
