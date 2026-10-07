// roc 2012-06 0062c370  unit: G3D::Sphere  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c370
//
// 0062c370  8b442404             mov eax, dword ptr [esp + 4]
// 0062c374  50                   push eax
// 0062c375  e8a6ffffff           call 0x62c320
// 0062c37a  33c9                 xor ecx, ecx
// 0062c37c  84c0                 test al, al
// 0062c37e  0f94c1               sete cl
// 0062c381  8ac1                 mov al, cl
// 0062c383  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
