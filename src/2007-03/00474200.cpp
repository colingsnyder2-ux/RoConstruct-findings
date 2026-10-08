// roc 2007-03 00474200  unit: seg_00470000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474200
//
// 00474200  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00474204  8b542408             mov edx, dword ptr [esp + 8]
// 00474208  56                   push esi
// 00474209  8b742408             mov esi, dword ptr [esp + 8]
// 0047420d  50                   push eax
// 0047420e  52                   push edx
// 0047420f  56                   push esi
// 00474210  50                   push eax
// 00474211  52                   push edx
// 00474212  56                   push esi
// 00474213  e898fdffff           call 0x473fb0
// 00474218  5e                   pop esi
// 00474219  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
