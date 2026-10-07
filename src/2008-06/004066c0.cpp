// roc 2008-06 004066c0  unit: VCApp::?$CComObject  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004066c0
//
// 004066c0  57                   push edi
// 004066c1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004066c5  83ef01               sub edi, 1
// 004066c8  7824                 js 0x4066ee
// 004066ca  53                   push ebx
// 004066cb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004066cf  55                   push ebp
// 004066d0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004066d4  56                   push esi
// 004066d5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004066d9  8da42400000000       lea esp, [esp]
// 004066e0  8bce                 mov ecx, esi
// 004066e2  ffd3                 call ebx
// 004066e4  03f5                 add esi, ebp
// 004066e6  83ef01               sub edi, 1
// 004066e9  79f5                 jns 0x4066e0
// 004066eb  5e                   pop esi
// 004066ec  5d                   pop ebp
// 004066ed  5b                   pop ebx
// 004066ee  5f                   pop edi
// 004066ef  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
