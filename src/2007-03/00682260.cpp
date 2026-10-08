// roc 2007-03 00682260  unit: seg_00680000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00682260
//
// 00682260  8b442404             mov eax, dword ptr [esp + 4]
// 00682264  50                   push eax
// 00682265  e8268cfeff           call 0x66ae90
// 0068226a  83c404               add esp, 4
// 0068226d  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?supportsOpenGLExtension@RenderDevice@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
