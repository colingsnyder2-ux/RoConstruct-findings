// roc 2007-03 004f66c0  unit: seg_004f0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f66c0
//
// 004f66c0  8b442404             mov eax, dword ptr [esp + 4]
// 004f66c4  8b4018               mov eax, dword ptr [eax + 0x18]
// 004f66c7  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004f66ca  2b4804               sub ecx, dword ptr [eax + 4]
// 004f66cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 004f66d0  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?term_destination@G3D@@YAXPAUjpeg_compress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
