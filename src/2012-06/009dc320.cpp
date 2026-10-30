// roc 2012-06 009dc320  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc320
//
// 009dc320  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dc326  85c0                 test eax, eax
// 009dc328  740d                 je 0x9dc337
// 009dc32a  83786400             cmp dword ptr [eax + 0x64], 0
// 009dc32e  7408                 je 0x9dc338
// 009dc330  c7406001000000       mov dword ptr [eax + 0x60], 1
// 009dc337  c3                   ret 
// 009dc338  8bc8                 mov ecx, eax
// 009dc33a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 009dc33d  8b5004               mov edx, dword ptr [eax + 4]
// 009dc340  83c154               add ecx, 0x54
// 009dc343  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
