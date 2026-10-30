// roc 2010-06 00894ae0  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894ae0
//
// 00894ae0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00894ae3  83ec18               sub esp, 0x18
// 00894ae6  85c0                 test eax, eax
// 00894ae8  7517                 jne 0x894b01
// 00894aea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00894aee  c70000000000         mov dword ptr [eax], 0
// 00894af4  c7400400000000       mov dword ptr [eax + 4], 0
// 00894afb  83c418               add esp, 0x18
// 00894afe  c20400               ret 4
// 00894b01  8d0c24               lea ecx, [esp]
// 00894b04  51                   push ecx
// 00894b05  6a18                 push 0x18
// 00894b07  50                   push eax
// 00894b08  ff15bca09e00         call dword ptr [0x9ea0bc]
// 00894b0e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00894b12  8b542404             mov edx, dword ptr [esp + 4]
// 00894b16  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00894b1a  8910                 mov dword ptr [eax], edx
// 00894b1c  894804               mov dword ptr [eax + 4], ecx
// 00894b1f  83c418               add esp, 0x18
// 00894b22  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
