// roc 2009-12 005f6cd0  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6cd0
//
// 005f6cd0  8b442404             mov eax, dword ptr [esp + 4]
// 005f6cd4  50                   push eax
// 005f6cd5  e886fdffff           call 0x5f6a60
// 005f6cda  33c9                 xor ecx, ecx
// 005f6cdc  84c0                 test al, al
// 005f6cde  0f94c1               sete cl
// 005f6ce1  8ac1                 mov al, cl
// 005f6ce3  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
