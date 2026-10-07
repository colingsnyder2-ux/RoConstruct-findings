// roc 2012-06 007fab20  unit: RBX::VInsertService::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007fab20
//
// 007fab20  8b442404             mov eax, dword ptr [esp + 4]
// 007fab24  56                   push esi
// 007fab25  8bf1                 mov esi, ecx
// 007fab27  8b08                 mov ecx, dword ptr [eax]
// 007fab29  83c004               add eax, 4
// 007fab2c  890e                 mov dword ptr [esi], ecx
// 007fab2e  50                   push eax
// 007fab2f  8d4e04               lea ecx, [esi + 4]
// 007fab32  e8697bc0ff           call 0x4026a0
// 007fab37  8bc6                 mov eax, esi
// 007fab39  5e                   pop esi
// 007fab3a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
