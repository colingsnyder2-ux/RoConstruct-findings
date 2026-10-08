// from server: 100% by auto
// roc 2009-06 0056d340  unit: G3D::Log  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d340
//
// 0056d340  8b442404             mov eax, dword ptr [esp + 4]
// 0056d344  8b4018               mov eax, dword ptr [eax + 0x18]
// 0056d347  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0056d34a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0056d34d  8908                 mov dword ptr [eax], ecx
// 0056d34f  895004               mov dword ptr [eax + 4], edx
// 0056d352  b001                 mov al, 1
// 0056d354  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
