// from server: 100% by auto
// roc 2008-06 0042e3d0  unit: VCLuaFunction::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e3d0
//
// 0042e3d0  8bc1                 mov eax, ecx
// 0042e3d2  32c9                 xor cl, cl
// 0042e3d4  8808                 mov byte ptr [eax], cl
// 0042e3d6  884801               mov byte ptr [eax + 1], cl
// 0042e3d9  884802               mov byte ptr [eax + 2], cl
// 0042e3dc  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
