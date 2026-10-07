// roc 2008-06 0050e210  unit: seg_00500000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050e210
//
// 0050e210  8b442404             mov eax, dword ptr [esp + 4]
// 0050e214  56                   push esi
// 0050e215  8bf1                 mov esi, ecx
// 0050e217  50                   push eax
// 0050e218  c7065c978100         mov dword ptr [esi], 0x81975c
// 0050e21e  c7460400000000       mov dword ptr [esi + 4], 0
// 0050e225  e886ffffff           call 0x50e1b0
// 0050e22a  8bc6                 mov eax, esi
// 0050e22c  5e                   pop esi
// 0050e22d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
