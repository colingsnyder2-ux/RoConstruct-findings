// roc 2010-06 0054d450  unit: G3D::Shader  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d450
//
// 0054d450  8a442404             mov al, byte ptr [esp + 4]
// 0054d454  884114               mov byte ptr [ecx + 0x14], al
// 0054d457  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?setPreserveState@Shader@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
