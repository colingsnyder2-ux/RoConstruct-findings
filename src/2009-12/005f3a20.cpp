// roc 2009-12 005f3a20  unit: seg_005f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3a20
//
// 005f3a20  8b442404             mov eax, dword ptr [esp + 4]
// 005f3a24  50                   push eax
// 005f3a25  e8a6ffffff           call 0x5f39d0
// 005f3a2a  33c9                 xor ecx, ecx
// 005f3a2c  84c0                 test al, al
// 005f3a2e  0f94c1               sete cl
// 005f3a31  8ac1                 mov al, cl
// 005f3a33  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
