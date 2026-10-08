// roc 2007-03 00480c90  unit: seg_00480000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480c90
//
// 00480c90  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00480c93  051c010000           add eax, 0x11c
// 00480c98  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?messages@Shader@G3D@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
