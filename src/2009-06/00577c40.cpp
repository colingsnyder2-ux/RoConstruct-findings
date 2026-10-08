// from server: 100% by auto
// roc 2009-06 00577c40  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577c40
//
// 00577c40  8b442404             mov eax, dword ptr [esp + 4]
// 00577c44  50                   push eax
// 00577c45  e8a6ffffff           call 0x577bf0
// 00577c4a  33c9                 xor ecx, ecx
// 00577c4c  84c0                 test al, al
// 00577c4e  0f94c1               sete cl
// 00577c51  8ac1                 mov al, cl
// 00577c53  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
