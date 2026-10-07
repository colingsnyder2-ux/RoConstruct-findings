// roc 2010-06 00428210  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428210
//
// 00428210  8bc1                 mov eax, ecx
// 00428212  32c9                 xor cl, cl
// 00428214  8808                 mov byte ptr [eax], cl
// 00428216  884801               mov byte ptr [eax + 1], cl
// 00428219  884802               mov byte ptr [eax + 2], cl
// 0042821c  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
