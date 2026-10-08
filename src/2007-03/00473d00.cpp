// roc 2007-03 00473d00  unit: seg_00470000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473d00
//
// 00473d00  8b442404             mov eax, dword ptr [esp + 4]
// 00473d04  56                   push esi
// 00473d05  8bf1                 mov esi, ecx
// 00473d07  83467801             add dword ptr [esi + 0x78], 1
// 00473d0b  398620040000         cmp dword ptr [esi + 0x420], eax
// 00473d11  7417                 je 0x473d2a
// 00473d13  50                   push eax
// 00473d14  898620040000         mov dword ptr [esi + 0x420], eax
// 00473d1a  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 00473d20  50                   push eax
// 00473d21  e84affffff           call 0x473c70
// 00473d26  83467801             add dword ptr [esi + 0x78], 1
// 00473d2a  5e                   pop esi
// 00473d2b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
