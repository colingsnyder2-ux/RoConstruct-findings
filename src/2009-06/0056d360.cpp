// from server: 100% by auto
// roc 2009-06 0056d360  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d360
//
// 0056d360  8b442404             mov eax, dword ptr [esp + 4]
// 0056d364  8b4018               mov eax, dword ptr [eax + 0x18]
// 0056d367  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0056d36a  2b4804               sub ecx, dword ptr [eax + 4]
// 0056d36d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0056d370  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
