// roc 2012-06 0063bf50  unit: G3D::_internal::DialogTemplate  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063bf50
//
// 0063bf50  8b442404             mov eax, dword ptr [esp + 4]
// 0063bf54  8b4018               mov eax, dword ptr [eax + 0x18]
// 0063bf57  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0063bf5a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0063bf5d  8908                 mov dword ptr [eax], ecx
// 0063bf5f  895004               mov dword ptr [eax + 4], edx
// 0063bf62  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0063bf69  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?init_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
