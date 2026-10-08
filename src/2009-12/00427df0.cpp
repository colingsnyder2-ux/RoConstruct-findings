// roc 2009-12 00427df0  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427df0
//
// 00427df0  8bc1                 mov eax, ecx
// 00427df2  32c9                 xor cl, cl
// 00427df4  8808                 mov byte ptr [eax], cl
// 00427df6  884801               mov byte ptr [eax + 1], cl
// 00427df9  884802               mov byte ptr [eax + 2], cl
// 00427dfc  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
