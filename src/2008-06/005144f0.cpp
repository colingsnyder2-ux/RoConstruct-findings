// from server: 100% by auto
// roc 2008-06 005144f0  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005144f0
//
// 005144f0  8b442404             mov eax, dword ptr [esp + 4]
// 005144f4  50                   push eax
// 005144f5  e806ffffff           call 0x514400
// 005144fa  33c9                 xor ecx, ecx
// 005144fc  84c0                 test al, al
// 005144fe  0f94c1               sete cl
// 00514501  8ac1                 mov al, cl
// 00514503  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
