// roc 2007-03 00480660  unit: seg_00480000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480660
//
// 00480660  80791400             cmp byte ptr [ecx + 0x14], 0
// 00480664  7409                 je 0x48066f
// 00480666  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048066a  e8b191ffff           call 0x479820
// 0048066f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
