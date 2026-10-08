// from server: 100% by auto
// roc 2012-06 0063bf90  unit: G3D::_internal::DialogTemplate  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063bf90
//
// 0063bf90  8b442404             mov eax, dword ptr [esp + 4]
// 0063bf94  8b4018               mov eax, dword ptr [eax + 0x18]
// 0063bf97  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0063bf9a  2b4804               sub ecx, dword ptr [eax + 4]
// 0063bf9d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063bfa0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
