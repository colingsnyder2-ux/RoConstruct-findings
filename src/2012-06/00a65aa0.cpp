// roc 2012-06 00a65aa0  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65aa0
//
// 00a65aa0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a65aa3  83ec18               sub esp, 0x18
// 00a65aa6  85c0                 test eax, eax
// 00a65aa8  7517                 jne 0xa65ac1
// 00a65aaa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a65aae  c70000000000         mov dword ptr [eax], 0
// 00a65ab4  c7400400000000       mov dword ptr [eax + 4], 0
// 00a65abb  83c418               add esp, 0x18
// 00a65abe  c20400               ret 4
// 00a65ac1  8d0c24               lea ecx, [esp]
// 00a65ac4  51                   push ecx
// 00a65ac5  6a18                 push 0x18
// 00a65ac7  50                   push eax
// 00a65ac8  ff155021b200         call dword ptr [0xb22150]
// 00a65ace  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a65ad2  8b542404             mov edx, dword ptr [esp + 4]
// 00a65ad6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a65ada  8910                 mov dword ptr [eax], edx
// 00a65adc  894804               mov dword ptr [eax + 4], ecx
// 00a65adf  83c418               add esp, 0x18
// 00a65ae2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
