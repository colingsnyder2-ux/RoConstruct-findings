// roc 2007-03 00474540  unit: seg_00470000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474540
//
// 00474540  83ec10               sub esp, 0x10
// 00474543  8b442414             mov eax, dword ptr [esp + 0x14]
// 00474547  d900                 fld dword ptr [eax]
// 00474549  d91c24               fstp dword ptr [esp]
// 0047454c  d94004               fld dword ptr [eax + 4]
// 0047454f  d95c2404             fstp dword ptr [esp + 4]
// 00474553  d94008               fld dword ptr [eax + 8]
// 00474556  8d0424               lea eax, [esp]
// 00474559  d95c2408             fstp dword ptr [esp + 8]
// 0047455d  50                   push eax
// 0047455e  d9e8                 fld1 
// 00474560  d95c2410             fstp dword ptr [esp + 0x10]
// 00474564  e807ffffff           call 0x474470
// 00474569  83c410               add esp, 0x10
// 0047456c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setAmbientLightColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
