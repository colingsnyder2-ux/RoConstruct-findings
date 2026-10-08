// roc 2007-08 004ff050  unit: G3D::Shader  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff050
//
// 004ff050  8a442404             mov al, byte ptr [esp + 4]
// 004ff054  884114               mov byte ptr [ecx + 0x14], al
// 004ff057  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?setPreserveState@Shader@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
