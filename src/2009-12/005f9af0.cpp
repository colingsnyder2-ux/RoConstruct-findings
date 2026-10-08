// roc 2009-12 005f9af0  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9af0
//
// 005f9af0  8b442404             mov eax, dword ptr [esp + 4]
// 005f9af4  50                   push eax
// 005f9af5  e8f6feffff           call 0x5f99f0
// 005f9afa  33c9                 xor ecx, ecx
// 005f9afc  84c0                 test al, al
// 005f9afe  0f94c1               sete cl
// 005f9b01  8ac1                 mov al, cl
// 005f9b03  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
