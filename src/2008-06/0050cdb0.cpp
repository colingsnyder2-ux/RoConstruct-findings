// from server: 100% by auto
// roc 2008-06 0050cdb0  unit: G3D::Log  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050cdb0
//
// 0050cdb0  8b442408             mov eax, dword ptr [esp + 8]
// 0050cdb4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050cdb8  8b542404             mov edx, dword ptr [esp + 4]
// 0050cdbc  50                   push eax
// 0050cdbd  51                   push ecx
// 0050cdbe  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 0050cdc1  e84a8f0000           call 0x515d10
// 0050cdc6  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
