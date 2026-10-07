// roc 2011-06 008eaca0  unit: CXTColorLum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eaca0
//
// 008eaca0  dd442404             fld qword ptr [esp + 4]
// 008eaca4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008eaca7  6a00                 push 0
// 008eaca9  dd5968               fstp qword ptr [ecx + 0x68]
// 008eacac  dd442410             fld qword ptr [esp + 0x10]
// 008eacb0  6a00                 push 0
// 008eacb2  50                   push eax
// 008eacb3  dd5960               fstp qword ptr [ecx + 0x60]
// 008eacb6  ff15ec19a400         call dword ptr [0xa419ec]
// 008eacbc  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetColor@CXTPColorLum@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
