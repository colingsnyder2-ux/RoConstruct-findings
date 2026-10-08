// roc 2007-03 00544af0  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544af0
//
// 00544af0  8b4104               mov eax, dword ptr [ecx + 4]
// 00544af3  50                   push eax
// 00544af4  ff1508d07700         call dword ptr [0x77d008]
// 00544afa  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Discovery.cpp (function ?ip@NetAddress@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Discovery.cpp
