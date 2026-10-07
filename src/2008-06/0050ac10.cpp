// roc 2008-06 0050ac10  unit: G3D::Log  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ac10
//
// 0050ac10  8b442404             mov eax, dword ptr [esp + 4]
// 0050ac14  8b4018               mov eax, dword ptr [eax + 0x18]
// 0050ac17  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0050ac1a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0050ac1d  8908                 mov dword ptr [eax], ecx
// 0050ac1f  895004               mov dword ptr [eax + 4], edx
// 0050ac22  b001                 mov al, 1
// 0050ac24  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
