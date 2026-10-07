// roc 2012-06 0063bf70  unit: G3D::_internal::DialogTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063bf70
//
// 0063bf70  8b442404             mov eax, dword ptr [esp + 4]
// 0063bf74  8b4018               mov eax, dword ptr [eax + 0x18]
// 0063bf77  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0063bf7a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0063bf7d  8908                 mov dword ptr [eax], ecx
// 0063bf7f  895004               mov dword ptr [eax + 4], edx
// 0063bf82  b001                 mov al, 1
// 0063bf84  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
