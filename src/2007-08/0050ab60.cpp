// from server: 100% by auto
// roc 2007-08 0050ab60  unit: G3D::GCamera  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ab60
//
// 0050ab60  8b442404             mov eax, dword ptr [esp + 4]
// 0050ab64  50                   push eax
// 0050ab65  e806ffffff           call 0x50aa70
// 0050ab6a  f6d8                 neg al
// 0050ab6c  1bc0                 sbb eax, eax
// 0050ab6e  83c001               add eax, 1
// 0050ab71  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
