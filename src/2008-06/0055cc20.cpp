// from server: 100% by auto
// roc 2008-06 0055cc20  unit: RBX::MD5HasherImpl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055cc20
//
// 0055cc20  8b442404             mov eax, dword ptr [esp + 4]
// 0055cc24  56                   push esi
// 0055cc25  8bf1                 mov esi, ecx
// 0055cc27  8b08                 mov ecx, dword ptr [eax]
// 0055cc29  83c004               add eax, 4
// 0055cc2c  890e                 mov dword ptr [esi], ecx
// 0055cc2e  50                   push eax
// 0055cc2f  8d4e04               lea ecx, [esi + 4]
// 0055cc32  e87959eaff           call 0x4025b0
// 0055cc37  8bc6                 mov eax, esi
// 0055cc39  5e                   pop esi
// 0055cc3a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
