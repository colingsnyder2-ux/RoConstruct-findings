// from server: 100% by auto
// roc 2008-06 0050abf0  unit: G3D::Log  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050abf0
//
// 0050abf0  8b442404             mov eax, dword ptr [esp + 4]
// 0050abf4  8b4018               mov eax, dword ptr [eax + 0x18]
// 0050abf7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0050abfa  8b5018               mov edx, dword ptr [eax + 0x18]
// 0050abfd  8908                 mov dword ptr [eax], ecx
// 0050abff  895004               mov dword ptr [eax + 4], edx
// 0050ac02  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0050ac09  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?init_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
