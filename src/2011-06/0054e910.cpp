// from server: 100% by auto
// roc 2011-06 0054e910  unit: G3D::_internal::DialogTemplate  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054e910
//
// 0054e910  8b442404             mov eax, dword ptr [esp + 4]
// 0054e914  8b4018               mov eax, dword ptr [eax + 0x18]
// 0054e917  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054e91a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054e91d  8908                 mov dword ptr [eax], ecx
// 0054e91f  895004               mov dword ptr [eax + 4], edx
// 0054e922  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0054e929  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?init_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
