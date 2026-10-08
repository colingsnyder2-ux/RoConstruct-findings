// roc 2009-12 005efac0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005efac0
//
// 005efac0  8b442404             mov eax, dword ptr [esp + 4]
// 005efac4  56                   push esi
// 005efac5  8bf1                 mov esi, ecx
// 005efac7  50                   push eax
// 005efac8  c70698559b00         mov dword ptr [esi], 0x9b5598
// 005eface  c7460400000000       mov dword ptr [esi + 4], 0
// 005efad5  e886ffffff           call 0x5efa60
// 005efada  8bc6                 mov eax, esi
// 005efadc  5e                   pop esi
// 005efadd  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
