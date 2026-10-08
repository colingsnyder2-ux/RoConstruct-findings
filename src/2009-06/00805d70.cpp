// roc 2009-06 00805d70  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00805d70
//
// 00805d70  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00805d73  83ec18               sub esp, 0x18
// 00805d76  85c0                 test eax, eax
// 00805d78  7517                 jne 0x805d91
// 00805d7a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00805d7e  c70000000000         mov dword ptr [eax], 0
// 00805d84  c7400400000000       mov dword ptr [eax + 4], 0
// 00805d8b  83c418               add esp, 0x18
// 00805d8e  c20400               ret 4
// 00805d91  8d0c24               lea ecx, [esp]
// 00805d94  51                   push ecx
// 00805d95  6a18                 push 0x18
// 00805d97  50                   push eax
// 00805d98  ff1564e18900         call dword ptr [0x89e164]
// 00805d9e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00805da2  8b542404             mov edx, dword ptr [esp + 4]
// 00805da6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00805daa  8910                 mov dword ptr [eax], edx
// 00805dac  894804               mov dword ptr [eax + 4], ecx
// 00805daf  83c418               add esp, 0x18
// 00805db2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
