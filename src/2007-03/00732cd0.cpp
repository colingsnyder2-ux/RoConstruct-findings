// roc 2007-03 00732cd0  unit: seg_00730000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732cd0
//
// 00732cd0  d9442414             fld dword ptr [esp + 0x14]
// 00732cd4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00732cd8  8b542408             mov edx, dword ptr [esp + 8]
// 00732cdc  83ec30               sub esp, 0x30
// 00732cdf  51                   push ecx
// 00732ce0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00732ce4  d91c24               fstp dword ptr [esp]
// 00732ce7  50                   push eax
// 00732ce8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00732cec  51                   push ecx
// 00732ced  52                   push edx
// 00732cee  50                   push eax
// 00732cef  8d4c2414             lea ecx, [esp + 0x14]
// 00732cf3  e87824d4ff           call 0x475170
// 00732cf8  50                   push eax
// 00732cf9  e832f6ffff           call 0x732330
// 00732cfe  83c448               add esp, 0x48
// 00732d01  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
