// from server: 100% by auto
// roc 2007-08 005096d0  unit: G3D::GCamera  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005096d0
//
// 005096d0  8b442404             mov eax, dword ptr [esp + 4]
// 005096d4  50                   push eax
// 005096d5  e8a6ffffff           call 0x509680
// 005096da  f6d8                 neg al
// 005096dc  1bc0                 sbb eax, eax
// 005096de  83c001               add eax, 1
// 005096e1  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
