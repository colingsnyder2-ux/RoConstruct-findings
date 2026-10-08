// roc 2009-12 005ec430  unit: G3D::Log  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec430
//
// 005ec430  8b442404             mov eax, dword ptr [esp + 4]
// 005ec434  8b4018               mov eax, dword ptr [eax + 0x18]
// 005ec437  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005ec43a  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ec43d  8908                 mov dword ptr [eax], ecx
// 005ec43f  895004               mov dword ptr [eax + 4], edx
// 005ec442  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005ec449  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?init_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
