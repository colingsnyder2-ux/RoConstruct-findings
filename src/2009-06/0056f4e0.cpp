// roc 2009-06 0056f4e0  unit: G3D::Log  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056f4e0
//
// 0056f4e0  8b442408             mov eax, dword ptr [esp + 8]
// 0056f4e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056f4e8  8b542404             mov edx, dword ptr [esp + 4]
// 0056f4ec  50                   push eax
// 0056f4ed  51                   push ecx
// 0056f4ee  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 0056f4f1  e8aa570000           call 0x574ca0
// 0056f4f6  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
