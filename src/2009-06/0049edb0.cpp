// from server: 100% by auto
// roc 2009-06 0049edb0  unit: G3D::VARArea  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049edb0
//
// 0049edb0  83ec10               sub esp, 0x10
// 0049edb3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049edb7  d900                 fld dword ptr [eax]
// 0049edb9  d91c24               fstp dword ptr [esp]
// 0049edbc  d94004               fld dword ptr [eax + 4]
// 0049edbf  d95c2404             fstp dword ptr [esp + 4]
// 0049edc3  d94008               fld dword ptr [eax + 8]
// 0049edc6  8d0424               lea eax, [esp]
// 0049edc9  d95c2408             fstp dword ptr [esp + 8]
// 0049edcd  50                   push eax
// 0049edce  d9e8                 fld1 
// 0049edd0  d95c2410             fstp dword ptr [esp + 0x10]
// 0049edd4  e817ffffff           call 0x49ecf0
// 0049edd9  83c410               add esp, 0x10
// 0049eddc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
