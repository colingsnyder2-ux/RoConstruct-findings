// roc 2008-06 0078aab0  unit: CXTColorLum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078aab0
//
// 0078aab0  dd442404             fld qword ptr [esp + 4]
// 0078aab4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078aab7  6a00                 push 0
// 0078aab9  dd5968               fstp qword ptr [ecx + 0x68]
// 0078aabc  dd442410             fld qword ptr [esp + 0x10]
// 0078aac0  6a00                 push 0
// 0078aac2  50                   push eax
// 0078aac3  dd5960               fstp qword ptr [ecx + 0x60]
// 0078aac6  ff15182e8000         call dword ptr [0x802e18]
// 0078aacc  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?SetColor@CXTColorLum@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
