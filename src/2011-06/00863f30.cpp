// roc 2011-06 00863f30  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00863f30
//
// 00863f30  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00863f36  85c0                 test eax, eax
// 00863f38  740d                 je 0x863f47
// 00863f3a  83786400             cmp dword ptr [eax + 0x64], 0
// 00863f3e  7408                 je 0x863f48
// 00863f40  c7406001000000       mov dword ptr [eax + 0x60], 1
// 00863f47  c3                   ret 
// 00863f48  8bc8                 mov ecx, eax
// 00863f4a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00863f4d  8b5004               mov edx, dword ptr [eax + 4]
// 00863f50  83c154               add ecx, 0x54
// 00863f53  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
