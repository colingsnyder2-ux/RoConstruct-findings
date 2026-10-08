// from server: 100% by auto
// roc 2011-06 006b2ba0  unit: RBX::VInsertService::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2ba0
//
// 006b2ba0  8b442404             mov eax, dword ptr [esp + 4]
// 006b2ba4  56                   push esi
// 006b2ba5  8bf1                 mov esi, ecx
// 006b2ba7  8b08                 mov ecx, dword ptr [eax]
// 006b2ba9  83c004               add eax, 4
// 006b2bac  890e                 mov dword ptr [esi], ecx
// 006b2bae  50                   push eax
// 006b2baf  8d4e04               lea ecx, [esi + 4]
// 006b2bb2  e8a9f9d4ff           call 0x402560
// 006b2bb7  8bc6                 mov eax, esi
// 006b2bb9  5e                   pop esi
// 006b2bba  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
