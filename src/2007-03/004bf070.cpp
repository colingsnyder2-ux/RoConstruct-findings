// roc 2007-03 004bf070  unit: seg_004b0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bf070
//
// 004bf070  8b442404             mov eax, dword ptr [esp + 4]
// 004bf074  50                   push eax
// 004bf075  ff15e4d17700         call dword ptr [0x77d1e4]
// 004bf07b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?glGetProcAddress@G3D@@YAPAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp
