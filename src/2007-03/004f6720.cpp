// roc 2007-03 004f6720  unit: seg_004f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6720
//
// 004f6720  8b442404             mov eax, dword ptr [esp + 4]
// 004f6724  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004f6727  c6412401             mov byte ptr [ecx + 0x24], 1
// 004f672b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?init_source@G3D@@YAXPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
