// from server: 100% by auto
// roc 2008-06 005132d0  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005132d0
//
// 005132d0  8b442404             mov eax, dword ptr [esp + 4]
// 005132d4  50                   push eax
// 005132d5  e8a6ffffff           call 0x513280
// 005132da  33c9                 xor ecx, ecx
// 005132dc  84c0                 test al, al
// 005132de  0f94c1               sete cl
// 005132e1  8ac1                 mov al, cl
// 005132e3  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
