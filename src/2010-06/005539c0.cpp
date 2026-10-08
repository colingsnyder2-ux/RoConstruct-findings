// from server: 100% by auto
// roc 2010-06 005539c0  unit: seg_00550000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005539c0
//
// 005539c0  8b442404             mov eax, dword ptr [esp + 4]
// 005539c4  56                   push esi
// 005539c5  8bf1                 mov esi, ecx
// 005539c7  50                   push eax
// 005539c8  c7064832a100         mov dword ptr [esi], 0xa13248
// 005539ce  c7460400000000       mov dword ptr [esi + 4], 0
// 005539d5  e886ffffff           call 0x553960
// 005539da  8bc6                 mov eax, esi
// 005539dc  5e                   pop esi
// 005539dd  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
