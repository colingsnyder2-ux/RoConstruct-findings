// roc 2007-08 00730560  unit: seg_00730000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00730560
//
// 00730560  d9442414             fld dword ptr [esp + 0x14]
// 00730564  8b442410             mov eax, dword ptr [esp + 0x10]
// 00730568  8b542408             mov edx, dword ptr [esp + 8]
// 0073056c  83ec30               sub esp, 0x30
// 0073056f  51                   push ecx
// 00730570  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00730574  d91c24               fstp dword ptr [esp]
// 00730577  50                   push eax
// 00730578  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0073057c  51                   push ecx
// 0073057d  52                   push edx
// 0073057e  50                   push eax
// 0073057f  8d4c2414             lea ecx, [esp + 0x14]
// 00730583  e8c84ad4ff           call 0x475050
// 00730588  50                   push eax
// 00730589  e832f6ffff           call 0x72fbc0
// 0073058e  83c448               add esp, 0x48
// 00730591  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
