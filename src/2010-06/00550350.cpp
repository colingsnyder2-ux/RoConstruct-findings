// from server: 100% by auto
// roc 2010-06 00550350  unit: G3D::Log  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550350
//
// 00550350  8b442404             mov eax, dword ptr [esp + 4]
// 00550354  8b4018               mov eax, dword ptr [eax + 0x18]
// 00550357  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0055035a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0055035d  8908                 mov dword ptr [eax], ecx
// 0055035f  895004               mov dword ptr [eax + 4], edx
// 00550362  b001                 mov al, 1
// 00550364  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
