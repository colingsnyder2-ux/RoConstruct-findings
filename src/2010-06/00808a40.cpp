// roc 2010-06 00808a40  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808a40
//
// 00808a40  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00808a46  85c0                 test eax, eax
// 00808a48  740d                 je 0x808a57
// 00808a4a  83786400             cmp dword ptr [eax + 0x64], 0
// 00808a4e  7408                 je 0x808a58
// 00808a50  c7406001000000       mov dword ptr [eax + 0x60], 1
// 00808a57  c3                   ret 
// 00808a58  8bc8                 mov ecx, eax
// 00808a5a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00808a5d  8b5004               mov edx, dword ptr [eax + 4]
// 00808a60  83c154               add ecx, 0x54
// 00808a63  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
