// from server: 100% by auto
// roc 2008-06 00477740  unit: G3D::VARArea  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477740
//
// 00477740  83ec10               sub esp, 0x10
// 00477743  8b442414             mov eax, dword ptr [esp + 0x14]
// 00477747  d900                 fld dword ptr [eax]
// 00477749  d91c24               fstp dword ptr [esp]
// 0047774c  d94004               fld dword ptr [eax + 4]
// 0047774f  d95c2404             fstp dword ptr [esp + 4]
// 00477753  d94008               fld dword ptr [eax + 8]
// 00477756  8d0424               lea eax, [esp]
// 00477759  d95c2408             fstp dword ptr [esp + 8]
// 0047775d  50                   push eax
// 0047775e  d9e8                 fld1 
// 00477760  d95c2410             fstp dword ptr [esp + 0x10]
// 00477764  e817ffffff           call 0x477680
// 00477769  83c410               add esp, 0x10
// 0047776c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
