// roc 2009-12 005ee5f0  unit: G3D::Log  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ee5f0
//
// 005ee5f0  8b442408             mov eax, dword ptr [esp + 8]
// 005ee5f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee5f8  8b542404             mov edx, dword ptr [esp + 4]
// 005ee5fc  50                   push eax
// 005ee5fd  51                   push ecx
// 005ee5fe  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 005ee601  e8ba700000           call 0x5f56c0
// 005ee606  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
