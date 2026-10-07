// roc 2010-06 00550370  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550370
//
// 00550370  8b442404             mov eax, dword ptr [esp + 4]
// 00550374  8b4018               mov eax, dword ptr [eax + 0x18]
// 00550377  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0055037a  2b4804               sub ecx, dword ptr [eax + 4]
// 0055037d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00550380  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
