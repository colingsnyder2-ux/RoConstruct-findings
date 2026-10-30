// from server: 100% by auto
// roc 2007-08 0070ff90  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ff90
//
// 0070ff90  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0070ff93  83ec18               sub esp, 0x18
// 0070ff96  85c0                 test eax, eax
// 0070ff98  7517                 jne 0x70ffb1
// 0070ff9a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070ff9e  c70000000000         mov dword ptr [eax], 0
// 0070ffa4  c7400400000000       mov dword ptr [eax + 4], 0
// 0070ffab  83c418               add esp, 0x18
// 0070ffae  c20400               ret 4
// 0070ffb1  8d0c24               lea ecx, [esp]
// 0070ffb4  51                   push ecx
// 0070ffb5  6a18                 push 0x18
// 0070ffb7  50                   push eax
// 0070ffb8  ff15ccd07700         call dword ptr [0x77d0cc]
// 0070ffbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070ffc2  8b542404             mov edx, dword ptr [esp + 4]
// 0070ffc6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070ffca  8910                 mov dword ptr [eax], edx
// 0070ffcc  894804               mov dword ptr [eax + 4], ecx
// 0070ffcf  83c418               add esp, 0x18
// 0070ffd2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
