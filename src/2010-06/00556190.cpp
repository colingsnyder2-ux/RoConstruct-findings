// roc 2010-06 00556190  unit: seg_00550000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00556190
//
// 00556190  8b442404             mov eax, dword ptr [esp + 4]
// 00556194  50                   push eax
// 00556195  e8a6ffffff           call 0x556140
// 0055619a  33c9                 xor ecx, ecx
// 0055619c  84c0                 test al, al
// 0055619e  0f94c1               sete cl
// 005561a1  8ac1                 mov al, cl
// 005561a3  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
