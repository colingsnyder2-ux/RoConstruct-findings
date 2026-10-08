// roc 2010-06 00491500  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491500
//
// 00491500  8b442404             mov eax, dword ptr [esp + 4]
// 00491504  56                   push esi
// 00491505  8bf1                 mov esi, ecx
// 00491507  ff4678               inc dword ptr [esi + 0x78]
// 0049150a  398620040000         cmp dword ptr [esi + 0x420], eax
// 00491510  7416                 je 0x491528
// 00491512  50                   push eax
// 00491513  898620040000         mov dword ptr [esi + 0x420], eax
// 00491519  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 0049151f  50                   push eax
// 00491520  e84bffffff           call 0x491470
// 00491525  ff4678               inc dword ptr [esi + 0x78]
// 00491528  5e                   pop esi
// 00491529  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
