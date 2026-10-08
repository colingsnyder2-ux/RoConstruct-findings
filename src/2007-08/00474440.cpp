// from server: 100% by auto
// roc 2007-08 00474440  unit: G3D::VARArea  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474440
//
// 00474440  83ec10               sub esp, 0x10
// 00474443  8b442414             mov eax, dword ptr [esp + 0x14]
// 00474447  d900                 fld dword ptr [eax]
// 00474449  d91c24               fstp dword ptr [esp]
// 0047444c  d94004               fld dword ptr [eax + 4]
// 0047444f  d95c2404             fstp dword ptr [esp + 4]
// 00474453  d94008               fld dword ptr [eax + 8]
// 00474456  8d0424               lea eax, [esp]
// 00474459  d95c2408             fstp dword ptr [esp + 8]
// 0047445d  50                   push eax
// 0047445e  d9e8                 fld1 
// 00474460  d95c2410             fstp dword ptr [esp + 0x10]
// 00474464  e807ffffff           call 0x474370
// 00474469  83c410               add esp, 0x10
// 0047446c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
