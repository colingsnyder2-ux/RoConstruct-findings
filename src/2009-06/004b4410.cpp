// from server: 100% by auto
// roc 2009-06 004b4410  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b4410
//
// 004b4410  8b442404             mov eax, dword ptr [esp + 4]
// 004b4414  56                   push esi
// 004b4415  8bf1                 mov esi, ecx
// 004b4417  8b08                 mov ecx, dword ptr [eax]
// 004b4419  83c004               add eax, 4
// 004b441c  890e                 mov dword ptr [esi], ecx
// 004b441e  50                   push eax
// 004b441f  8d4e04               lea ecx, [esi + 4]
// 004b4422  e8d9e0f4ff           call 0x402500
// 004b4427  8bc6                 mov eax, esi
// 004b4429  5e                   pop esi
// 004b442a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
