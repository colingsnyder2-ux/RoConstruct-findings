// roc 2009-12 004cac60  unit: G3D::VARArea  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cac60
//
// 004cac60  8b442404             mov eax, dword ptr [esp + 4]
// 004cac64  56                   push esi
// 004cac65  8bf1                 mov esi, ecx
// 004cac67  ff4678               inc dword ptr [esi + 0x78]
// 004cac6a  398620040000         cmp dword ptr [esi + 0x420], eax
// 004cac70  7416                 je 0x4cac88
// 004cac72  50                   push eax
// 004cac73  898620040000         mov dword ptr [esi + 0x420], eax
// 004cac79  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 004cac7f  50                   push eax
// 004cac80  e84bffffff           call 0x4cabd0
// 004cac85  ff4678               inc dword ptr [esi + 0x78]
// 004cac88  5e                   pop esi
// 004cac89  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
