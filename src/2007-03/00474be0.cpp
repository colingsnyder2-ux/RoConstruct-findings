// roc 2007-03 00474be0  unit: seg_00470000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474be0
//
// 00474be0  8b442404             mov eax, dword ptr [esp + 4]
// 00474be4  d900                 fld dword ptr [eax]
// 00474be6  56                   push esi
// 00474be7  8bf1                 mov esi, ecx
// 00474be9  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 00474bef  50                   push eax
// 00474bf0  d94004               fld dword ptr [eax + 4]
// 00474bf3  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 00474bf9  d94008               fld dword ptr [eax + 8]
// 00474bfc  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 00474c02  ff1550eb7700         call dword ptr [0x77eb50]
// 00474c08  b801000000           mov eax, 1
// 00474c0d  014678               add dword ptr [esi + 0x78], eax
// 00474c10  014670               add dword ptr [esi + 0x70], eax
// 00474c13  5e                   pop esi
// 00474c14  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
