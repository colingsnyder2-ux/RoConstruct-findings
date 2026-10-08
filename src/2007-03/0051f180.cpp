// roc 2007-03 0051f180  unit: seg_00510000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f180
//
// 0051f180  56                   push esi
// 0051f181  8b742408             mov esi, dword ptr [esp + 8]
// 0051f185  8d410c               lea eax, [ecx + 0xc]
// 0051f188  50                   push eax
// 0051f189  51                   push ecx
// 0051f18a  8bce                 mov ecx, esi
// 0051f18c  e82f5cffff           call 0x514dc0
// 0051f191  8bc6                 mov eax, esi
// 0051f193  5e                   pop esi
// 0051f194  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\AABox.cpp (function ?toBox@AABox@G3D@@QBE?AVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/AABox.cpp
