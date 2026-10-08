// roc 2009-12 006a0920  unit: RBX::VScriptContext::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0920
//
// 006a0920  8b442404             mov eax, dword ptr [esp + 4]
// 006a0924  56                   push esi
// 006a0925  8bf1                 mov esi, ecx
// 006a0927  8b08                 mov ecx, dword ptr [eax]
// 006a0929  83c004               add eax, 4
// 006a092c  890e                 mov dword ptr [esi], ecx
// 006a092e  50                   push eax
// 006a092f  8d4e04               lea ecx, [esi + 4]
// 006a0932  e86917d6ff           call 0x4020a0
// 006a0937  8bc6                 mov eax, esi
// 006a0939  5e                   pop esi
// 006a093a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\MD2Model.cpp (function ??0Primitive@MD2Model@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/MD2Model.cpp
