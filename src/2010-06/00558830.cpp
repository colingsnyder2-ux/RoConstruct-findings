// from server: 100% by auto
// roc 2010-06 00558830  unit: seg_00550000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558830
//
// 00558830  8b442404             mov eax, dword ptr [esp + 4]
// 00558834  50                   push eax
// 00558835  e886fdffff           call 0x5585c0
// 0055883a  33c9                 xor ecx, ecx
// 0055883c  84c0                 test al, al
// 0055883e  0f94c1               sete cl
// 00558841  8ac1                 mov al, cl
// 00558843  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
