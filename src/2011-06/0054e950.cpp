// roc 2011-06 0054e950  unit: G3D::_internal::DialogTemplate  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054e950
//
// 0054e950  8b442404             mov eax, dword ptr [esp + 4]
// 0054e954  8b4018               mov eax, dword ptr [eax + 0x18]
// 0054e957  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054e95a  2b4804               sub ecx, dword ptr [eax + 4]
// 0054e95d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054e960  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
