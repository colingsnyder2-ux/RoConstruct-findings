// roc 2009-06 00779c30  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779c30
//
// 00779c30  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00779c36  85c0                 test eax, eax
// 00779c38  740d                 je 0x779c47
// 00779c3a  83786400             cmp dword ptr [eax + 0x64], 0
// 00779c3e  7408                 je 0x779c48
// 00779c40  c7406001000000       mov dword ptr [eax + 0x60], 1
// 00779c47  c3                   ret 
// 00779c48  8bc8                 mov ecx, eax
// 00779c4a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00779c4d  8b5004               mov edx, dword ptr [eax + 4]
// 00779c50  83c154               add ecx, 0x54
// 00779c53  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
