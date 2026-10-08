// roc 2007-08 00474ae0  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474ae0
//
// 00474ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00474ae4  d900                 fld dword ptr [eax]
// 00474ae6  56                   push esi
// 00474ae7  8bf1                 mov esi, ecx
// 00474ae9  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 00474aef  50                   push eax
// 00474af0  d94004               fld dword ptr [eax + 4]
// 00474af3  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 00474af9  d94008               fld dword ptr [eax + 8]
// 00474afc  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 00474b02  ff1574eb7700         call dword ptr [0x77eb74]
// 00474b08  b801000000           mov eax, 1
// 00474b0d  014678               add dword ptr [esi + 0x78], eax
// 00474b10  014670               add dword ptr [esi + 0x70], eax
// 00474b13  5e                   pop esi
// 00474b14  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
