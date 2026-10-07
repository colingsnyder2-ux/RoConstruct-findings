// roc 2007-08 00504040  unit: G3D::Log  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504040
//
// 00504040  8b442408             mov eax, dword ptr [esp + 8]
// 00504044  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00504048  8b542404             mov edx, dword ptr [esp + 4]
// 0050404c  50                   push eax
// 0050404d  51                   push ecx
// 0050404e  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 00504051  e88a7f0000           call 0x50bfe0
// 00504056  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
