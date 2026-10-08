// roc 2007-03 004f6680  unit: seg_004f0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6680
//
// 004f6680  8b442404             mov eax, dword ptr [esp + 4]
// 004f6684  8b4018               mov eax, dword ptr [eax + 0x18]
// 004f6687  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004f668a  8b5018               mov edx, dword ptr [eax + 0x18]
// 004f668d  8908                 mov dword ptr [eax], ecx
// 004f668f  895004               mov dword ptr [eax + 4], edx
// 004f6692  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 004f6699  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?init_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
