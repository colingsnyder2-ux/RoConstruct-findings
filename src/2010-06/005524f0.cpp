// from server: 100% by auto
// roc 2010-06 005524f0  unit: G3D::Log  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005524f0
//
// 005524f0  8b442408             mov eax, dword ptr [esp + 8]
// 005524f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005524f8  8b542404             mov edx, dword ptr [esp + 4]
// 005524fc  50                   push eax
// 005524fd  51                   push ecx
// 005524fe  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 00552501  e8aa680000           call 0x558db0
// 00552506  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
