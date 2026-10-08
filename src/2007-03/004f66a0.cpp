// roc 2007-03 004f66a0  unit: seg_004f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f66a0
//
// 004f66a0  8b442404             mov eax, dword ptr [esp + 4]
// 004f66a4  8b4018               mov eax, dword ptr [eax + 0x18]
// 004f66a7  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004f66aa  8b5018               mov edx, dword ptr [eax + 0x18]
// 004f66ad  8908                 mov dword ptr [eax], ecx
// 004f66af  895004               mov dword ptr [eax + 4], edx
// 004f66b2  b001                 mov al, 1
// 004f66b4  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?empty_output_buffer@G3D@@YAEPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
