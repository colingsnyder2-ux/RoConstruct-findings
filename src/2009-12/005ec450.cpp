// roc 2009-12 005ec450  unit: G3D::Log  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec450
//
// 005ec450  8b442404             mov eax, dword ptr [esp + 4]
// 005ec454  8b4018               mov eax, dword ptr [eax + 0x18]
// 005ec457  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005ec45a  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ec45d  8908                 mov dword ptr [eax], ecx
// 005ec45f  895004               mov dword ptr [eax + 4], edx
// 005ec462  b001                 mov al, 1
// 005ec464  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
