// roc 2007-03 004734f0  unit: seg_00470000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004734f0
//
// 004734f0  8b09                 mov ecx, dword ptr [ecx]
// 004734f2  8b01                 mov eax, dword ptr [ecx]
// 004734f4  8b4028               mov eax, dword ptr [eax + 0x28]
// 004734f7  ffe0                 jmp eax
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCaption@RenderDevice@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
