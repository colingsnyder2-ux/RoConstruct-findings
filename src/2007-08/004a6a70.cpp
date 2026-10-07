// roc 2007-08 004a6a70  unit: RBX::Network::Replicator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6a70
//
// 004a6a70  8b442404             mov eax, dword ptr [esp + 4]
// 004a6a74  56                   push esi
// 004a6a75  8bf1                 mov esi, ecx
// 004a6a77  8b08                 mov ecx, dword ptr [eax]
// 004a6a79  83c004               add eax, 4
// 004a6a7c  890e                 mov dword ptr [esi], ecx
// 004a6a7e  50                   push eax
// 004a6a7f  8d4e04               lea ecx, [esi + 4]
// 004a6a82  e8d9bff5ff           call 0x402a60
// 004a6a87  8bc6                 mov eax, esi
// 004a6a89  5e                   pop esi
// 004a6a8a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
