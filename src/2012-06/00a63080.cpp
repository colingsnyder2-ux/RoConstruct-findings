// roc 2012-06 00a63080  unit: CXTColorLum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63080
//
// 00a63080  dd442404             fld qword ptr [esp + 4]
// 00a63084  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a63087  6a00                 push 0
// 00a63089  dd5968               fstp qword ptr [ecx + 0x68]
// 00a6308c  dd442410             fld qword ptr [esp + 0x10]
// 00a63090  6a00                 push 0
// 00a63092  50                   push eax
// 00a63093  dd5960               fstp qword ptr [ecx + 0x60]
// 00a63096  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6309c  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetColor@CXTPColorLum@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
