// roc 2009-12 00854990  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854990
//
// 00854990  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00854996  85c0                 test eax, eax
// 00854998  740d                 je 0x8549a7
// 0085499a  83786400             cmp dword ptr [eax + 0x64], 0
// 0085499e  7408                 je 0x8549a8
// 008549a0  c7406001000000       mov dword ptr [eax + 0x60], 1
// 008549a7  c3                   ret 
// 008549a8  8bc8                 mov ecx, eax
// 008549aa  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008549ad  8b5004               mov edx, dword ptr [eax + 4]
// 008549b0  83c154               add ecx, 0x54
// 008549b3  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
