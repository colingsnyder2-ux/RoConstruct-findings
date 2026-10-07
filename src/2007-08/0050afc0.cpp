// roc 2007-08 0050afc0  unit: seg_00500000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050afc0
//
// 0050afc0  8b442404             mov eax, dword ptr [esp + 4]
// 0050afc4  50                   push eax
// 0050afc5  e896fdffff           call 0x50ad60
// 0050afca  f6d8                 neg al
// 0050afcc  1bc0                 sbb eax, eax
// 0050afce  83c001               add eax, 1
// 0050afd1  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
