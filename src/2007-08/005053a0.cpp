// roc 2007-08 005053a0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005053a0
//
// 005053a0  8b442404             mov eax, dword ptr [esp + 4]
// 005053a4  56                   push esi
// 005053a5  8bf1                 mov esi, ecx
// 005053a7  50                   push eax
// 005053a8  c70684317900         mov dword ptr [esi], 0x793184
// 005053ae  c7460400000000       mov dword ptr [esi + 4], 0
// 005053b5  e896ffffff           call 0x505350
// 005053ba  8bc6                 mov eax, esi
// 005053bc  5e                   pop esi
// 005053bd  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
