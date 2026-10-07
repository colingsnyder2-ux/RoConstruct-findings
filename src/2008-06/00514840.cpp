// roc 2008-06 00514840  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514840
//
// 00514840  8b442404             mov eax, dword ptr [esp + 4]
// 00514844  50                   push eax
// 00514845  e826feffff           call 0x514670
// 0051484a  33c9                 xor ecx, ecx
// 0051484c  84c0                 test al, al
// 0051484e  0f94c1               sete cl
// 00514851  8ac1                 mov al, cl
// 00514853  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
