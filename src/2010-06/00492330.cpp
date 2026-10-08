// roc 2010-06 00492330  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492330
//
// 00492330  8b442404             mov eax, dword ptr [esp + 4]
// 00492334  d900                 fld dword ptr [eax]
// 00492336  56                   push esi
// 00492337  8bf1                 mov esi, ecx
// 00492339  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 0049233f  50                   push eax
// 00492340  d94004               fld dword ptr [eax + 4]
// 00492343  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 00492349  d94008               fld dword ptr [eax + 8]
// 0049234c  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 00492352  ff1528ab9e00         call dword ptr [0x9eab28]
// 00492358  b801000000           mov eax, 1
// 0049235d  014678               add dword ptr [esi + 0x78], eax
// 00492360  014670               add dword ptr [esi + 0x70], eax
// 00492363  5e                   pop esi
// 00492364  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
