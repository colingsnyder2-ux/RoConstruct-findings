// roc 2007-03 004f8a30  unit: seg_004f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f8a30
//
// 004f8a30  8b442408             mov eax, dword ptr [esp + 8]
// 004f8a34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f8a38  8b542404             mov edx, dword ptr [esp + 4]
// 004f8a3c  50                   push eax
// 004f8a3d  51                   push ecx
// 004f8a3e  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 004f8a41  e8ea8b0000           call 0x501630
// 004f8a46  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_png.cpp (function ?png_read_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_png.cpp
