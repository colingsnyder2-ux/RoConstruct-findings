// from server: 100% by auto
// roc 2011-06 00540170  unit: G3D::MemoryManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00540170
//
// 00540170  8b442404             mov eax, dword ptr [esp + 4]
// 00540174  50                   push eax
// 00540175  e8a6ffffff           call 0x540120
// 0054017a  33c9                 xor ecx, ecx
// 0054017c  84c0                 test al, al
// 0054017e  0f94c1               sete cl
// 00540181  8ac1                 mov al, cl
// 00540183  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
