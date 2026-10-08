// roc 2009-06 0049f420  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f420
//
// 0049f420  8b442404             mov eax, dword ptr [esp + 4]
// 0049f424  d900                 fld dword ptr [eax]
// 0049f426  56                   push esi
// 0049f427  8bf1                 mov esi, ecx
// 0049f429  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 0049f42f  50                   push eax
// 0049f430  d94004               fld dword ptr [eax + 4]
// 0049f433  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 0049f439  d94008               fld dword ptr [eax + 8]
// 0049f43c  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 0049f442  ff1534eb8900         call dword ptr [0x89eb34]
// 0049f448  b801000000           mov eax, 1
// 0049f44d  014678               add dword ptr [esi + 0x78], eax
// 0049f450  014670               add dword ptr [esi + 0x70], eax
// 0049f453  5e                   pop esi
// 0049f454  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
