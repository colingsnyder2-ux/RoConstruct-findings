// roc 2009-12 005ec470  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec470
//
// 005ec470  8b442404             mov eax, dword ptr [esp + 4]
// 005ec474  8b4018               mov eax, dword ptr [eax + 0x18]
// 005ec477  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005ec47a  2b4804               sub ecx, dword ptr [eax + 4]
// 005ec47d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005ec480  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
