// roc 2009-06 00427180  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427180
//
// 00427180  8bc1                 mov eax, ecx
// 00427182  32c9                 xor cl, cl
// 00427184  8808                 mov byte ptr [eax], cl
// 00427186  884801               mov byte ptr [eax + 1], cl
// 00427189  884802               mov byte ptr [eax + 2], cl
// 0042718c  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
